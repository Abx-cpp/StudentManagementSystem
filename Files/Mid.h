#pragma once
#include <fstream>
#include <string>
#include <msclr\marshal_cppstd.h> 

using namespace System;
using namespace System::Data;
using namespace System::Data::SqlClient;
using namespace msclr::interop;
using namespace System::Windows::Forms;
using namespace System::Collections;
using namespace System::ComponentModel;
using namespace System::Drawing;
using namespace System::ComponentModel::Design;

ref class Mid
{
public:
    void WriteMarks(
        String^ connStr,
        String^ Title,
        array<String^>^ scores,
        array<String^>^ names,
        array<String^>^ rolls)
    {
        int subjID;
        {
            SqlConnection^ c = gcnew SqlConnection(connStr);
            c->Open();
            SqlCommand^ cmd = gcnew SqlCommand("SELECT SubjectID FROM Subject WHERE Name = @nm", c);
            cmd->Parameters->AddWithValue("@nm", Title);
            Object^ r = cmd->ExecuteScalar();
            if (r == nullptr) {
                MessageBox::Show("Subject not found: " + Title, "Validation", MessageBoxButtons::OK, MessageBoxIcon::Warning);
                c->Close();
                return;
            }
            subjID = safe_cast<int>(r);
            c->Close();
        }

        SqlConnection^ conn = gcnew SqlConnection(connStr);
        conn->Open();
        SqlCommand^ ins = gcnew SqlCommand(
            "INSERT INTO ExamScore (ExamID, StudentID, MarksObtained) VALUES (@examID, @sid, @score)", conn);

        // Fetch ExamID from Exam table based on the Type and Subject
        SqlCommand^ getExamIDCmd = gcnew SqlCommand("SELECT ExamID FROM Exam WHERE Type = @type AND SubjectID = @subj", conn);
        getExamIDCmd->Parameters->AddWithValue("@type", "Midterm");
        getExamIDCmd->Parameters->AddWithValue("@subj", subjID);

        Object^ examIDResult = getExamIDCmd->ExecuteScalar();
        if (examIDResult == nullptr) {
            MessageBox::Show("Midterm Exam not found", "Validation", MessageBoxButtons::OK, MessageBoxIcon::Warning);
            conn->Close();
            return;
        }
        int examID = safe_cast<int>(examIDResult);

        // Insert marks for each student
        ins->Parameters->Add("@examID", SqlDbType::Int)->Value = examID;
        ins->Parameters->Add("@sid", SqlDbType::VarChar, 20);
        ins->Parameters->Add("@score", SqlDbType::Int);

        for (int i = 0; i < scores->Length; ++i)
        {
            String^ txt = scores[i]->Trim();
            if (String::IsNullOrEmpty(txt)) continue;

            int val;
            if (!Int32::TryParse(txt, val) || val < 0 || val > 100)
            {
                MessageBox::Show("Invalid Midterm mark for " + names[i] + " (" + rolls[i] + ")", "Validation", MessageBoxButtons::OK, MessageBoxIcon::Warning);
                conn->Close();
                return;
            }

            ins->Parameters["@sid"]->Value = rolls[i];
            ins->Parameters["@score"]->Value = val;
            ins->ExecuteNonQuery();
        }

        conn->Close();
        MessageBox::Show("Midterm marks saved.", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
    }
};
