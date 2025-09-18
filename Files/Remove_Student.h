#pragma once
#include <iostream>
#include <fstream>
#include <msclr\marshal_cppstd.h>
#include <vcclr.h>
#include <vector>

namespace SMS {

	using namespace System;
	using namespace System::Data;
	using namespace System::Data::SqlClient;
	using namespace System::Drawing;
	using namespace System::Windows::Forms;
	using namespace msclr::interop;

	/// <summary>
	/// Summary for Remove_Student
	/// </summary>
	public ref class Remove_Student : public System::Windows::Forms::Form
	{
	private:
		String^ title;
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
		String^ userID;
		String^ degree;
		String^ depart;
		bool isStudentFound;
		bool isTeacherFound;

	public:
	

		void SetRollNo(String^ title)
		{
			this->rollNo = title;
		}

		String^ ReturnRollNo()
		{
			return rollNo;
		}


		void SetTitle(String^ title)
		{
			this->title = title;
		}

		String^ ReturnTitle()
		{
			return title;
		}


		void Counter_Increament() {
			Counter++;
		}

		int Counter_Return() {
			return Counter;
		}

		

		


		//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	
	

		Remove_Student(void)
		{
			isTeacherFound = false;
			isStudentFound = false;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Remove_Student()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Label^ Username;
	private: System::Windows::Forms::TextBox^ username_textBox;
	private: System::Windows::Forms::Button^ EXIT_button;
	private: System::Windows::Forms::Panel^ Logo_WHO;
	private: System::Windows::Forms::Label^ label_paanel_WHO_2;
	private: System::Windows::Forms::Label^ label_panel;
	private: System::Windows::Forms::PictureBox^ pictureBox1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Remove_Student::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->Username = (gcnew System::Windows::Forms::Label());
			this->username_textBox = (gcnew System::Windows::Forms::TextBox());
			this->EXIT_button = (gcnew System::Windows::Forms::Button());
			this->Logo_WHO = (gcnew System::Windows::Forms::Panel());
			this->label_paanel_WHO_2 = (gcnew System::Windows::Forms::Label());
			this->label_panel = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->Logo_WHO->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(2)), static_cast<System::Int32>(static_cast<System::Byte>(119)),
				static_cast<System::Int32>(static_cast<System::Byte>(189)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(501, 230);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(130, 54);
			this->button1->TabIndex = 40;
			this->button1->Text = L"SEARCH";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Remove_Student::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(63)),
				static_cast<System::Int32>(static_cast<System::Byte>(155)));
			this->label1->Location = System::Drawing::Point(316, 58);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(253, 46);
			this->label1->TabIndex = 39;
			this->label1->Text = L"Search User!";
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(230, 135);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(72, 52);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 38;
			this->pictureBox2->TabStop = false;
			// 
			// Username
			// 
			this->Username->AutoSize = true;
			this->Username->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->Username->Location = System::Drawing::Point(311, 150);
			this->Username->Name = L"Username";
			this->Username->Size = System::Drawing::Size(113, 26);
			this->Username->TabIndex = 37;
			this->Username->Text = L"Username";
			// 
			// username_textBox
			// 
			this->username_textBox->Location = System::Drawing::Point(452, 154);
			this->username_textBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->username_textBox->Name = L"username_textBox";
			this->username_textBox->Size = System::Drawing::Size(231, 22);
			this->username_textBox->TabIndex = 36;
			// 
			// EXIT_button
			// 
			this->EXIT_button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(2)), static_cast<System::Int32>(static_cast<System::Byte>(119)),
				static_cast<System::Int32>(static_cast<System::Byte>(189)));
			this->EXIT_button->ForeColor = System::Drawing::Color::White;
			this->EXIT_button->Location = System::Drawing::Point(283, 230);
			this->EXIT_button->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->EXIT_button->Name = L"EXIT_button";
			this->EXIT_button->Size = System::Drawing::Size(130, 54);
			this->EXIT_button->TabIndex = 35;
			this->EXIT_button->Text = L"EXIT";
			this->EXIT_button->UseVisualStyleBackColor = false;
			this->EXIT_button->Click += gcnew System::EventHandler(this, &Remove_Student::EXIT_button_Click);
			// 
			// Logo_WHO
			// 
			this->Logo_WHO->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(63)),
				static_cast<System::Int32>(static_cast<System::Byte>(155)));
			this->Logo_WHO->Controls->Add(this->label_paanel_WHO_2);
			this->Logo_WHO->Controls->Add(this->label_panel);
			this->Logo_WHO->Controls->Add(this->pictureBox1);
			this->Logo_WHO->Location = System::Drawing::Point(-2, -73);
			this->Logo_WHO->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Logo_WHO->Name = L"Logo_WHO";
			this->Logo_WHO->Size = System::Drawing::Size(209, 514);
			this->Logo_WHO->TabIndex = 34;
			// 
			// label_paanel_WHO_2
			// 
			this->label_paanel_WHO_2->AutoSize = true;
			this->label_paanel_WHO_2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18));
			this->label_paanel_WHO_2->ForeColor = System::Drawing::Color::White;
			this->label_paanel_WHO_2->Location = System::Drawing::Point(49, 343);
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
			this->label_panel->Location = System::Drawing::Point(45, 309);
			this->label_panel->Name = L"label_panel";
			this->label_panel->Size = System::Drawing::Size(100, 36);
			this->label_panel->TabIndex = 1;
			this->label_panel->Text = L"Admin";
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
			// Remove_Student
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(712, 375);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->Username);
			this->Controls->Add(this->username_textBox);
			this->Controls->Add(this->EXIT_button);
			this->Controls->Add(this->Logo_WHO);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->MaximumSize = System::Drawing::Size(730, 422);
			this->MinimumSize = System::Drawing::Size(730, 422);
			this->Name = L"Remove_Student";
			this->Text = L"Remove_Student";
			this->Load += gcnew System::EventHandler(this, &Remove_Student::Remove_Student_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->Logo_WHO->ResumeLayout(false);
			this->Logo_WHO->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(Object^ sender, EventArgs^ e)
	{
		String^ rollNo = username_textBox->Text->Trim();
		if (String::IsNullOrEmpty(rollNo))
		{
			MessageBox::Show("Please enter a Roll Number.", "Error",
				MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		try
		{
			SqlConnection^ conn = gcnew SqlConnection(connectionString);
			conn->Open();

			// 1) Attendance
			{
				SqlCommand^ c = gcnew SqlCommand(
					"DELETE FROM Attendance WHERE StudentID = @r", conn);
				c->Parameters->AddWithValue("@r", rollNo);
				c->ExecuteNonQuery();
			}
			// 2) Transcript
			/*{
				SqlCommand^ c = gcnew SqlCommand(
					"DELETE FROM Transcript WHERE StudentID = @r", conn);
				c->Parameters->AddWithValue("@r", rollNo);
				c->ExecuteNonQuery();
			}*/
			// 3) UserLogin
			{
				SqlCommand^ c = gcnew SqlCommand(
					"DELETE FROM Users WHERE Username = @r", conn);
				c->Parameters->AddWithValue("@r", rollNo);
				c->ExecuteNonQuery();
			}

			// 4) Student
			SqlCommand^ cmdDelStu = gcnew SqlCommand(
				"DELETE FROM Student WHERE RollNO = @r", conn);
			cmdDelStu->Parameters->AddWithValue("@r", rollNo);
			int rows = cmdDelStu->ExecuteNonQuery();

			conn->Close();

			if (rows > 0)
				MessageBox::Show("Student removed successfully.", "Success",
					MessageBoxButtons::OK, MessageBoxIcon::Information);
			else
				MessageBox::Show("Roll Number not found.", "Info",
					MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		catch (SqlException^ ex)
		{
			MessageBox::Show("Database error: " + ex->Message, "Error",
				MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	private: System::Void EXIT_button_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void Remove_Student_Load(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
