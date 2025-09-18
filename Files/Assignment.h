#pragma once
#include <msclr/marshal_cppstd.h>
#include <string>

using namespace System;
using namespace System::Data;
using namespace System::Data::SqlClient;
using namespace msclr::interop;
using namespace System::Windows::Forms;


ref class Assignment
{
public:
    void WriteMarks(
        String^ connStr,
        String^ Title,
        array<String^>^ scores,
        array<String^>^ names,
        array<String^>^ rolls)
    {
        // Step 1: Lookup SubjectID based on the Title of the assignment
        int subjID;
        {
            SqlConnection^ c = gcnew SqlConnection(connStr);
            c->Open();
            SqlCommand^ cmd = gcnew SqlCommand(
                "SELECT SubjectID FROM Subject WHERE Name = @nm", c);
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

        // Step 2: Fetch AssignmentID based on the Title of the assignment
        int assignmentID;
        {
            SqlConnection^ conn = gcnew SqlConnection(connStr);
            conn->Open();
            SqlCommand^ cmd = gcnew SqlCommand(
                "SELECT AssignmentID FROM Assignment WHERE Title = @title AND SubjectID = @subj", conn);
            cmd->Parameters->AddWithValue("@title", Title);
            cmd->Parameters->AddWithValue("@subj", subjID);

            Object^ r = cmd->ExecuteScalar();
            if (r == nullptr) {
                MessageBox::Show("Assignment not found: " + Title, "Validation", MessageBoxButtons::OK, MessageBoxIcon::Warning);
                conn->Close();
                return;
            }
            assignmentID = safe_cast<int>(r);
            conn->Close();
        }

        // Step 3: Insert assignment marks for each student
        SqlConnection^ connInsert = gcnew SqlConnection(connStr);
        connInsert->Open();
        SqlCommand^ ins = gcnew SqlCommand(
            "INSERT INTO AssignmentScore (AssignmentID, StudentID, MarksObtained) "
            + "VALUES (@assignID, @sid, @score)", connInsert);

        ins->Parameters->Add("@assignID", SqlDbType::Int)->Value = assignmentID;
        ins->Parameters->Add("@sid", SqlDbType::VarChar, 20);
        ins->Parameters->Add("@score", SqlDbType::Int);

        // Loop through all the scores and insert them into the database
        for (int i = 0; i < scores->Length; ++i)
        {
            String^ txt = scores[i]->Trim();
            if (String::IsNullOrEmpty(txt)) continue;

            int val;
            if (!Int32::TryParse(txt, val) || val < 0 || val > 100)
            {
                MessageBox::Show("Invalid Assignment mark for " + names[i] + " (" + rolls[i] + ")", "Validation", MessageBoxButtons::OK, MessageBoxIcon::Warning);
                connInsert->Close();
                return;
            }

            ins->Parameters["@sid"]->Value = rolls[i];
            ins->Parameters["@score"]->Value = val;
            ins->ExecuteNonQuery();
        }

        connInsert->Close();
        MessageBox::Show("Assignment marks saved.", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
    }
};