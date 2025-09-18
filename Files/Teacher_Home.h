#pragma once
#include "Info_Teacher.h"
#include "Teacher_Marks.h"
#include "Teacher_Attendance.h"
namespace SMS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for Teacher_Home
	/// </summary>
	public ref class Teacher_Home : public System::Windows::Forms::Form
	{
	public:
		Teacher_Home(String^ userID)
		{
			InitializeComponent();

			// store the ID for later
			this->currentUserID = userID;

			// match your other forms
			this->connectionString =
				"Data Source=LAPTOP-7E9PK6M6\\SQLEXPRESS;"
				"Initial Catalog=Flex;"
				"Integrated Security=True;";

			// wire up the Load event to fetch the teacher’s name
			this->Load += gcnew EventHandler(this, &Teacher_Home::Teacher_Home_Load);
		}


	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Teacher_Home()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ EXIT_button;
	protected:

	private: System::Windows::Forms::Button^ Marks_button;
	private: System::Windows::Forms::Button^ ATTENDANCE_button;
	private: System::Windows::Forms::Button^ Info_button;
	protected:



	private: System::Windows::Forms::Label^ TITLE;
	private: System::Windows::Forms::Panel^ Logo_WHO;
	private: System::Windows::Forms::Label^ label_paanel_WHO_2;
	private: System::Windows::Forms::Label^ label_panel;


	private: System::Windows::Forms::PictureBox^ pictureBox1;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;
		String^ connectionString;
		String^ currentUserID;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Teacher_Home::typeid));
			this->EXIT_button = (gcnew System::Windows::Forms::Button());
			this->Marks_button = (gcnew System::Windows::Forms::Button());
			this->ATTENDANCE_button = (gcnew System::Windows::Forms::Button());
			this->Info_button = (gcnew System::Windows::Forms::Button());
			this->TITLE = (gcnew System::Windows::Forms::Label());
			this->Logo_WHO = (gcnew System::Windows::Forms::Panel());
			this->label_paanel_WHO_2 = (gcnew System::Windows::Forms::Label());
			this->label_panel = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->Logo_WHO->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// EXIT_button
			// 
			this->EXIT_button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(2)), static_cast<System::Int32>(static_cast<System::Byte>(119)),
				static_cast<System::Int32>(static_cast<System::Byte>(189)));
			this->EXIT_button->ForeColor = System::Drawing::Color::White;
			this->EXIT_button->Location = System::Drawing::Point(565, 429);
			this->EXIT_button->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->EXIT_button->Name = L"EXIT_button";
			this->EXIT_button->Size = System::Drawing::Size(130, 54);
			this->EXIT_button->TabIndex = 17;
			this->EXIT_button->Text = L"EXIT";
			this->EXIT_button->UseVisualStyleBackColor = false;
			this->EXIT_button->Click += gcnew System::EventHandler(this, &Teacher_Home::EXIT_Click);
			// 
			// Marks_button
			// 
			this->Marks_button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(2)), static_cast<System::Int32>(static_cast<System::Byte>(119)),
				static_cast<System::Int32>(static_cast<System::Byte>(189)));
			this->Marks_button->ForeColor = System::Drawing::Color::White;
			this->Marks_button->Location = System::Drawing::Point(330, 343);
			this->Marks_button->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Marks_button->Name = L"Marks_button";
			this->Marks_button->Size = System::Drawing::Size(255, 54);
			this->Marks_button->TabIndex = 16;
			this->Marks_button->Text = L"MARKS";
			this->Marks_button->UseVisualStyleBackColor = false;
			this->Marks_button->Click += gcnew System::EventHandler(this, &Teacher_Home::Marks_button_Click);
			// 
			// ATTENDANCE_button
			// 
			this->ATTENDANCE_button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(2)), static_cast<System::Int32>(static_cast<System::Byte>(119)),
				static_cast<System::Int32>(static_cast<System::Byte>(189)));
			this->ATTENDANCE_button->ForeColor = System::Drawing::Color::White;
			this->ATTENDANCE_button->Location = System::Drawing::Point(329, 254);
			this->ATTENDANCE_button->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->ATTENDANCE_button->Name = L"ATTENDANCE_button";
			this->ATTENDANCE_button->Size = System::Drawing::Size(255, 54);
			this->ATTENDANCE_button->TabIndex = 15;
			this->ATTENDANCE_button->Text = L"ATTENDANCE";
			this->ATTENDANCE_button->UseVisualStyleBackColor = false;
			this->ATTENDANCE_button->Click += gcnew System::EventHandler(this, &Teacher_Home::ATTENDANCE_button_Click);
			// 
			// Info_button
			// 
			this->Info_button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(2)), static_cast<System::Int32>(static_cast<System::Byte>(119)),
				static_cast<System::Int32>(static_cast<System::Byte>(189)));
			this->Info_button->ForeColor = System::Drawing::Color::White;
			this->Info_button->Location = System::Drawing::Point(329, 170);
			this->Info_button->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Info_button->Name = L"Info_button";
			this->Info_button->Size = System::Drawing::Size(255, 54);
			this->Info_button->TabIndex = 14;
			this->Info_button->Text = L"INFORMATION";
			this->Info_button->UseVisualStyleBackColor = false;
			this->Info_button->Click += gcnew System::EventHandler(this, &Teacher_Home::Info_button_Click);
			// 
			// TITLE
			// 
			this->TITLE->AutoSize = true;
			this->TITLE->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24));
			this->TITLE->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(63)),
				static_cast<System::Int32>(static_cast<System::Byte>(155)));
			this->TITLE->Location = System::Drawing::Point(238, 64);
			this->TITLE->Name = L"TITLE";
			this->TITLE->Size = System::Drawing::Size(441, 46);
			this->TITLE->TabIndex = 13;
			this->TITLE->Text = L"WELCOME TEACHER!";
			// 
			// Logo_WHO
			// 
			this->Logo_WHO->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(63)),
				static_cast<System::Int32>(static_cast<System::Byte>(155)));
			this->Logo_WHO->Controls->Add(this->label_paanel_WHO_2);
			this->Logo_WHO->Controls->Add(this->label_panel);
			this->Logo_WHO->Controls->Add(this->pictureBox1);
			this->Logo_WHO->Location = System::Drawing::Point(-2, 0);
			this->Logo_WHO->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Logo_WHO->Name = L"Logo_WHO";
			this->Logo_WHO->Size = System::Drawing::Size(209, 514);
			this->Logo_WHO->TabIndex = 12;
			// 
			// label_paanel_WHO_2
			// 
			this->label_paanel_WHO_2->AutoSize = true;
			this->label_paanel_WHO_2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18));
			this->label_paanel_WHO_2->ForeColor = System::Drawing::Color::White;
			this->label_paanel_WHO_2->Location = System::Drawing::Point(50, 343);
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
			this->label_panel->Location = System::Drawing::Point(37, 311);
			this->label_panel->Name = L"label_panel";
			this->label_panel->Size = System::Drawing::Size(123, 36);
			this->label_panel->TabIndex = 1;
			this->label_panel->Text = L"Teacher";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(-2, 131);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(208, 164);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// Teacher_Home
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(739, 521);
			this->Controls->Add(this->EXIT_button);
			this->Controls->Add(this->Marks_button);
			this->Controls->Add(this->ATTENDANCE_button);
			this->Controls->Add(this->Info_button);
			this->Controls->Add(this->TITLE);
			this->Controls->Add(this->Logo_WHO);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->MaximumSize = System::Drawing::Size(757, 568);
			this->MinimumSize = System::Drawing::Size(757, 568);
			this->Name = L"Teacher_Home";
			this->Text = L"Teacher_Home";
			this->Load += gcnew System::EventHandler(this, &Teacher_Home::Teacher_Home_Load);
			this->Logo_WHO->ResumeLayout(false);
			this->Logo_WHO->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void EXIT_Click(System::Object^ sender, System::EventArgs^ e) {
this->Close();
	}
