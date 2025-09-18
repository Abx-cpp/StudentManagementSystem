#pragma once
#include "Quiz.h"
#include "Assignment.h"
#include "Mid.h"
#include "Final.h"
#include <fstream>
#include <msclr/marshal_cppstd.h>
#include <iostream>


namespace SMS {

	using namespace System;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Data::SqlClient;
	using namespace msclr::interop;
	/// <summary>
	/// Summary for Teacher_Marks2
	/// </summary>
	public ref class Teacher_Marks2 : public System::Windows::Forms::Form
	{
	private:

		array<TextBox^>^ statusBoxes;
		array<TextBox^>^ nameBoxes;
		array<TextBox^>^ rollBoxes;


		String^ connectionString;
		String^ currentUserID;
		String^ markType;
		int     Students;  // how many we actually loaded

		void OnLoad(Object^, EventArgs^)
		{
			statusBoxes = gcnew array<TextBox^>{
				status1_textBox, status2_textBox, status3_textBox,
				status4_textBox, status5_textBox, status6_textBox,
				status7_textBox };
			nameBoxes = gcnew array<TextBox^>{
				name1_textBox,   name2_textBox,   name3_textBox,
				name4_textBox,   name5_textBox,   name6_textBox,
				name7_textBox };
			rollBoxes = gcnew array<TextBox^>{
				rollno1_textBox, rollno2_textBox, rollno3_textBox,
				rollno4_textBox, rollno5_textBox, rollno6_textBox,
				rollno7_textBox };

			Students = 0;
			try {
				SqlConnection^ conn = gcnew SqlConnection(connectionString);
				conn->Open();

				SqlCommand^ cmd = gcnew SqlCommand(
					"SELECT TOP 7 RollNO, Name FROM Student ORDER BY RollNO",
					conn);
				SqlDataReader^ rdr = cmd->ExecuteReader();
				while (rdr->Read())
				{
					rollBoxes[Students]->Text = rdr["RollNO"]->ToString();
					nameBoxes[Students]->Text = rdr["Name"]->ToString();
					++Students;
				}
				rdr->Close();
				conn->Close();
			}
			catch (Exception^ ex) {
				MessageBox::Show("Error loading students: " + ex->Message,
					"DB Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}


		void OnSubmit(Object^, EventArgs^)
		{
			// 1) Validate subject
			String^ subj = subject_title_textBox->Text->Trim();
			if (String::IsNullOrEmpty(subj))
			{
				MessageBox::Show("Please enter a Subject name.",
					"Validation", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				return;
			}

			// 2) Build parallel arrays of length Students
			auto scores = gcnew array<String^>(Students);
			auto names = gcnew array<String^>(Students);
			auto rolls = gcnew array<String^>(Students);
			for (int i = 0; i < Students; ++i)
			{
				scores[i] = statusBoxes[i]->Text->Trim();
				names[i] = nameBoxes[i]->Text;
				rolls[i] = rollBoxes[i]->Text;
			}

			// 3) Delegate to correct helper
			if (markType->Equals("QUIZ", StringComparison::OrdinalIgnoreCase))
			{
				Quiz       helper;
				helper.WriteMarks(connectionString, subj, scores, names, rolls);
			}
			else if (markType->Equals("ASSIGNMENT", StringComparison::OrdinalIgnoreCase))
			{
				Assignment helper;
				helper.WriteMarks(connectionString, subj, scores, names, rolls);
			}
			else if (markType->Equals("MID", StringComparison::OrdinalIgnoreCase))
			{
				Mid        helper;
				helper.WriteMarks(connectionString, subj, scores, names, rolls);
			}
			else if (markType->Equals("FINAL", StringComparison::OrdinalIgnoreCase))
			{
				Final      helper;
				helper.WriteMarks(connectionString, subj, scores, names, rolls);
			}
			else
			{
				MessageBox::Show("Unknown mark type: " + markType,
					"Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

			// 4) Close or reset as desired
			this->Close();
		}

		void OnExit(Object^, EventArgs^)
		{
			this->Close();
		}

	public:

		Teacher_Marks2(String^ connStr, String^ userID, String^ markType)
		{
			InitializeComponent();

			connectionString = connStr;
			currentUserID = userID;
			this->markType = markType;

			// wire events
			this->Load += gcnew EventHandler(this, &Teacher_Marks2::OnLoad);
			this->submit_button->Click += gcnew EventHandler(this, &Teacher_Marks2::OnSubmit);
			this->EXIT_button->Click += gcnew EventHandler(this, &Teacher_Marks2::OnExit);

			// show mark type in the header
			ATTENDANCE_label->Text = markType + " Marks";
		}

		

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Teacher_Marks2()
		{

			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ rollno7_textBox;
	protected:

	private: System::Windows::Forms::TextBox^ rollno6_textBox;
	protected:

	private: System::Windows::Forms::TextBox^ rollno5_textBox;

	private: System::Windows::Forms::TextBox^ rollno4_textBox;

	private: System::Windows::Forms::TextBox^ rollno3_textBox;

	private: System::Windows::Forms::TextBox^ rollno2_textBox;

	private: System::Windows::Forms::TextBox^ rollno1_textBox;
	private: System::Windows::Forms::Button^ submit_button;


	private: System::Windows::Forms::TextBox^ name7_textBox;

	private: System::Windows::Forms::TextBox^ status7_textBox;
	private: System::Windows::Forms::TextBox^ name6_textBox;


	private: System::Windows::Forms::TextBox^ status6_textBox;
	private: System::Windows::Forms::TextBox^ name5_textBox;


	private: System::Windows::Forms::TextBox^ status5_textBox;
	private: System::Windows::Forms::TextBox^ name4_textBox;


	private: System::Windows::Forms::TextBox^ status4_textBox;
	private: System::Windows::Forms::TextBox^ name3_textBox;


	private: System::Windows::Forms::TextBox^ status3_textBox;
	private: System::Windows::Forms::TextBox^ name2_textBox;


	private: System::Windows::Forms::TextBox^ status2_textBox;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ Username;
	private: System::Windows::Forms::TextBox^ name1_textBox;

	private: System::Windows::Forms::Button^ EXIT_button;
	private: System::Windows::Forms::TextBox^ status1_textBox;

	private: System::Windows::Forms::Label^ ATTENDANCE_label;
	private: System::Windows::Forms::Panel^ Logo_WHO;
	private: System::Windows::Forms::Label^ label_paanel_WHO_2;
	private: System::Windows::Forms::Label^ label_panel;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::TextBox^ subject_title_textBox;


	protected:


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Teacher_Marks2::typeid));
			this->rollno7_textBox = (gcnew System::Windows::Forms::TextBox());
			this->rollno6_textBox = (gcnew System::Windows::Forms::TextBox());
			this->rollno5_textBox = (gcnew System::Windows::Forms::TextBox());
			this->rollno4_textBox = (gcnew System::Windows::Forms::TextBox());
			this->rollno3_textBox = (gcnew System::Windows::Forms::TextBox());
			this->rollno2_textBox = (gcnew System::Windows::Forms::TextBox());
			this->rollno1_textBox = (gcnew System::Windows::Forms::TextBox());
			this->submit_button = (gcnew System::Windows::Forms::Button());
			this->name7_textBox = (gcnew System::Windows::Forms::TextBox());
			this->status7_textBox = (gcnew System::Windows::Forms::TextBox());
			this->name6_textBox = (gcnew System::Windows::Forms::TextBox());
			this->status6_textBox = (gcnew System::Windows::Forms::TextBox());
			this->name5_textBox = (gcnew System::Windows::Forms::TextBox());
			this->status5_textBox = (gcnew System::Windows::Forms::TextBox());
			this->name4_textBox = (gcnew System::Windows::Forms::TextBox());
			this->status4_textBox = (gcnew System::Windows::Forms::TextBox());
			this->name3_textBox = (gcnew System::Windows::Forms::TextBox());
			this->status3_textBox = (gcnew System::Windows::Forms::TextBox());
			this->name2_textBox = (gcnew System::Windows::Forms::TextBox());
			this->status2_textBox = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Username = (gcnew System::Windows::Forms::Label());
			this->name1_textBox = (gcnew System::Windows::Forms::TextBox());
			this->EXIT_button = (gcnew System::Windows::Forms::Button());
			this->status1_textBox = (gcnew System::Windows::Forms::TextBox());
			this->ATTENDANCE_label = (gcnew System::Windows::Forms::Label());
			this->Logo_WHO = (gcnew System::Windows::Forms::Panel());
			this->label_paanel_WHO_2 = (gcnew System::Windows::Forms::Label());
			this->label_panel = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->subject_title_textBox = (gcnew System::Windows::Forms::TextBox());
			this->Logo_WHO->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// rollno7_textBox
			// 
			this->rollno7_textBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->rollno7_textBox->Location = System::Drawing::Point(584, 459);
			this->rollno7_textBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->rollno7_textBox->Name = L"rollno7_textBox";
			this->rollno7_textBox->ReadOnly = true;
			this->rollno7_textBox->Size = System::Drawing::Size(171, 22);
			this->rollno7_textBox->TabIndex = 148;
			this->rollno7_textBox->TextChanged += gcnew System::EventHandler(this, &Teacher_Marks2::rollno7_textBox_TextChanged);
			// 
			// rollno6_textBox
			// 
			this->rollno6_textBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->rollno6_textBox->Location = System::Drawing::Point(582, 421);
			this->rollno6_textBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->rollno6_textBox->Name = L"rollno6_textBox";
			this->rollno6_textBox->ReadOnly = true;
			this->rollno6_textBox->Size = System::Drawing::Size(171, 22);
			this->rollno6_textBox->TabIndex = 147;
			// 
			// rollno5_textBox
			// 
			this->rollno5_textBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->rollno5_textBox->Location = System::Drawing::Point(584, 383);
			this->rollno5_textBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->rollno5_textBox->Name = L"rollno5_textBox";
			this->rollno5_textBox->ReadOnly = true;
			this->rollno5_textBox->Size = System::Drawing::Size(171, 22);
			this->rollno5_textBox->TabIndex = 146;
			// 
			// rollno4_textBox
			// 
			this->rollno4_textBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->rollno4_textBox->Location = System::Drawing::Point(582, 345);
			this->rollno4_textBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->rollno4_textBox->Name = L"rollno4_textBox";
			this->rollno4_textBox->ReadOnly = true;
			this->rollno4_textBox->Size = System::Drawing::Size(171, 22);
			this->rollno4_textBox->TabIndex = 145;
			// 
			// rollno3_textBox
			// 
			this->rollno3_textBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->rollno3_textBox->Location = System::Drawing::Point(583, 305);
			this->rollno3_textBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->rollno3_textBox->Name = L"rollno3_textBox";
			this->rollno3_textBox->ReadOnly = true;
			this->rollno3_textBox->Size = System::Drawing::Size(171, 22);
			this->rollno3_textBox->TabIndex = 144;
			// 
			// rollno2_textBox
			// 
			this->rollno2_textBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->rollno2_textBox->Location = System::Drawing::Point(583, 269);
			this->rollno2_textBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->rollno2_textBox->Name = L"rollno2_textBox";
			this->rollno2_textBox->ReadOnly = true;
			this->rollno2_textBox->Size = System::Drawing::Size(171, 22);
			this->rollno2_textBox->TabIndex = 143;
			// 
			// rollno1_textBox
			// 
			this->rollno1_textBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->rollno1_textBox->Location = System::Drawing::Point(583, 227);
			this->rollno1_textBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->rollno1_textBox->Name = L"rollno1_textBox";
			this->rollno1_textBox->ReadOnly = true;
			this->rollno1_textBox->Size = System::Drawing::Size(171, 22);
			this->rollno1_textBox->TabIndex = 142;
			this->rollno1_textBox->TextChanged += gcnew System::EventHandler(this, &Teacher_Marks2::rollno1_textBox_TextChanged);
			// 
			// submit_button
			// 
			this->submit_button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(2)), static_cast<System::Int32>(static_cast<System::Byte>(119)),
				static_cast<System::Int32>(static_cast<System::Byte>(189)));
			this->submit_button->ForeColor = System::Drawing::Color::White;
			this->submit_button->Location = System::Drawing::Point(270, 503);
			this->submit_button->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->submit_button->Name = L"submit_button";
			this->submit_button->Size = System::Drawing::Size(159, 46);
			this->submit_button->TabIndex = 141;
			this->submit_button->Text = L"SUBMIT";
			this->submit_button->UseVisualStyleBackColor = false;
			this->submit_button->Click += gcnew System::EventHandler(this, &Teacher_Marks2::submit_button_Click);
			// 
			// name7_textBox
			// 
			this->name7_textBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->name7_textBox->Location = System::Drawing::Point(408, 459);
			this->name7_textBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->name7_textBox->Name = L"name7_textBox";
			this->name7_textBox->ReadOnly = true;
			this->name7_textBox->Size = System::Drawing::Size(171, 22);
			this->name7_textBox->TabIndex = 140;
			// 
			// status7_textBox
			// 
			this->status7_textBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->status7_textBox->Location = System::Drawing::Point(232, 459);
			this->status7_textBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->status7_textBox->Name = L"status7_textBox";
			this->status7_textBox->Size = System::Drawing::Size(171, 22);
			this->status7_textBox->TabIndex = 139;
			// 
			// name6_textBox
			// 
			this->name6_textBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->name6_textBox->Location = System::Drawing::Point(406, 421);
			this->name6_textBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->name6_textBox->Name = L"name6_textBox";
			this->name6_textBox->ReadOnly = true;
			this->name6_textBox->Size = System::Drawing::Size(171, 22);
			this->name6_textBox->TabIndex = 138;
			// 
			// status6_textBox
			// 
			this->status6_textBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->status6_textBox->Location = System::Drawing::Point(230, 421);
			this->status6_textBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->status6_textBox->Name = L"status6_textBox";
			this->status6_textBox->Size = System::Drawing::Size(171, 22);
			this->status6_textBox->TabIndex = 137;
			// 
			// name5_textBox
			// 
			this->name5_textBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->name5_textBox->Location = System::Drawing::Point(408, 383);
			this->name5_textBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->name5_textBox->Name = L"name5_textBox";
			this->name5_textBox->ReadOnly = true;
			this->name5_textBox->Size = System::Drawing::Size(171, 22);
			this->name5_textBox->TabIndex = 136;
			// 
			// status5_textBox
			// 
			this->status5_textBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->status5_textBox->Location = System::Drawing::Point(232, 383);
			this->status5_textBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->status5_textBox->Name = L"status5_textBox";
			this->status5_textBox->Size = System::Drawing::Size(171, 22);
			this->status5_textBox->TabIndex = 135;
			// 
			// name4_textBox
			// 
			this->name4_textBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->name4_textBox->Location = System::Drawing::Point(406, 345);
			this->name4_textBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->name4_textBox->Name = L"name4_textBox";
			this->name4_textBox->ReadOnly = true;
			this->name4_textBox->Size = System::Drawing::Size(171, 22);
			this->name4_textBox->TabIndex = 134;
			// 
			// status4_textBox
			// 
			this->status4_textBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->status4_textBox->Location = System::Drawing::Point(230, 345);
			this->status4_textBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->status4_textBox->Name = L"status4_textBox";
			this->status4_textBox->Size = System::Drawing::Size(171, 22);
			this->status4_textBox->TabIndex = 133;
			// 
			// name3_textBox
			// 
			this->name3_textBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->name3_textBox->Location = System::Drawing::Point(407, 305);
			this->name3_textBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->name3_textBox->Name = L"name3_textBox";
			this->name3_textBox->ReadOnly = true;
			this->name3_textBox->Size = System::Drawing::Size(171, 22);
			this->name3_textBox->TabIndex = 132;
			// 
			// status3_textBox
			// 
			this->status3_textBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->status3_textBox->Location = System::Drawing::Point(231, 305);
			this->status3_textBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->status3_textBox->Name = L"status3_textBox";
			this->status3_textBox->Size = System::Drawing::Size(171, 22);
			this->status3_textBox->TabIndex = 131;
			// 
			// name2_textBox
			// 
			this->name2_textBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->name2_textBox->Location = System::Drawing::Point(407, 269);
			this->name2_textBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->name2_textBox->Name = L"name2_textBox";
			this->name2_textBox->ReadOnly = true;
			this->name2_textBox->Size = System::Drawing::Size(171, 22);
			this->name2_textBox->TabIndex = 130;
			this->name2_textBox->TextChanged += gcnew System::EventHandler(this, &Teacher_Marks2::name2_textBox_TextChanged);
			// 
			// status2_textBox
			// 
			this->status2_textBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->status2_textBox->Location = System::Drawing::Point(231, 269);
			this->status2_textBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->status2_textBox->Name = L"status2_textBox";
			this->status2_textBox->Size = System::Drawing::Size(171, 22);
			this->status2_textBox->TabIndex = 129;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->label2->Location = System::Drawing::Point(447, 193);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(71, 26);
			this->label2->TabIndex = 128;
			this->label2->Text = L"Name";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->label1->Location = System::Drawing::Point(268, 194);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(102, 26);
			this->label1->TabIndex = 127;
			this->label1->Text = L"Obtain %";
			// 
			// Username
			// 
			this->Username->AutoSize = true;
			this->Username->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->Username->Location = System::Drawing::Point(595, 193);
			this->Username->Name = L"Username";
			this->Username->Size = System::Drawing::Size(134, 26);
			this->Username->TabIndex = 126;
			this->Username->Text = L"Roll Number";
			// 
			// name1_textBox
			// 
			this->name1_textBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->name1_textBox->Location = System::Drawing::Point(407, 227);
			this->name1_textBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->name1_textBox->Name = L"name1_textBox";
			this->name1_textBox->ReadOnly = true;
			this->name1_textBox->Size = System::Drawing::Size(171, 22);
			this->name1_textBox->TabIndex = 125;
			this->name1_textBox->TextChanged += gcnew System::EventHandler(this, &Teacher_Marks2::name1_textBox_TextChanged);
			// 
			// EXIT_button
			// 
			this->EXIT_button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(2)), static_cast<System::Int32>(static_cast<System::Byte>(119)),
				static_cast<System::Int32>(static_cast<System::Byte>(189)));
			this->EXIT_button->ForeColor = System::Drawing::Color::White;
			this->EXIT_button->Location = System::Drawing::Point(544, 503);
			this->EXIT_button->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->EXIT_button->Name = L"EXIT_button";
			this->EXIT_button->Size = System::Drawing::Size(159, 46);
			this->EXIT_button->TabIndex = 124;
			this->EXIT_button->Text = L"EXIT";
			this->EXIT_button->UseVisualStyleBackColor = false;
			this->EXIT_button->Click += gcnew System::EventHandler(this, &Teacher_Marks2::EXIT_button_Click);
			// 
			// status1_textBox
			// 
			this->status1_textBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->status1_textBox->Location = System::Drawing::Point(231, 227);
			this->status1_textBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->status1_textBox->Name = L"status1_textBox";
			this->status1_textBox->Size = System::Drawing::Size(171, 22);
			this->status1_textBox->TabIndex = 123;
			this->status1_textBox->TextChanged += gcnew System::EventHandler(this, &Teacher_Marks2::status1_textBox_TextChanged);
			// 
			// ATTENDANCE_label
			// 
			this->ATTENDANCE_label->AutoSize = true;
			this->ATTENDANCE_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24));
			this->ATTENDANCE_label->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(63)),
				static_cast<System::Int32>(static_cast<System::Byte>(155)));
			this->ATTENDANCE_label->Location = System::Drawing::Point(379, 41);
			this->ATTENDANCE_label->Name = L"ATTENDANCE_label";
			this->ATTENDANCE_label->Size = System::Drawing::Size(203, 46);
			this->ATTENDANCE_label->TabIndex = 122;
			this->ATTENDANCE_label->Text = L"SUBJECT";
			// 
			// Logo_WHO
			// 
			this->Logo_WHO->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(63)),
				static_cast<System::Int32>(static_cast<System::Byte>(155)));
			this->Logo_WHO->Controls->Add(this->label_paanel_WHO_2);
			this->Logo_WHO->Controls->Add(this->label_panel);
			this->Logo_WHO->Controls->Add(this->pictureBox1);
			this->Logo_WHO->Location = System::Drawing::Point(-3, -2);
			this->Logo_WHO->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Logo_WHO->Name = L"Logo_WHO";
			this->Logo_WHO->Size = System::Drawing::Size(209, 610);
			this->Logo_WHO->TabIndex = 121;
			// 
			// label_paanel_WHO_2
			// 
			this->label_paanel_WHO_2->AutoSize = true;
			this->label_paanel_WHO_2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18));
			this->label_paanel_WHO_2->ForeColor = System::Drawing::Color::White;
			this->label_paanel_WHO_2->Location = System::Drawing::Point(53, 377);
			this->label_paanel_WHO_2->Name = L"label_paanel_WHO_2";
			this->label_paanel_WHO_2->Size = System::Drawing::Size(91, 36);
			this->label_paanel_WHO_2->TabIndex = 2;
			this->label_paanel_WHO_2->Text = L"Wave";
			// 
			// label_panel
			// 
			this->label_panel->AutoSize = true;
			this->label_panel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18));
			this->label_panel->ForeColor = System::Drawing::Color::White;
			this->label_panel->Location = System::Drawing::Point(35, 344);
			this->label_panel->Name = L"label_panel";
			this->label_panel->Size = System::Drawing::Size(123, 36);
			this->label_panel->TabIndex = 1;
			this->label_panel->Text = L"Teacher";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(-2, 165);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(208, 164);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// subject_title_textBox
			// 
			this->subject_title_textBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->subject_title_textBox->Location = System::Drawing::Point(369, 107);
			this->subject_title_textBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->subject_title_textBox->Name = L"subject_title_textBox";
			this->subject_title_textBox->Size = System::Drawing::Size(230, 22);
			this->subject_title_textBox->TabIndex = 120;
			this->subject_title_textBox->TextChanged += gcnew System::EventHandler(this, &Teacher_Marks2::subject_title_textBox_TextChanged);
			// 
			// Teacher_Marks2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(807, 614);
			this->Controls->Add(this->rollno7_textBox);
			this->Controls->Add(this->rollno6_textBox);
			this->Controls->Add(this->rollno5_textBox);
			this->Controls->Add(this->rollno4_textBox);
			this->Controls->Add(this->rollno3_textBox);
			this->Controls->Add(this->rollno2_textBox);
			this->Controls->Add(this->rollno1_textBox);
			this->Controls->Add(this->submit_button);
			this->Controls->Add(this->name7_textBox);
			this->Controls->Add(this->status7_textBox);
			this->Controls->Add(this->name6_textBox);
			this->Controls->Add(this->status6_textBox);
			this->Controls->Add(this->name5_textBox);
			this->Controls->Add(this->status5_textBox);
			this->Controls->Add(this->name4_textBox);
			this->Controls->Add(this->status4_textBox);
			this->Controls->Add(this->name3_textBox);
			this->Controls->Add(this->status3_textBox);
			this->Controls->Add(this->name2_textBox);
			this->Controls->Add(this->status2_textBox);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Username);
			this->Controls->Add(this->name1_textBox);
			this->Controls->Add(this->EXIT_button);
			this->Controls->Add(this->status1_textBox);
			this->Controls->Add(this->ATTENDANCE_label);
			this->Controls->Add(this->Logo_WHO);
			this->Controls->Add(this->subject_title_textBox);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->MaximumSize = System::Drawing::Size(825, 661);
			this->MinimumSize = System::Drawing::Size(825, 661);
			this->Name = L"Teacher_Marks2";
			this->Text = L"e";
			this->Load += gcnew System::EventHandler(this, &Teacher_Marks2::Teacher_Marks2_Load);
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
	private: System::Void status1_textBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void rollno7_textBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void name1_textBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void name2_textBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void rollno1_textBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void Teacher_Marks2_Load(System::Object^ sender, System::EventArgs^ e) {
		
	}
	private: System::Void subject_title_textBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void submit_button_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
