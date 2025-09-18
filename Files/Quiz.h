#pragma once

#include <fstream>
#include <string>
#include <msclr\marshal_cppstd.h> 

#include <msclr/marshal_cppstd.h>
#include <string>


using namespace System;
using namespace System::Data;
using namespace System::Data::SqlClient;
using namespace msclr::interop;
using namespace System::Windows::Forms;

ref class Quiz
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
            "INSERT INTO QuizScore (QuizID , StudentID, MarksObtained) VALUES (@quizID , @sid, @score)", conn);

        SqlCommand^ getQuizIDCmd = gcnew SqlCommand("SELECT QuizID FROM Quiz WHERE Title = @title AND SubjectID = @subj", conn);    
        getQuizIDCmd->Parameters->AddWithValue("@title", Title);
        getQuizIDCmd->Parameters->AddWithValue("@subj", subjID);

        Object^ quizIDResult = getQuizIDCmd->ExecuteScalar();
        if (quizIDResult == nullptr) {
            MessageBox::Show("Quiz not found: " + Title, "Validation", MessageBoxButtons::OK, MessageBoxIcon::Warning);
            conn->Close();
            return;
        }
        int quizID = safe_cast<int>(quizIDResult);

        // Insert scores for each student
        ins->Parameters->Add("@quizID", SqlDbType::Int)->Value = quizID;
        ins->Parameters->Add("@sid", SqlDbType::VarChar, 20);
        ins->Parameters->Add("@score", SqlDbType::Int);

        for (int i = 0; i < scores->Length; ++i)
        {
            String^ txt = scores[i]->Trim();
            if (String::IsNullOrEmpty(txt)) continue;

            int val;
            if (!Int32::TryParse(txt, val) || val < 0 || val > 100)
            {
                MessageBox::Show("Invalid Quiz mark for " + names[i] + " (" + rolls[i] + ")", "Validation", MessageBoxButtons::OK, MessageBoxIcon::Warning);
                conn->Close();
                return;
            }

            ins->Parameters["@sid"]->Value = rolls[i];
            ins->Parameters["@score"]->Value = val;
            ins->ExecuteNonQuery();
        }

        conn->Close();
        MessageBox::Show("Quiz marks saved.", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
    }
};