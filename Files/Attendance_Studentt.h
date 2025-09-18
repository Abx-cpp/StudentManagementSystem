#pragma once
#include <fstream>
#include <iostream>
#include <string>
#include <cstring>
#include <msclr/marshal_cppstd.h>
namespace SMS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;
	using namespace msclr::interop;

	/// <summary>
	/// Summary for Attendance_Studentt
	/// </summary>
	public ref class Attendance_Studentt : public System::Windows::Forms::Form
	{
	public:
		String^ line;
		String^ Subject;
		String^ rollNo;
		String^ status;
		int presentCount = 0;
		int absentCount = 0;
		int totalCount = 5;
		String^ selectedSubject;


		void SetSubject(String^ subj)
		{
			this->selectedSubject = subj;
		}
		
		void SetRollNo(String^ rn)
		{
			this->rollNo = rn;
		}

	

	
		Attendance_Studentt(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		Attendance_Studentt(String^ connStr, String^ rollNo, String^ subject)
		{
			InitializeComponent();
			this->connectionString = connStr;
			this->rollNo = rollNo;
			this->selectedSubject = subject;
			this->Load += gcnew System::EventHandler(this, &Attendance_Studentt::Attendance_Studentt_Load);
		}


	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Attendance_Studentt()
		{
			if (components)
			{
				delete components;
			}
		}

		void Attendance_Studentt_Load(System::Object^ sender, System::EventArgs^ e)
		{
			// Display the roll number in the text box
			rollno_textBox->Text = rollNo;

			try
			{
				SqlConnection^ conn = gcnew SqlConnection(connectionString);
				conn->Open();

				SqlCommand^ cmdSubjectID = gcnew SqlCommand(
					"SELECT SubjectID FROM Subject WHERE Name = @sub", conn);
				cmdSubjectID->Parameters->AddWithValue("@sub", selectedSubject);

				Object^ subjectIDResult = cmdSubjectID->ExecuteScalar();
				if (subjectIDResult == nullptr)
				{
					MessageBox::Show("Subject not found: " + selectedSubject, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					conn->Close();
					return;
				}

				// Convert the retrieved SubjectID to an integer
				int subjectID = safe_cast<int>(subjectIDResult);

				SqlCommand^ cmdP = gcnew SqlCommand(
					"SELECT COUNT(*) FROM Attendance "
					"WHERE SubjectID = @sub AND StudentID = @r AND Status = 'Present';",
					conn);
				cmdP->Parameters->AddWithValue("@sub", subjectID);  // Pass the SubjectID
				cmdP->Parameters->AddWithValue("@r", rollNo);  // Use rollNo as reference for StudentID
				presentCount = safe_cast<int>(cmdP->ExecuteScalar());

				SqlCommand^ cmdA = gcnew SqlCommand(
					"SELECT COUNT(*) FROM Attendance "
					"WHERE SubjectID = @sub AND StudentID = @r AND Status = 'Absent';",
					conn);
				cmdA->Parameters->AddWithValue("@sub", subjectID);  // Pass the SubjectID
				cmdA->Parameters->AddWithValue("@r", rollNo);  // Use rollNo as reference for StudentID
				absentCount = safe_cast<int>(cmdA->ExecuteScalar());

				// Total = present + absent
				totalCount = presentCount + absentCount;

				conn->Close();
			}
			catch (Exception^ ex)
			{
				MessageBox::Show("Error loading attendance: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}

			// Update the UI with the counts
			present_textBox->Text = presentCount.ToString();
			absent_textBox->Text = absentCount.ToString();
			overall_textBox->Text = totalCount.ToString();
		}



	private: System::Windows::Forms::Button^ EXIT_button;
	private: System::Windows::Forms::TextBox^ absent_textBox;
	protected:

	private: System::Windows::Forms::Label^ absentlabel;
	private: System::Windows::Forms::Label^ presentlabel;
	private: System::Windows::Forms::TextBox^ present_textBox;

	private: System::Windows::Forms::Label^ OVERALLlabel;
	private: System::Windows::Forms::TextBox^ overall_textBox;


	private: System::Windows::Forms::Label^ ATTENDANCE_label;



	private: System::Windows::Forms::Panel^ Logo_WHO;
	private: System::Windows::Forms::Label^ label_paanel_WHO_2;
	private: System::Windows::Forms::Label^ label_panel;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::TextBox^ rollno_textBox;

	private: System::Windows::Forms::Label^ rollno_label;


	private: System::Windows::Forms::Label^ label1;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;
		String^ connectionString =
			"Data Source=LAPTOP-7E9PK6M6\\SQLEXPRESS;"
			"Initial Catalog=Flex;"
			"Integrated Security=True;";

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Attendance_Studentt::typeid));
			this->EXIT_button = (gcnew System::Windows::Forms::Button());
			this->absent_textBox = (gcnew System::Windows::Forms::TextBox());
			this->absentlabel = (gcnew System::Windows::Forms::Label());
			this->presentlabel = (gcnew System::Windows::Forms::Label());
			this->present_textBox = (gcnew System::Windows::Forms::TextBox());
			this->OVERALLlabel = (gcnew System::Windows::Forms::Label());
			this->overall_textBox = (gcnew System::Windows::Forms::TextBox());
			this->ATTENDANCE_label = (gcnew System::Windows::Forms::Label());
			this->Logo_WHO = (gcnew System::Windows::Forms::Panel());
			this->label_paanel_WHO_2 = (gcnew System::Windows::Forms::Label());
			this->label_panel = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->rollno_textBox = (gcnew System::Windows::Forms::TextBox());
			this->rollno_label = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Logo_WHO->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// EXIT_button
			// 
			this->EXIT_button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(2)), static_cast<System::Int32>(static_cast<System::Byte>(119)),
				static_cast<System::Int32>(static_cast<System::Byte>(189)));
			this->EXIT_button->ForeColor = System::Drawing::Color::White;
			this->EXIT_button->Location = System::Drawing::Point(543, 537);
			this->EXIT_button->Name = L"EXIT_button";
			this->EXIT_button->Size = System::Drawing::Size(178, 57);
			this->EXIT_button->TabIndex = 73;
			this->EXIT_button->Text = L"EXIT";
			this->EXIT_button->UseVisualStyleBackColor = false;
			this->EXIT_button->Click += gcnew System::EventHandler(this, &Attendance_Studentt::EXIT_button_Click);
			// 
			// absent_textBox
			// 
			this->absent_textBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->absent_textBox->Location = System::Drawing::Point(441, 384);
			this->absent_textBox->Name = L"absent_textBox";
			this->absent_textBox->ReadOnly = true;
			this->absent_textBox->Size = System::Drawing::Size(259, 26);
			this->absent_textBox->TabIndex = 72;
			// 
			// absentlabel
			// 
			this->absentlabel->AutoSize = true;
			this->absentlabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->absentlabel->Location = System::Drawing::Point(262, 383);
			this->absentlabel->Name = L"absentlabel";
			this->absentlabel->Size = System::Drawing::Size(92, 30);
			this->absentlabel->TabIndex = 71;
			this->absentlabel->Text = L"Absent";
			// 
			// presentlabel
			// 
			this->presentlabel->AutoSize = true;
			this->presentlabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->presentlabel->Location = System::Drawing::Point(262, 318);
			this->presentlabel->Name = L"presentlabel";
			this->presentlabel->Size = System::Drawing::Size(101, 30);
			this->presentlabel->TabIndex = 70;
			this->presentlabel->Text = L"Present";
			// 
			// present_textBox
			// 
			this->present_textBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->present_textBox->Location = System::Drawing::Point(442, 323);
			this->present_textBox->Name = L"present_textBox";
			this->present_textBox->ReadOnly = true;
			this->present_textBox->Size = System::Drawing::Size(259, 26);
			this->present_textBox->TabIndex = 69;
			// 
			// OVERALLlabel
			// 
			this->OVERALLlabel->AutoSize = true;
			this->OVERALLlabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->OVERALLlabel->Location = System::Drawing::Point(262, 457);
			this->OVERALLlabel->Name = L"OVERALLlabel";
			this->OVERALLlabel->Size = System::Drawing::Size(95, 30);
			this->OVERALLlabel->TabIndex = 68;
			this->OVERALLlabel->Text = L"Overall";
			// 
			// overall_textBox
			// 
			this->overall_textBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->overall_textBox->Location = System::Drawing::Point(441, 461);
			this->overall_textBox->Name = L"overall_textBox";
			this->overall_textBox->ReadOnly = true;
			this->overall_textBox->Size = System::Drawing::Size(259, 26);
			this->overall_textBox->TabIndex = 67;
			// 
			// ATTENDANCE_label
			// 
			this->ATTENDANCE_label->AutoSize = true;
			this->ATTENDANCE_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24));
			this->ATTENDANCE_label->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(63)),
				static_cast<System::Int32>(static_cast<System::Byte>(155)));
			this->ATTENDANCE_label->Location = System::Drawing::Point(386, 52);
			this->ATTENDANCE_label->Name = L"ATTENDANCE_label";
			this->ATTENDANCE_label->Size = System::Drawing::Size(251, 55);
			this->ATTENDANCE_label->TabIndex = 66;
			this->ATTENDANCE_label->Text = L"STUDENT";
			// 
			// Logo_WHO
			// 
			this->Logo_WHO->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(63)),
				static_cast<System::Int32>(static_cast<System::Byte>(155)));
			this->Logo_WHO->Controls->Add(this->label_paanel_WHO_2);
			this->Logo_WHO->Controls->Add(this->label_panel);
			this->Logo_WHO->Controls->Add(this->pictureBox1);
			this->Logo_WHO->Location = System::Drawing::Point(-2, 2);
			this->Logo_WHO->Name = L"Logo_WHO";
			this->Logo_WHO->Size = System::Drawing::Size(236, 663);
			this->Logo_WHO->TabIndex = 64;
			// 
			// label_paanel_WHO_2
			// 
			this->label_paanel_WHO_2->AutoSize = true;
			this->label_paanel_WHO_2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18));
			this->label_paanel_WHO_2->ForeColor = System::Drawing::Color::White;
			this->label_paanel_WHO_2->Location = System::Drawing::Point(58, 425);
			this->label_paanel_WHO_2->Name = L"label_paanel_WHO_2";
			this->label_paanel_WHO_2->Size = System::Drawing::Size(109, 40);
			this->label_paanel_WHO_2->TabIndex = 2;
			this->label_paanel_WHO_2->Text = L"Wave";
			// 
			// label_panel
			// 
			this->label_panel->AutoSize = true;
			this->label_panel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18));
			this->label_panel->ForeColor = System::Drawing::Color::White;
			this->label_panel->Location = System::Drawing::Point(42, 385);
			this->label_panel->Name = L"label_panel";
			this->label_panel->Size = System::Drawing::Size(141, 40);
			this->label_panel->TabIndex = 1;
			this->label_panel->Text = L"Student";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(-2, 158);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(234, 205);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// rollno_textBox
			// 
			this->rollno_textBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->rollno_textBox->Location = System::Drawing::Point(436, 147);
			this->rollno_textBox->Name = L"rollno_textBox";
			this->rollno_textBox->ReadOnly = true;
			this->rollno_textBox->Size = System::Drawing::Size(259, 26);
			this->rollno_textBox->TabIndex = 63;
			// 
			// rollno_label
			// 
			this->rollno_label->AutoSize = true;
			this->rollno_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->rollno_label->Location = System::Drawing::Point(258, 144);
			this->rollno_label->Name = L"rollno_label";
			this->rollno_label->Size = System::Drawing::Size(157, 30);
			this->rollno_label->TabIndex = 62;
			this->rollno_label->Text = L"Roll Number";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(63)),
				static_cast<System::Int32>(static_cast<System::Byte>(155)));
			this->label1->Location = System::Drawing::Point(334, 243);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(350, 55);
			this->label1->TabIndex = 74;
			this->label1->Text = L"ATTENDANCE";
			// 
			// Attendance_Studentt
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(771, 665);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->EXIT_button);
			this->Controls->Add(this->absent_textBox);
			this->Controls->Add(this->absentlabel);
			this->Controls->Add(this->presentlabel);
			this->Controls->Add(this->present_textBox);
			this->Controls->Add(this->OVERALLlabel);
			this->Controls->Add(this->overall_textBox);
			this->Controls->Add(this->ATTENDANCE_label);
			this->Controls->Add(this->Logo_WHO);
			this->Controls->Add(this->rollno_textBox);
			this->Controls->Add(this->rollno_label);
			this->MaximumSize = System::Drawing::Size(793, 721);
			this->MinimumSize = System::Drawing::Size(793, 721);
			this->Name = L"Attendance_Studentt";
			this->Text = L"Attendance_Studentt";
			this->Load += gcnew System::EventHandler(this, &Attendance_Studentt::Attendance_Studentt_Load);
			this->Logo_WHO->ResumeLayout(false);
			this->Logo_WHO->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void EXIT_button_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	};
}
