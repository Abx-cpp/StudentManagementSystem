#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include "AddAdmin.h"
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
	/// Summary for User_Teacher_Admin
	/// </summary>
	public ref class User_Teacher_Admin : public System::Windows::Forms::Form
	{
	public:
		User_Teacher_Admin(void)
		{
			InitializeComponent();

			// initialize your connection string here
			connectionString =
				"Data Source=LAPTOP-7E9PK6M6\\SQLEXPRESS;"
				"Initial Catalog=Flex;"
				"Integrated Security=True;";
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~User_Teacher_Admin()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ add_button;
	protected:

	protected:
	private: System::Windows::Forms::Label^ degree_label;
	private: System::Windows::Forms::Label^ department_label;
	private: System::Windows::Forms::Label^ campus__label;
	private: System::Windows::Forms::Label^ userID_label;
	private: System::Windows::Forms::DateTimePicker^ dob_dateTimePicker;

	private: System::Windows::Forms::Label^ gender_label;
	private: System::Windows::Forms::Label^ dob_label;
	private: System::Windows::Forms::Label^ cnic_label;
	private: System::Windows::Forms::Label^ mobileno_label;
	private: System::Windows::Forms::TextBox^ degree_textBox;
	private: System::Windows::Forms::TextBox^ campus_textBox;
	private: System::Windows::Forms::TextBox^ department_textBox;



	private: System::Windows::Forms::TextBox^ user_id_textBox;

	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::TextBox^ cnic_textBox;
	private: System::Windows::Forms::TextBox^ mobile_textBox;



	private: System::Windows::Forms::Label^ TITLE;
	private: System::Windows::Forms::Button^ EXIT_button;
	private: System::Windows::Forms::Label^ Name_label;
	private: System::Windows::Forms::TextBox^ name_textBox;

	private: System::Windows::Forms::Panel^ Logo_WHO;
	private: System::Windows::Forms::Label^ label_paanel_WHO_2;
	private: System::Windows::Forms::Label^ label_panel;
	private: System::Windows::Forms::PictureBox^ pictureBox1;


	private: System::Windows::Forms::ComboBox^ GendercomboBox;
		   System::Void User_Teacher_Admin_Load(System::Object^ sender, System::EventArgs^ e) {
			   // any startup logic goes here (or leave empty)
		   }
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(User_Teacher_Admin::typeid));
			this->add_button = (gcnew System::Windows::Forms::Button());
			this->degree_label = (gcnew System::Windows::Forms::Label());
			this->department_label = (gcnew System::Windows::Forms::Label());
			this->campus__label = (gcnew System::Windows::Forms::Label());
			this->userID_label = (gcnew System::Windows::Forms::Label());
			this->dob_dateTimePicker = (gcnew System::Windows::Forms::DateTimePicker());
			this->gender_label = (gcnew System::Windows::Forms::Label());
			this->dob_label = (gcnew System::Windows::Forms::Label());
			this->cnic_label = (gcnew System::Windows::Forms::Label());
			this->mobileno_label = (gcnew System::Windows::Forms::Label());
			this->degree_textBox = (gcnew System::Windows::Forms::TextBox());
			this->campus_textBox = (gcnew System::Windows::Forms::TextBox());
			this->department_textBox = (gcnew System::Windows::Forms::TextBox());
			this->user_id_textBox = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->cnic_textBox = (gcnew System::Windows::Forms::TextBox());
			this->mobile_textBox = (gcnew System::Windows::Forms::TextBox());
			this->TITLE = (gcnew System::Windows::Forms::Label());
			this->EXIT_button = (gcnew System::Windows::Forms::Button());
			this->Name_label = (gcnew System::Windows::Forms::Label());
			this->name_textBox = (gcnew System::Windows::Forms::TextBox());
			this->Logo_WHO = (gcnew System::Windows::Forms::Panel());
			this->label_paanel_WHO_2 = (gcnew System::Windows::Forms::Label());
			this->label_panel = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->GendercomboBox = (gcnew System::Windows::Forms::ComboBox());
			this->Logo_WHO->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// add_button
			// 
			this->add_button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(2)), static_cast<System::Int32>(static_cast<System::Byte>(119)),
				static_cast<System::Int32>(static_cast<System::Byte>(189)));
			this->add_button->ForeColor = System::Drawing::Color::White;
			this->add_button->Location = System::Drawing::Point(419, 526);
			this->add_button->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->add_button->Name = L"add_button";
			this->add_button->Size = System::Drawing::Size(159, 46);
			this->add_button->TabIndex = 86;
			this->add_button->Text = L"ADD";
			this->add_button->UseVisualStyleBackColor = false;
			this->add_button->Click += gcnew System::EventHandler(this, &User_Teacher_Admin::add_button_Click);
			// 
			// degree_label
			// 
			this->degree_label->AutoSize = true;
			this->degree_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->degree_label->Location = System::Drawing::Point(331, 390);
			this->degree_label->Name = L"degree_label";
			this->degree_label->Size = System::Drawing::Size(73, 24);
			this->degree_label->TabIndex = 85;
			this->degree_label->Text = L"Degree";
			// 
			// department_label
			// 
			this->department_label->AutoSize = true;
			this->department_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->department_label->Location = System::Drawing::Point(332, 456);
			this->department_label->Name = L"department_label";
			this->department_label->Size = System::Drawing::Size(107, 24);
			this->department_label->TabIndex = 84;
			this->department_label->Text = L"Department";
			// 
			// campus__label
			// 
			this->campus__label->AutoSize = true;
			this->campus__label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->campus__label->Location = System::Drawing::Point(331, 424);
			this->campus__label->Name = L"campus__label";
			this->campus__label->Size = System::Drawing::Size(80, 24);
			this->campus__label->TabIndex = 83;
			this->campus__label->Text = L"Campus";
			// 
			// userID_label
			// 
			this->userID_label->AutoSize = true;
			this->userID_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->userID_label->Location = System::Drawing::Point(332, 357);
			this->userID_label->Name = L"userID_label";
			this->userID_label->Size = System::Drawing::Size(71, 24);
			this->userID_label->TabIndex = 82;
			this->userID_label->Text = L"User ID";
			// 
			// dob_dateTimePicker
			// 
			this->dob_dateTimePicker->Location = System::Drawing::Point(473, 184);
			this->dob_dateTimePicker->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dob_dateTimePicker->Name = L"dob_dateTimePicker";
			this->dob_dateTimePicker->Size = System::Drawing::Size(416, 22);
			this->dob_dateTimePicker->TabIndex = 81;
			// 
			// gender_label
			// 
			this->gender_label->AutoSize = true;
			this->gender_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->gender_label->Location = System::Drawing::Point(309, 114);
			this->gender_label->Name = L"gender_label";
			this->gender_label->Size = System::Drawing::Size(74, 24);
			this->gender_label->TabIndex = 80;
			this->gender_label->Text = L"Gender";
			// 
			// dob_label
			// 
			this->dob_label->AutoSize = true;
			this->dob_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->dob_label->Location = System::Drawing::Point(312, 180);
			this->dob_label->Name = L"dob_label";
			this->dob_label->Size = System::Drawing::Size(110, 24);
			this->dob_label->TabIndex = 79;
			this->dob_label->Text = L"Date of Birth";
			// 
			// cnic_label
			// 
			this->cnic_label->AutoSize = true;
			this->cnic_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->cnic_label->Location = System::Drawing::Point(311, 148);
			this->cnic_label->Name = L"cnic_label";
			this->cnic_label->Size = System::Drawing::Size(54, 24);
			this->cnic_label->TabIndex = 78;
			this->cnic_label->Text = L"CNIC";
			// 
			// mobileno_label
			// 
			this->mobileno_label->AutoSize = true;
			this->mobileno_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->mobileno_label->Location = System::Drawing::Point(310, 218);
			this->mobileno_label->Name = L"mobileno_label";
			this->mobileno_label->Size = System::Drawing::Size(141, 24);
			this->mobileno_label->TabIndex = 77;
			this->mobileno_label->Text = L"Mobile Number";
			// 
			// degree_textBox
			// 
			this->degree_textBox->Location = System::Drawing::Point(472, 392);
			this->degree_textBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->degree_textBox->Name = L"degree_textBox";
			this->degree_textBox->Size = System::Drawing::Size(416, 22);
			this->degree_textBox->TabIndex = 76;
			// 
			// campus_textBox
			// 
			this->campus_textBox->Location = System::Drawing::Point(472, 426);
			this->campus_textBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->campus_textBox->Name = L"campus_textBox";
			this->campus_textBox->Size = System::Drawing::Size(416, 22);
			this->campus_textBox->TabIndex = 75;
			// 
			// department_textBox
			// 
			this->department_textBox->Location = System::Drawing::Point(472, 460);
			this->department_textBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->department_textBox->Name = L"department_textBox";
			this->department_textBox->Size = System::Drawing::Size(416, 22);
			this->department_textBox->TabIndex = 74;
			// 
			// user_id_textBox
			// 
			this->user_id_textBox->Location = System::Drawing::Point(472, 362);
			this->user_id_textBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->user_id_textBox->Name = L"user_id_textBox";
			this->user_id_textBox->Size = System::Drawing::Size(416, 22);
			this->user_id_textBox->TabIndex = 73;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 32));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(63)),
				static_cast<System::Int32>(static_cast<System::Byte>(155)));
			this->label1->Location = System::Drawing::Point(258, 276);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(704, 63);
			this->label1->TabIndex = 72;
			this->label1->Text = L"ACADEMIC INFORMATION";
			// 
			// cnic_textBox
			// 
			this->cnic_textBox->Location = System::Drawing::Point(472, 148);
			this->cnic_textBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->cnic_textBox->Name = L"cnic_textBox";
			this->cnic_textBox->Size = System::Drawing::Size(416, 22);
			this->cnic_textBox->TabIndex = 70;
			// 
			// mobile_textBox
			// 
			this->mobile_textBox->Location = System::Drawing::Point(472, 220);
			this->mobile_textBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->mobile_textBox->Name = L"mobile_textBox";
			this->mobile_textBox->Size = System::Drawing::Size(416, 22);
			this->mobile_textBox->TabIndex = 69;
			// 
			// TITLE
			// 
			this->TITLE->AutoSize = true;
			this->TITLE->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 32));
			this->TITLE->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(63)),
				static_cast<System::Int32>(static_cast<System::Byte>(155)));
			this->TITLE->Location = System::Drawing::Point(256, 18);
			this->TITLE->Name = L"TITLE";
			this->TITLE->Size = System::Drawing::Size(713, 63);
			this->TITLE->TabIndex = 68;
			this->TITLE->Text = L"PERSONAL INFORMATION";
			// 
			// EXIT_button
			// 
			this->EXIT_button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(2)), static_cast<System::Int32>(static_cast<System::Byte>(119)),
				static_cast<System::Int32>(static_cast<System::Byte>(189)));
			this->EXIT_button->ForeColor = System::Drawing::Color::White;
			this->EXIT_button->Location = System::Drawing::Point(672, 526);
			this->EXIT_button->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->EXIT_button->Name = L"EXIT_button";
			this->EXIT_button->Size = System::Drawing::Size(159, 46);
			this->EXIT_button->TabIndex = 67;
			this->EXIT_button->Text = L"EXIT";
			this->EXIT_button->UseVisualStyleBackColor = false;
			this->EXIT_button->Click += gcnew System::EventHandler(this, &User_Teacher_Admin::EXIT_button_Click);
			// 
			// Name_label
			// 
			this->Name_label->AutoSize = true;
			this->Name_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->Name_label->Location = System::Drawing::Point(313, 84);
			this->Name_label->Name = L"Name_label";
			this->Name_label->Size = System::Drawing::Size(61, 24);
			this->Name_label->TabIndex = 66;
			this->Name_label->Text = L"Name";
			// 
			// name_textBox
			// 
			this->name_textBox->Location = System::Drawing::Point(472, 84);
			this->name_textBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->name_textBox->Name = L"name_textBox";
			this->name_textBox->Size = System::Drawing::Size(416, 22);
			this->name_textBox->TabIndex = 65;
			// 
			// Logo_WHO
			// 
			this->Logo_WHO->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(63)),
				static_cast<System::Int32>(static_cast<System::Byte>(155)));
			this->Logo_WHO->Controls->Add(this->label_paanel_WHO_2);
			this->Logo_WHO->Controls->Add(this->label_panel);
			this->Logo_WHO->Controls->Add(this->pictureBox1);
			this->Logo_WHO->Location = System::Drawing::Point(0, -1);
			this->Logo_WHO->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Logo_WHO->Name = L"Logo_WHO";
			this->Logo_WHO->Size = System::Drawing::Size(209, 572);
			this->Logo_WHO->TabIndex = 64;
			// 
			// label_paanel_WHO_2
			// 
			this->label_paanel_WHO_2->AutoSize = true;
			this->label_paanel_WHO_2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18));
			this->label_paanel_WHO_2->ForeColor = System::Drawing::Color::White;
			this->label_paanel_WHO_2->Location = System::Drawing::Point(53, 350);
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
			this->label_panel->Location = System::Drawing::Point(37, 316);
			this->label_panel->Name = L"label_panel";
			this->label_panel->Size = System::Drawing::Size(123, 36);
			this->label_panel->TabIndex = 1;
			this->label_panel->Text = L"Teacher";
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
			// GendercomboBox
			// 
			this->GendercomboBox->FormattingEnabled = true;
			this->GendercomboBox->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Male", L"Female" });
			this->GendercomboBox->Location = System::Drawing::Point(472, 116);
			this->GendercomboBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->GendercomboBox->Name = L"GendercomboBox";
			this->GendercomboBox->Size = System::Drawing::Size(416, 24);
			this->GendercomboBox->TabIndex = 87;
			// 
			// User_Teacher_Admin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1057, 578);
			this->Controls->Add(this->GendercomboBox);
			this->Controls->Add(this->add_button);
			this->Controls->Add(this->degree_label);
			this->Controls->Add(this->department_label);
			this->Controls->Add(this->campus__label);
			this->Controls->Add(this->userID_label);
			this->Controls->Add(this->dob_dateTimePicker);
			this->Controls->Add(this->gender_label);
			this->Controls->Add(this->dob_label);
			this->Controls->Add(this->cnic_label);
			this->Controls->Add(this->mobileno_label);
			this->Controls->Add(this->degree_textBox);
			this->Controls->Add(this->campus_textBox);
			this->Controls->Add(this->department_textBox);
			this->Controls->Add(this->user_id_textBox);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->cnic_textBox);
			this->Controls->Add(this->mobile_textBox);
			this->Controls->Add(this->TITLE);
			this->Controls->Add(this->EXIT_button);
			this->Controls->Add(this->Name_label);
			this->Controls->Add(this->name_textBox);
			this->Controls->Add(this->Logo_WHO);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->MaximumSize = System::Drawing::Size(1075, 625);
			this->MinimumSize = System::Drawing::Size(1075, 625);
			this->Name = L"User_Teacher_Admin";
			this->Text = L"User_Teacher_Admin";
			this->Load += gcnew System::EventHandler(this, &User_Teacher_Admin::User_Teacher_Admin_Load);
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
		   System::Void add_button_Click(System::Object^ sender, System::EventArgs^ e) {
			   // 1) Validate
			   if (String::IsNullOrWhiteSpace(name_textBox->Text) ||
				   String::IsNullOrWhiteSpace(cnic_textBox->Text) ||
				   String::IsNullOrWhiteSpace(mobile_textBox->Text) ||
				   String::IsNullOrWhiteSpace(user_id_textBox->Text) ||
				   String::IsNullOrWhiteSpace(degree_textBox->Text) ||
				   String::IsNullOrWhiteSpace(campus_textBox->Text) ||
				   String::IsNullOrWhiteSpace(department_textBox->Text) ||
				   GendercomboBox->SelectedItem == nullptr)
			   {
				   MessageBox::Show("Please fill in all fields.", "Error",
					   MessageBoxButtons::OK, MessageBoxIcon::Error);
				   return;
			   }

			   // 2) Format checks
			   if (!System::Text::RegularExpressions::Regex::IsMatch(cnic_textBox->Text, "^[0-9]{13}$")) {
				   MessageBox::Show("Invalid CNIC. Enter exactly 13 digits.", "Error",
					   MessageBoxButtons::OK, MessageBoxIcon::Error);
				   return;
			   }
			   if (!System::Text::RegularExpressions::Regex::IsMatch(mobile_textBox->Text, "^[0-9]{10,15}$")) {
				   MessageBox::Show("Invalid mobile number. Enter 10–15 digits.", "Error",
					   MessageBoxButtons::OK, MessageBoxIcon::Error);
				   return;
			   }

			   // 3) Do the insert
			   try {
				   SqlConnection^ conn = gcnew SqlConnection(connectionString);
				   conn->Open();

				   SqlCommand^ cmd = gcnew SqlCommand(
					   "INSERT INTO Teacher "
					   "(UserID, Name, Gender, CNIC, DOB, MobileNum, Degree, Campus, Department) "
					   "VALUES (@id,@name,@gender,@cnic,@dob,@mobile,@degree,@campus,@dept);",
					   conn);

				   cmd->Parameters->AddWithValue("@id", user_id_textBox->Text);
				   cmd->Parameters->AddWithValue("@name", name_textBox->Text);
				   cmd->Parameters->AddWithValue("@gender", GendercomboBox->SelectedItem->ToString());
				   cmd->Parameters->AddWithValue("@cnic", cnic_textBox->Text);
				   cmd->Parameters->AddWithValue("@dob", dob_dateTimePicker->Value.ToString("yyyy-MM-dd"));
				   cmd->Parameters->AddWithValue("@mobile", mobile_textBox->Text);
				   cmd->Parameters->AddWithValue("@degree", degree_textBox->Text);
				   cmd->Parameters->AddWithValue("@campus", campus_textBox->Text);
				   cmd->Parameters->AddWithValue("@dept", department_textBox->Text);

				   cmd->ExecuteNonQuery();
				   conn->Close();

				   MessageBox::Show("Teacher added successfully.", "Success",
					   MessageBoxButtons::OK, MessageBoxIcon::Information);
			   }
			   catch (SqlException^ ex) {
				   MessageBox::Show("Database error: " + ex->Message, "Error",
					   MessageBoxButtons::OK, MessageBoxIcon::Error);
			   }
		   }
};
}
