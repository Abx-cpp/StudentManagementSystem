#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <msclr/marshal.h>


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
	/// Summary for User_Student_Admin
	/// </summary>
	public ref class User_Student_Admin : public System::Windows::Forms::Form
	{
	public:
		User_Student_Admin(void)
		{
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
		~User_Student_Admin()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
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
	private: System::Windows::Forms::Button^ add_button;
	private: System::Windows::Forms::ComboBox^ GendercomboBox;





	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;
		String^ connectionString;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(User_Student_Admin::typeid));
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
			this->add_button = (gcnew System::Windows::Forms::Button());
			this->GendercomboBox = (gcnew System::Windows::Forms::ComboBox());
			this->Logo_WHO->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// section_label
			// 
			this->section_label->AutoSize = true;
			this->section_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->section_label->Location = System::Drawing::Point(334, 392);
			this->section_label->Name = L"section_label";
			this->section_label->Size = System::Drawing::Size(73, 24);
			this->section_label->TabIndex = 62;
			this->section_label->Text = L"Section";
			// 
			// batch_label
			// 
			this->batch_label->AutoSize = true;
			this->batch_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->batch_label->Location = System::Drawing::Point(337, 458);
			this->batch_label->Name = L"batch_label";
			this->batch_label->Size = System::Drawing::Size(57, 24);
			this->batch_label->TabIndex = 61;
			this->batch_label->Text = L"Batch";
			// 
			// campus__label
			// 
			this->campus__label->AutoSize = true;
			this->campus__label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->campus__label->Location = System::Drawing::Point(336, 426);
			this->campus__label->Name = L"campus__label";
			this->campus__label->Size = System::Drawing::Size(80, 24);
			this->campus__label->TabIndex = 60;
			this->campus__label->Text = L"Campus";
			// 
			// rollno_label
			// 
			this->rollno_label->AutoSize = true;
			this->rollno_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->rollno_label->Location = System::Drawing::Point(334, 359);
			this->rollno_label->Name = L"rollno_label";
			this->rollno_label->Size = System::Drawing::Size(116, 24);
			this->rollno_label->TabIndex = 59;
			this->rollno_label->Text = L"Roll Number";
			// 
			// dob_dateTimePicker
			// 
			this->dob_dateTimePicker->Location = System::Drawing::Point(474, 194);
			this->dob_dateTimePicker->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dob_dateTimePicker->Name = L"dob_dateTimePicker";
			this->dob_dateTimePicker->Size = System::Drawing::Size(416, 22);
			this->dob_dateTimePicker->TabIndex = 58;
			// 
			// gender_label
			// 
			this->gender_label->AutoSize = true;
			this->gender_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->gender_label->Location = System::Drawing::Point(310, 124);
			this->gender_label->Name = L"gender_label";
			this->gender_label->Size = System::Drawing::Size(74, 24);
			this->gender_label->TabIndex = 57;
			this->gender_label->Text = L"Gender";
			// 
			// dob_label
			// 
			this->dob_label->AutoSize = true;
			this->dob_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->dob_label->Location = System::Drawing::Point(313, 190);
			this->dob_label->Name = L"dob_label";
			this->dob_label->Size = System::Drawing::Size(110, 24);
			this->dob_label->TabIndex = 56;
			this->dob_label->Text = L"Date of Birth";
			// 
			// cnic_label
			// 
			this->cnic_label->AutoSize = true;
			this->cnic_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->cnic_label->Location = System::Drawing::Point(312, 158);
			this->cnic_label->Name = L"cnic_label";
			this->cnic_label->Size = System::Drawing::Size(54, 24);
			this->cnic_label->TabIndex = 55;
			this->cnic_label->Text = L"CNIC";
			// 
			// mobileno_label
			// 
			this->mobileno_label->AutoSize = true;
			this->mobileno_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->mobileno_label->Location = System::Drawing::Point(311, 228);
			this->mobileno_label->Name = L"mobileno_label";
			this->mobileno_label->Size = System::Drawing::Size(141, 24);
			this->mobileno_label->TabIndex = 54;
			this->mobileno_label->Text = L"Mobile Number";
			// 
			// section_textBox
			// 
			this->section_textBox->Location = System::Drawing::Point(473, 394);
			this->section_textBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->section_textBox->Name = L"section_textBox";
			this->section_textBox->Size = System::Drawing::Size(416, 22);
			this->section_textBox->TabIndex = 53;
			// 
			// campus_textBox
			// 
			this->campus_textBox->Location = System::Drawing::Point(473, 428);
			this->campus_textBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->campus_textBox->Name = L"campus_textBox";
			this->campus_textBox->Size = System::Drawing::Size(416, 22);
			this->campus_textBox->TabIndex = 52;
			// 
			// batch_textBox
			// 
			this->batch_textBox->Location = System::Drawing::Point(473, 462);
			this->batch_textBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->batch_textBox->Name = L"batch_textBox";
			this->batch_textBox->Size = System::Drawing::Size(416, 22);
			this->batch_textBox->TabIndex = 51;
			// 
			// rollno_textBox
			// 
			this->rollno_textBox->Location = System::Drawing::Point(473, 364);
			this->rollno_textBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->rollno_textBox->Name = L"rollno_textBox";
			this->rollno_textBox->Size = System::Drawing::Size(416, 22);
			this->rollno_textBox->TabIndex = 50;
			this->rollno_textBox->TextChanged += gcnew System::EventHandler(this, &User_Student_Admin::rollno_textBox_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 32));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(63)),
				static_cast<System::Int32>(static_cast<System::Byte>(155)));
			this->label1->Location = System::Drawing::Point(259, 278);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(704, 63);
			this->label1->TabIndex = 49;
			this->label1->Text = L"ACADEMIC INFORMATION";
			// 
			// cnic_textBox
			// 
			this->cnic_textBox->Location = System::Drawing::Point(473, 158);
			this->cnic_textBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->cnic_textBox->Name = L"cnic_textBox";
			this->cnic_textBox->Size = System::Drawing::Size(416, 22);
			this->cnic_textBox->TabIndex = 47;
			// 
			// mobile_num_textBox
			// 
			this->mobile_num_textBox->Location = System::Drawing::Point(473, 230);
			this->mobile_num_textBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->mobile_num_textBox->Name = L"mobile_num_textBox";
			this->mobile_num_textBox->Size = System::Drawing::Size(416, 22);
			this->mobile_num_textBox->TabIndex = 46;
			// 
			// TITLE
			// 
			this->TITLE->AutoSize = true;
			this->TITLE->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 32));
			this->TITLE->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(63)),
				static_cast<System::Int32>(static_cast<System::Byte>(155)));
			this->TITLE->Location = System::Drawing::Point(257, 22);
			this->TITLE->Name = L"TITLE";
			this->TITLE->Size = System::Drawing::Size(713, 63);
			this->TITLE->TabIndex = 45;
			this->TITLE->Text = L"PERSONAL INFORMATION";
			// 
			// EXIT_button
			// 
			this->EXIT_button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(2)), static_cast<System::Int32>(static_cast<System::Byte>(119)),
				static_cast<System::Int32>(static_cast<System::Byte>(189)));
			this->EXIT_button->ForeColor = System::Drawing::Color::White;
			this->EXIT_button->Location = System::Drawing::Point(730, 506);
			this->EXIT_button->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->EXIT_button->Name = L"EXIT_button";
			this->EXIT_button->Size = System::Drawing::Size(159, 46);
			this->EXIT_button->TabIndex = 44;
			this->EXIT_button->Text = L"EXIT";
			this->EXIT_button->UseVisualStyleBackColor = false;
			this->EXIT_button->Click += gcnew System::EventHandler(this, &User_Student_Admin::EXIT_button_Click);
			// 
			// Name_label
			// 
			this->Name_label->AutoSize = true;
			this->Name_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->Name_label->Location = System::Drawing::Point(314, 94);
			this->Name_label->Name = L"Name_label";
			this->Name_label->Size = System::Drawing::Size(61, 24);
			this->Name_label->TabIndex = 43;
			this->Name_label->Text = L"Name";
			// 
			// name_textBox
			// 
			this->name_textBox->Location = System::Drawing::Point(473, 94);
			this->name_textBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->name_textBox->Name = L"name_textBox";
			this->name_textBox->Size = System::Drawing::Size(416, 22);
			this->name_textBox->TabIndex = 42;
			// 
			// Logo_WHO
			// 
			this->Logo_WHO->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(63)),
				static_cast<System::Int32>(static_cast<System::Byte>(155)));
			this->Logo_WHO->Controls->Add(this->label_paanel_WHO_2);
			this->Logo_WHO->Controls->Add(this->label_panel_WHO_1);
			this->Logo_WHO->Controls->Add(this->pictureBox1);
			this->Logo_WHO->Location = System::Drawing::Point(1, -1);
			this->Logo_WHO->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Logo_WHO->Name = L"Logo_WHO";
			this->Logo_WHO->Size = System::Drawing::Size(209, 572);
			this->Logo_WHO->TabIndex = 41;
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
			// add_button
			// 
			this->add_button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(2)), static_cast<System::Int32>(static_cast<System::Byte>(119)),
				static_cast<System::Int32>(static_cast<System::Byte>(189)));
			this->add_button->ForeColor = System::Drawing::Color::White;
			this->add_button->Location = System::Drawing::Point(366, 506);
			this->add_button->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->add_button->Name = L"add_button";
			this->add_button->Size = System::Drawing::Size(159, 46);
			this->add_button->TabIndex = 65;
			this->add_button->Text = L"ADD";
			this->add_button->UseVisualStyleBackColor = false;
			this->add_button->Click += gcnew System::EventHandler(this, &User_Student_Admin::add_button_Click);
			// 
			// GendercomboBox
			// 
			this->GendercomboBox->FormattingEnabled = true;
			this->GendercomboBox->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Male", L"Female" });
			this->GendercomboBox->Location = System::Drawing::Point(473, 126);
			this->GendercomboBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->GendercomboBox->Name = L"GendercomboBox";
			this->GendercomboBox->Size = System::Drawing::Size(416, 24);
			this->GendercomboBox->TabIndex = 66;
			// 
			// User_Student_Admin
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
			this->Name = L"User_Student_Admin";
			this->Text = L"User_Student_Admin";
			this->Load += gcnew System::EventHandler(this, &User_Student_Admin::User_Student_Admin_Load);
			this->Logo_WHO->ResumeLayout(false);
			this->Logo_WHO->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void User_Student_Admin_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void EXIT_button_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void add_button_Click(System::Object^ sender, System::EventArgs^ e) {
		// basic validation
		if (String::IsNullOrWhiteSpace(name_textBox->Text) ||
			String::IsNullOrWhiteSpace(cnic_textBox->Text) ||
			String::IsNullOrWhiteSpace(batch_textBox->Text) ||
			String::IsNullOrWhiteSpace(rollno_textBox->Text) ||
			String::IsNullOrWhiteSpace(campus_textBox->Text) ||
			String::IsNullOrWhiteSpace(section_textBox->Text) ||
			GendercomboBox->SelectedItem == nullptr)
		{
			MessageBox::Show("Please fill in all fields.", "Error",
				MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		// format checks
		if (!System::Text::RegularExpressions::Regex::IsMatch(cnic_textBox->Text, "^[0-9]{13}$"))

		{
			MessageBox::Show("Invalid CNIC format. Please enter a 13-digit numeric CNIC.", "Error",
				MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		if (!System::Text::RegularExpressions::Regex::IsMatch(mobile_num_textBox->Text, "^[0-9]{11}$"))
		{
			MessageBox::Show("Invalid Mobile Number. Please enter a 10-digit number.", "Error",
				MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		try
		{
			SqlConnection^ conn = gcnew SqlConnection(connectionString);
			conn->Open();

			// Insert into Student and return new RollNO
			SqlCommand^ cmd = gcnew SqlCommand(
				"INSERT INTO Student (RollNO, Name, Gender, CNIC, MobileNum,Campus, Section, Batch, DOB) "
				"OUTPUT INSERTED.RollNO "
				"VALUES (@roll,@name,@gender,@cnic,@mobile,@campus,@section,@batch,@dob);",
				conn);
			cmd->Parameters->AddWithValue("@roll", rollno_textBox->Text);
			cmd->Parameters->AddWithValue("@name", name_textBox->Text);
			cmd->Parameters->AddWithValue("@gender", GendercomboBox->SelectedItem->ToString());
			cmd->Parameters->AddWithValue("@cnic", cnic_textBox->Text);
			
			cmd->Parameters->AddWithValue("@mobile", Convert::ToInt64(mobile_num_textBox->Text));
			
			cmd->Parameters->AddWithValue("@campus", campus_textBox->Text);
			cmd->Parameters->AddWithValue("@section", section_textBox->Text);
			cmd->Parameters->AddWithValue("@batch", batch_textBox->Text);
			cmd->Parameters->AddWithValue("@dob", dob_dateTimePicker->Value.ToString("yyyy-MM-dd"));

			// ExecuteScalar returns the new RollNO
			Object^ result = cmd->ExecuteScalar();
			conn->Close();

			String^ newRoll = result->ToString();
			MessageBox::Show("Student added with Roll No: " + newRoll , "Success" , MessageBoxButtons::OK, MessageBoxIcon::Information
			); 
		}
		catch (SqlException^ ex)
		{
			MessageBox::Show("Database error: " + ex->Message, "Error",
				MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		catch (FormatException^)
		{
			MessageBox::Show("Invalid numeric value entered.", "Error",
				MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	private: System::Void rollno_textBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
