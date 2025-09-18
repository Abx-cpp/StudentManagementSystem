#pragma once
#include "AddAdmin.h"
#include <iostream>
#include <fstream>
#include <msclr\marshal_cppstd.h>
#include <vcclr.h>
#include <vector>

namespace SMS {

	using namespace System;
	using namespace msclr::interop;
	using namespace System::IO;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	

	/// <summary>
	/// Summary for Edit_Student
	/// </summary>
	public ref class Edit_Student : public System::Windows::Forms::Form
	{
	private:
		String^ rollNo;
		String^ name;
		String^ gender;
		String^ cnic;
		String^ dob;
		String^ mobileNumber;
		String^ section;
		String^ campus;
		String^ batch;
		int Counter;
		bool found;
		String^ connectionString;

	public:
		void SetRollNo(String^ title)
		{
			this->rollNo = title;
		}

		String^ ReturnRollNo()
		{
			return rollNo;
		}

		Edit_Student(String^ rollNumber)
		{
			InitializeComponent();
			// TODO: Use rollNumber as needed
			this->rollNo = rollNumber;
		}



	
		void Counter_Increament() {
			Counter++;
		}

		int Counter_Return() {
			return Counter;
		}


		Edit_Student()
		{
			Counter = 0;
			found = true;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			connectionString =
				"Data Source=LAPTOP-7E9PK6M6\\SQLEXPRESS;"
				"Initial Catalog=Flex;"
				"Integrated Security=True;";


		}



	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Edit_Student()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox^ GendercomboBox;
	protected:
	private: System::Windows::Forms::Button^ add_button;
	private: System::Windows::Forms::Label^ section_label;
	private: System::Windows::Forms::Label^ batch_label;
	private: System::Windows::Forms::Label^ campus__label;
	private: System::Windows::Forms::Label^ rollno_label;
	private: System::Windows::Forms::DateTimePicker^ dob_dateTimePicker;
	private: System::Windows::Forms::Label^ gender_label;
	private: System::Windows::Forms::Label^ dob_label;
	private: System::Windows::Forms::Label^ cnic_label;
	private: System::Windows::Forms::Label^ mobileno_label;
	private: System::Windows::Forms::TextBox^ section_textBox;
	private: System::Windows::Forms::TextBox^ campus_textBox;
	private: System::Windows::Forms::TextBox^ batch_textBox;
	private: System::Windows::Forms::TextBox^ rollno_textBox;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ cnic_textBox;
	private: System::Windows::Forms::TextBox^ mobile_num_textBox;
	private: System::Windows::Forms::Label^ TITLE;
	private: System::Windows::Forms::Button^ EXIT_button;
	private: System::Windows::Forms::Label^ Name_label;
	private: System::Windows::Forms::TextBox^ name_textBox;
	private: System::Windows::Forms::Panel^ Logo_WHO;
	private: System::Windows::Forms::Label^ label_paanel_WHO_2;
	private: System::Windows::Forms::Label^ label_panel_WHO_1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Edit_Student::typeid));
			this->GendercomboBox = (gcnew System::Windows::Forms::ComboBox());
			this->add_button = (gcnew System::Windows::Forms::Button());
			this->section_label = (gcnew System::Windows::Forms::Label());
			this->batch_label = (gcnew System::Windows::Forms::Label());
			this->campus__label = (gcnew System::Windows::Forms::Label());
			this->rollno_label = (gcnew System::Windows::Forms::Label());
			this->dob_dateTimePicker = (gcnew System::Windows::Forms::DateTimePicker());
			this->gender_label = (gcnew System::Windows::Forms::Label());
			this->dob_label = (gcnew System::Windows::Forms::Label());
			this->cnic_label = (gcnew System::Windows::Forms::Label());
			this->mobileno_label = (gcnew System::Windows::Forms::Label());
			this->section_textBox = (gcnew System::Windows::Forms::TextBox());
			this->campus_textBox = (gcnew System::Windows::Forms::TextBox());
			this->batch_textBox = (gcnew System::Windows::Forms::TextBox());
			this->rollno_textBox = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->cnic_textBox = (gcnew System::Windows::Forms::TextBox());
			this->mobile_num_textBox = (gcnew System::Windows::Forms::TextBox());
			this->TITLE = (gcnew System::Windows::Forms::Label());
			this->EXIT_button = (gcnew System::Windows::Forms::Button());
			this->Name_label = (gcnew System::Windows::Forms::Label());
			this->name_textBox = (gcnew System::Windows::Forms::TextBox());
			this->Logo_WHO = (gcnew System::Windows::Forms::Panel());
			this->label_paanel_WHO_2 = (gcnew System::Windows::Forms::Label());
			this->label_panel_WHO_1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->Logo_WHO->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// GendercomboBox
			// 
			this->GendercomboBox->FormattingEnabled = true;
			this->GendercomboBox->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Male", L"Female" });
			this->GendercomboBox->Location = System::Drawing::Point(471, 126);
			this->GendercomboBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->GendercomboBox->Name = L"GendercomboBox";
			this->GendercomboBox->Size = System::Drawing::Size(416, 24);
			this->GendercomboBox->TabIndex = 89;
			// 
			// add_button
			// 
			this->add_button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(2)), static_cast<System::Int32>(static_cast<System::Byte>(119)),
				static_cast<System::Int32>(static_cast<System::Byte>(189)));
			this->add_button->ForeColor = System::Drawing::Color::White;
			this->add_button->Location = System::Drawing::Point(364, 506);
			this->add_button->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->add_button->Name = L"add_button";
			this->add_button->Size = System::Drawing::Size(159, 46);
			this->add_button->TabIndex = 88;
			this->add_button->Text = L"EDIT";
			this->add_button->UseVisualStyleBackColor = false;
			this->add_button->Click += gcnew System::EventHandler(this, &Edit_Student::add_button_Click);
			// 
			// section_label
			// 
			this->section_label->AutoSize = true;
			this->section_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->section_label->Location = System::Drawing::Point(332, 392);
			this->section_label->Name = L"section_label";
			this->section_label->Size = System::Drawing::Size(73, 24);
			this->section_label->TabIndex = 87;
			this->section_label->Text = L"Section";
			// 
			// batch_label
			// 
			this->batch_label->AutoSize = true;
			this->batch_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->batch_label->Location = System::Drawing::Point(335, 458);
			this->batch_label->Name = L"batch_label";
			this->batch_label->Size = System::Drawing::Size(57, 24);
			this->batch_label->TabIndex = 86;
			this->batch_label->Text = L"Batch";
			// 
			// campus__label
			// 
			this->campus__label->AutoSize = true;
			this->campus__label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->campus__label->Location = System::Drawing::Point(334, 426);
			this->campus__label->Name = L"campus__label";
			this->campus__label->Size = System::Drawing::Size(80, 24);
			this->campus__label->TabIndex = 85;
			this->campus__label->Text = L"Campus";
			// 
			// rollno_label
			// 
			this->rollno_label->AutoSize = true;
			this->rollno_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->rollno_label->Location = System::Drawing::Point(332, 359);
			this->rollno_label->Name = L"rollno_label";
			this->rollno_label->Size = System::Drawing::Size(116, 24);
			this->rollno_label->TabIndex = 84;
			this->rollno_label->Text = L"Roll Number";
			// 
			// dob_dateTimePicker
			// 
			this->dob_dateTimePicker->Location = System::Drawing::Point(472, 194);
			this->dob_dateTimePicker->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dob_dateTimePicker->Name = L"dob_dateTimePicker";
			this->dob_dateTimePicker->Size = System::Drawing::Size(416, 22);
			this->dob_dateTimePicker->TabIndex = 83;
			// 
			// gender_label
			// 
			this->gender_label->AutoSize = true;
			this->gender_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->gender_label->Location = System::Drawing::Point(308, 124);
			this->gender_label->Name = L"gender_label";
			this->gender_label->Size = System::Drawing::Size(74, 24);
			this->gender_label->TabIndex = 82;
			this->gender_label->Text = L"Gender";
			// 
			// dob_label
			// 
			this->dob_label->AutoSize = true;
			this->dob_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->dob_label->Location = System::Drawing::Point(311, 190);
			this->dob_label->Name = L"dob_label";
			this->dob_label->Size = System::Drawing::Size(110, 24);
			this->dob_label->TabIndex = 81;
			this->dob_label->Text = L"Date of Birth";
			// 
			// cnic_label
			// 
			this->cnic_label->AutoSize = true;
			this->cnic_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->cnic_label->Location = System::Drawing::Point(310, 158);
			this->cnic_label->Name = L"cnic_label";
			this->cnic_label->Size = System::Drawing::Size(54, 24);
			this->cnic_label->TabIndex = 80;
			this->cnic_label->Text = L"CNIC";
			// 
			// mobileno_label
			// 
			this->mobileno_label->AutoSize = true;
			this->mobileno_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->mobileno_label->Location = System::Drawing::Point(309, 228);
			this->mobileno_label->Name = L"mobileno_label";
			this->mobileno_label->Size = System::Drawing::Size(141, 24);
			this->mobileno_label->TabIndex = 79;
			this->mobileno_label->Text = L"Mobile Number";
			// 
			// section_textBox
			// 
			this->section_textBox->Location = System::Drawing::Point(471, 394);
			this->section_textBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->section_textBox->Name = L"section_textBox";
			this->section_textBox->Size = System::Drawing::Size(416, 22);
			this->section_textBox->TabIndex = 78;
			// 
			// campus_textBox
			// 
			this->campus_textBox->Location = System::Drawing::Point(471, 428);
			this->campus_textBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->campus_textBox->Name = L"campus_textBox";
			this->campus_textBox->Size = System::Drawing::Size(416, 22);
			this->campus_textBox->TabIndex = 77;
			// 
			// batch_textBox
			// 
			this->batch_textBox->Location = System::Drawing::Point(471, 462);
			this->batch_textBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->batch_textBox->Name = L"batch_textBox";
			this->batch_textBox->Size = System::Drawing::Size(416, 22);
			this->batch_textBox->TabIndex = 76;
			// 
			// rollno_textBox
			// 
			this->rollno_textBox->Location = System::Drawing::Point(471, 364);
			this->rollno_textBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->rollno_textBox->Name = L"rollno_textBox";
			this->rollno_textBox->Size = System::Drawing::Size(416, 22);
			this->rollno_textBox->TabIndex = 75;
			this->rollno_textBox->TextChanged += gcnew System::EventHandler(this, &Edit_Student::rollno_textBox_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 32));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(63)),
				static_cast<System::Int32>(static_cast<System::Byte>(155)));
			this->label1->Location = System::Drawing::Point(257, 278);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(704, 63);
			this->label1->TabIndex = 74;
			this->label1->Text = L"ACADEMIC INFORMATION";
			// 
			// cnic_textBox
			// 
			this->cnic_textBox->Location = System::Drawing::Point(471, 158);
			this->cnic_textBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->cnic_textBox->Name = L"cnic_textBox";
			this->cnic_textBox->Size = System::Drawing::Size(416, 22);
			this->cnic_textBox->TabIndex = 73;
			// 
			// mobile_num_textBox
			// 
			this->mobile_num_textBox->Location = System::Drawing::Point(471, 230);
			this->mobile_num_textBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->mobile_num_textBox->Name = L"mobile_num_textBox";
			this->mobile_num_textBox->Size = System::Drawing::Size(416, 22);
			this->mobile_num_textBox->TabIndex = 72;
			// 
			// TITLE
			// 
			this->TITLE->AutoSize = true;
			this->TITLE->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 32));
			this->TITLE->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(63)),
				static_cast<System::Int32>(static_cast<System::Byte>(155)));
			this->TITLE->Location = System::Drawing::Point(255, 22);
			this->TITLE->Name = L"TITLE";
			this->TITLE->Size = System::Drawing::Size(713, 63);
			this->TITLE->TabIndex = 71;
			this->TITLE->Text = L"PERSONAL INFORMATION";
			// 
			// EXIT_button
			// 
			this->EXIT_button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(2)), static_cast<System::Int32>(static_cast<System::Byte>(119)),
				static_cast<System::Int32>(static_cast<System::Byte>(189)));
			this->EXIT_button->ForeColor = System::Drawing::Color::White;
			this->EXIT_button->Location = System::Drawing::Point(728, 506);
			this->EXIT_button->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->EXIT_button->Name = L"EXIT_button";
			this->EXIT_button->Size = System::Drawing::Size(159, 46);
			this->EXIT_button->TabIndex = 70;
			this->EXIT_button->Text = L"EXIT";
			this->EXIT_button->UseVisualStyleBackColor = false;
			this->EXIT_button->Click += gcnew System::EventHandler(this, &Edit_Student::EXIT_button_Click);
			// 
			// Name_label
			// 
			this->Name_label->AutoSize = true;
			this->Name_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->Name_label->Location = System::Drawing::Point(312, 94);
			this->Name_label->Name = L"Name_label";
			this->Name_label->Size = System::Drawing::Size(61, 24);
			this->Name_label->TabIndex = 69;
			this->Name_label->Text = L"Name";
			// 
			// name_textBox
			// 
			this->name_textBox->Location = System::Drawing::Point(471, 94);
			this->name_textBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->name_textBox->Name = L"name_textBox";
			this->name_textBox->Size = System::Drawing::Size(416, 22);
			this->name_textBox->TabIndex = 68;
			// 
			// Logo_WHO
			// 
			this->Logo_WHO->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(63)),
				static_cast<System::Int32>(static_cast<System::Byte>(155)));
			this->Logo_WHO->Controls->Add(this->label_paanel_WHO_2);
			this->Logo_WHO->Controls->Add(this->label_panel_WHO_1);
			this->Logo_WHO->Controls->Add(this->pictureBox1);
			this->Logo_WHO->Location = System::Drawing::Point(-1, -1);
			this->Logo_WHO->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Logo_WHO->Name = L"Logo_WHO";
			this->Logo_WHO->Size = System::Drawing::Size(209, 572);
			this->Logo_WHO->TabIndex = 67;
			// 
			// label_paanel_WHO_2
			// 
			this->label_paanel_WHO_2->AutoSize = true;
			this->label_paanel_WHO_2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18));
			this->label_paanel_WHO_2->ForeColor = System::Drawing::Color::White;
			this->label_paanel_WHO_2->Location = System::Drawing::Point(50, 350);
			this->label_paanel_WHO_2->Name = L"label_paanel_WHO_2";
			this->label_paanel_WHO_2->Size = System::Drawing::Size(91, 36);
			this->label_paanel_WHO_2->TabIndex = 2;
			this->label_paanel_WHO_2->Text = L"Wave";
			// 
			// label_panel_WHO_1
			// 
			this->label_panel_WHO_1->AutoSize = true;
			this->label_panel_WHO_1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18));
			this->label_panel_WHO_1->ForeColor = System::Drawing::Color::White;
			this->label_panel_WHO_1->Location = System::Drawing::Point(39, 316);
			this->label_panel_WHO_1->Name = L"label_panel_WHO_1";
			this->label_panel_WHO_1->Size = System::Drawing::Size(118, 36);
			this->label_panel_WHO_1->TabIndex = 1;
			this->label_panel_WHO_1->Text = L"Student";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(12, 141);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(188, 164);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// Edit_Student
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1057, 578);
			this->Controls->Add(this->GendercomboBox);
			this->Controls->Add(this->add_button);
			this->Controls->Add(this->section_label);
			this->Controls->Add(this->batch_label);
			this->Controls->Add(this->campus__label);
			this->Controls->Add(this->rollno_label);
			this->Controls->Add(this->dob_dateTimePicker);
			this->Controls->Add(this->gender_label);
			this->Controls->Add(this->dob_label);
			this->Controls->Add(this->cnic_label);
			this->Controls->Add(this->mobileno_label);
			this->Controls->Add(this->section_textBox);
			this->Controls->Add(this->campus_textBox);
			this->Controls->Add(this->batch_textBox);
			this->Controls->Add(this->rollno_textBox);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->cnic_textBox);
			this->Controls->Add(this->mobile_num_textBox);
			this->Controls->Add(this->TITLE);
			this->Controls->Add(this->EXIT_button);
			this->Controls->Add(this->Name_label);
			this->Controls->Add(this->name_textBox);
			this->Controls->Add(this->Logo_WHO);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->MaximumSize = System::Drawing::Size(1075, 625);
			this->MinimumSize = System::Drawing::Size(1075, 625);
			this->Name = L"Edit_Student";
			this->Text = L"Edit_Student";
			this->Load += gcnew System::EventHandler(this, &Edit_Student::Edit_Student_Load);
			this->Logo_WHO->ResumeLayout(false);
			this->Logo_WHO->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Edit_Student_Load(System::Object^ sender, System::EventArgs^ e) {

		if (String::IsNullOrEmpty(rollNo))
		{
			MessageBox::Show("No Roll Number specified.", "Error",
				MessageBoxButtons::OK, MessageBoxIcon::Error);
			this->Close();
			return;
		}

		// Ensure connectionString is initialized
		if (String::IsNullOrEmpty(connectionString))
		{
			connectionString =
				"Data Source=LAPTOP-7E9PK6M6\\SQLEXPRESS;"
				"Initial Catalog=Flex;"
				"Integrated Security=True;";
		}

		try
		{
			SqlConnection^ conn = gcnew SqlConnection(connectionString);
			conn->Open();
			SqlCommand^ cmd = gcnew SqlCommand(
				"SELECT Name, Gender, CNIC, MobileNum, Campus, Section, Batch, DOB "
				"FROM Student WHERE RollNO = @r", conn);
			cmd->Parameters->AddWithValue("@r",(rollNo));
			SqlDataReader^ dr = cmd->ExecuteReader();
			if (dr->Read())
			{
				rollno_textBox->Text = rollNo;
				name_textBox->Text = dr->GetString(0);
				GendercomboBox->Text = dr->GetString(1);
				cnic_textBox->Text = dr->GetString(2);
				mobile_num_textBox->Text = dr->GetInt64(3).ToString();
				campus_textBox->Text = dr->GetString(4);
				section_textBox->Text = dr->GetString(5);
				batch_textBox->Text = dr->GetString(6);
				String^ dob = dr->GetString(7);
				DateTime d;
				if (DateTime::TryParse(dob, d))
					dob_dateTimePicker->Value = d;
			}
			else
			{
				MessageBox::Show("Student not found.", "Error",
					MessageBoxButtons::OK, MessageBoxIcon::Error);
				this->Close();
			}
			dr->Close();
			conn->Close();
		}
		catch (Exception^ ex)
		{
			MessageBox::Show("Database error: " + ex->Message, "Error",
				MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	
		   System::Void add_button_Click(System::Object^ sender, System::EventArgs^ e)
		   {
			   try
			   {
				   SqlConnection^ conn = gcnew SqlConnection(connectionString);
				   conn->Open();
				   SqlCommand^ cmd = gcnew SqlCommand(
					   "UPDATE Student SET "
					   "Name=@n, Gender=@g, CNIC=@c, MobileNum=@m, "
					   "Campus=@ca, Section=@s, Batch=@b, DOB=@d "
					   "WHERE RollNO=@r", conn);

				   cmd->Parameters->AddWithValue("@n", name_textBox->Text);
				   cmd->Parameters->AddWithValue("@g", GendercomboBox->Text);
				   cmd->Parameters->AddWithValue("@c", cnic_textBox->Text);
				   cmd->Parameters->AddWithValue("@m", Convert::ToInt64(mobile_num_textBox->Text));
				   cmd->Parameters->AddWithValue("@ca", campus_textBox->Text);
				   cmd->Parameters->AddWithValue("@s", section_textBox->Text);
				   cmd->Parameters->AddWithValue("@b", batch_textBox->Text);
				   cmd->Parameters->AddWithValue("@d", dob_dateTimePicker->Value.ToString("yyyy-MM-dd"));
				   cmd->Parameters->AddWithValue("@r", rollno_textBox->Text);

				   int rows = cmd->ExecuteNonQuery();
				   conn->Close();

				   if (rows == 1)
					   MessageBox::Show("Student updated successfully.", "Success",
						   MessageBoxButtons::OK, MessageBoxIcon::Information);
				   else
					   MessageBox::Show("No changes made.", "Info",
						   MessageBoxButtons::OK, MessageBoxIcon::Information);
			   }
			   catch (Exception^ ex)
			   {
				   MessageBox::Show("Database error: " + ex->Message, "Error",
					   MessageBoxButtons::OK, MessageBoxIcon::Error);
			   }
		   }
	private: System::Void EXIT_button_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void rollno_textBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