private: System::Void Info_button_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	auto info = gcnew Info_Teacher(this->connectionString, this -> currentUserID);
	info->ShowDialog();
	this->Show();
}
private: System::Void ATTENDANCE_button_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	auto att = gcnew Teacher_Attendance(this->connectionString, this->currentUserID);
	att->ShowDialog();
	this->Show();
}
private: System::Void Marks_button_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	auto mk = gcnew Teacher_Marks(this->connectionString, this->currentUserID);
	mk->ShowDialog();
	this->Show();
}
private: System::Void Teacher_Home_Load(System::Object^ sender, System::EventArgs^ e) {

	try {
		SqlConnection^ conn = gcnew SqlConnection(connectionString);
		conn->Open();

		SqlCommand^ cmd = gcnew SqlCommand(
			"SELECT Name FROM Teacher WHERE UserID = @id", conn);
		cmd->Parameters->AddWithValue("@id", currentUserID);

		SqlDataReader^ rdr = cmd->ExecuteReader();
		if (rdr->Read()) {
			String^ name = rdr["Name"]->ToString();
			// personalize the greeting
			TITLE->Text = "WELCOME, " + name->ToUpper() + "!";
		}
		rdr->Close();
		conn->Close();
	}
	catch (SqlException^ ex) {
		MessageBox::Show("DB error: " + ex->Message,
			"Error", MessageBoxButtons::OK,
			MessageBoxIcon::Error);
	}
}
};
}
