#pragma once
#include <fstream>
#include <string>
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
	/// Summary for Info_Student
	/// </summary>
	public ref class Info_Student : public System::Windows::Forms::Form
	{
	public:
		Info_Student(String^ connStr, String^ roll)
		{
			InitializeComponent();
			connectionString = connStr;
			currentRoll = roll;
			this->Load += gcnew EventHandler(this, &Info_Student::Info_Student_Load);
		}
		void SetRollNo(String^ rn)
		{
			this->rollNo = rn;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Info_Student()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:



	private: System::Windows::Forms::Label^ Name_label;
	private: System::Windows::Forms::TextBox^ name_textBox;



	private: System::Windows::Forms::Panel^ Logo_WHO;
	private: System::Windows::Forms::Label^ label_paanel_WHO_2;
	private: System::Windows::Forms::Label^ label_panel_WHO_1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ TITLE;
	private: System::Windows::Forms::TextBox^ mobile_num_textBox;

	private: System::Windows::Forms::TextBox^ cnic_textBox;


	private: System::Windows::Forms::TextBox^ gender_textBox;


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ section_textBox;
	private: System::Windows::Forms::TextBox^ campus_textBox;
	private: System::Windows::Forms::TextBox^ batch_textBox;




	private: System::Windows::Forms::TextBox^ rollno_textBox;

	private: System::Windows::Forms::Label^ mobileno_label;

	private: System::Windows::Forms::Label^ cnic_label;
	private: System::Windows::Forms::Label^ dob_label;


	private: System::Windows::Forms::Label^ gender_label;




	private: System::Windows::Forms::Label^ section_label;
	private: System::Windows::Forms::Label^ batch_label;


	private: System::Windows::Forms::Label^ campus__label;

	private: System::Windows::Forms::Label^ rollno_label;

	private: System::Windows::Forms::Button^ EXIT_button;
	private: System::Windows::Forms::TextBox^ textBox1;




	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;
		String^ connectionString =
			"Data Source=LAPTOP-7E9PK6M6\\SQLEXPRESS;"
			"Initial Catalog=Flex;"
			"Integrated Security=True;";
		String^ rollNo;
		String^ currentRoll;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Info_Student::typeid));
			this->Name_label = (gcnew System::Windows::Forms::Label());
			this->name_textBox = (gcnew System::Windows::Forms::TextBox());
			this->Logo_WHO = (gcnew System::Windows::Forms::Panel());
			this->label_paanel_WHO_2 = (gcnew System::Windows::Forms::Label());
			this->label_panel_WHO_1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->TITLE = (gcnew System::Windows::Forms::Label());
			this->mobile_num_textBox = (gcnew System::Windows::Forms::TextBox());
			this->cnic_textBox = (gcnew System::Windows::Forms::TextBox());
			this->gender_textBox = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->section_textBox = (gcnew System::Windows::Forms::TextBox());
			this->campus_textBox = (gcnew System::Windows::Forms::TextBox());
			this->batch_textBox = (gcnew System::Windows::Forms::TextBox());
			this->rollno_textBox = (gcnew System::Windows::Forms::TextBox());
			this->mobileno_label = (gcnew System::Windows::Forms::Label());
			this->cnic_label = (gcnew System::Windows::Forms::Label());
			this->dob_label = (gcnew System::Windows::Forms::Label());
			this->gender_label = (gcnew System::Windows::Forms::Label());
			this->section_label = (gcnew System::Windows::Forms::Label());
			this->batch_label = (gcnew System::Windows::Forms::Label());
			this->campus__label = (gcnew System::Windows::Forms::Label());
			this->rollno_label = (gcnew System::Windows::Forms::Label());
			this->EXIT_button = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->Logo_WHO->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// Name_label
			// 
			this->Name_label->AutoSize = true;
			this->Name_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->Name_label->Location = System::Drawing::Point(312, 94);
			this->Name_label->Name = L"Name_label";
			this->Name_label->Size = System::Drawing::Size(61, 24);
			this->Name_label->TabIndex = 11;
			this->Name_label->Text = L"Name";
			// 
			// name_textBox
			// 
			this->name_textBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->name_textBox->Location = System::Drawing::Point(471, 94);
			this->name_textBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->name_textBox->Name = L"name_textBox";
			this->name_textBox->ReadOnly = true;
			this->name_textBox->Size = System::Drawing::Size(416, 22);
			this->name_textBox->TabIndex = 10;
			this->name_textBox->TextChanged += gcnew System::EventHandler(this, &Info_Student::name_textBox_TextChanged);
			// 
			// Logo_WHO
			// 
			this->Logo_WHO->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(63)),
				static_cast<System::Int32>(static_cast<System::Byte>(155)));
			this->Logo_WHO->Controls->Add(this->label_paanel_WHO_2);
			this->Logo_WHO->Controls->Add(this->label_panel_WHO_1);
			this->Logo_WHO->Controls->Add(this->pictureBox1);
			this->Logo_WHO->Location = System::Drawing::Point(-1, -2);
			this->Logo_WHO->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Logo_WHO->Name = L"Logo_WHO";
			this->Logo_WHO->Size = System::Drawing::Size(209, 572);
			this->Logo_WHO->TabIndex = 9;
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
			// TITLE
			// 
			this->TITLE->AutoSize = true;
			this->TITLE->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 32));
			this->TITLE->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(63)),
				static_cast<System::Int32>(static_cast<System::Byte>(155)));
			this->TITLE->Location = System::Drawing::Point(255, 21);
			this->TITLE->Name = L"TITLE";
			this->TITLE->Size = System::Drawing::Size(713, 63);
			this->TITLE->TabIndex = 15;
			this->TITLE->Text = L"PERSONAL INFORMATION";
			// 
			// mobile_num_textBox
			// 
			this->mobile_num_textBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->mobile_num_textBox->Location = System::Drawing::Point(471, 225);
			this->mobile_num_textBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->mobile_num_textBox->Name = L"mobile_num_textBox";
			this->mobile_num_textBox->ReadOnly = true;
			this->mobile_num_textBox->Size = System::Drawing::Size(416, 22);
			this->mobile_num_textBox->TabIndex = 22;
			this->mobile_num_textBox->TextChanged += gcnew System::EventHandler(this, &Info_Student::mobile_num_textBox_TextChanged);
			// 
			// cnic_textBox
			// 
			this->cnic_textBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->cnic_textBox->Location = System::Drawing::Point(471, 158);
			this->cnic_textBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->cnic_textBox->Name = L"cnic_textBox";
			this->cnic_textBox->ReadOnly = true;
			this->cnic_textBox->Size = System::Drawing::Size(416, 22);
			this->cnic_textBox->TabIndex = 24;
			this->cnic_textBox->TextChanged += gcnew System::EventHandler(this, &Info_Student::cnic_textBox_TextChanged);
			// 
			// gender_textBox
			// 
			this->gender_textBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->gender_textBox->Location = System::Drawing::Point(471, 123);
			this->gender_textBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->gender_textBox->Name = L"gender_textBox";
			this->gender_textBox->ReadOnly = true;
			this->gender_textBox->Size = System::Drawing::Size(416, 22);
			this->gender_textBox->TabIndex = 25;
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
			this->label1->TabIndex = 26;
			this->label1->Text = L"ACADEMIC INFORMATION";
			// 
			// section_textBox
			// 
			this->section_textBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->section_textBox->Location = System::Drawing::Point(471, 393);
			this->section_textBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->section_textBox->Name = L"section_textBox";
			this->section_textBox->ReadOnly = true;
			this->section_textBox->Size = System::Drawing::Size(416, 22);
			this->section_textBox->TabIndex = 30;
			// 
			// campus_textBox
			// 
			this->campus_textBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->campus_textBox->Location = System::Drawing::Point(471, 427);
			this->campus_textBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->campus_textBox->Name = L"campus_textBox";
			this->campus_textBox->ReadOnly = true;
			this->campus_textBox->Size = System::Drawing::Size(416, 22);
			this->campus_textBox->TabIndex = 29;
			// 
			// batch_textBox
			// 
			this->batch_textBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->batch_textBox->Location = System::Drawing::Point(471, 461);
			this->batch_textBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->batch_textBox->Name = L"batch_textBox";
			this->batch_textBox->ReadOnly = true;
			this->batch_textBox->Size = System::Drawing::Size(416, 22);
			this->batch_textBox->TabIndex = 28;
			// 
			// rollno_textBox
			// 
			this->rollno_textBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->rollno_textBox->Location = System::Drawing::Point(471, 363);
			this->rollno_textBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->rollno_textBox->Name = L"rollno_textBox";
			this->rollno_textBox->ReadOnly = true;
			this->rollno_textBox->Size = System::Drawing::Size(416, 22);
			this->rollno_textBox->TabIndex = 27;
			// 
			// mobileno_label
			// 
			this->mobileno_label->AutoSize = true;
			this->mobileno_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->mobileno_label->Location = System::Drawing::Point(309, 227);
			this->mobileno_label->Name = L"mobileno_label";
			this->mobileno_label->Size = System::Drawing::Size(141, 24);
			this->mobileno_label->TabIndex = 31;
			this->mobileno_label->Text = L"Mobile Number";
			this->mobileno_label->Click += gcnew System::EventHandler(this, &Info_Student::label2_Click);
			// 
			// cnic_label
			// 
			this->cnic_label->AutoSize = true;
			this->cnic_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->cnic_label->Location = System::Drawing::Point(310, 158);
			this->cnic_label->Name = L"cnic_label";
			this->cnic_label->Size = System::Drawing::Size(54, 24);
			this->cnic_label->TabIndex = 32;
			this->cnic_label->Text = L"CNIC";
			// 
			// dob_label
			// 
			this->dob_label->AutoSize = true;
			this->dob_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->dob_label->Location = System::Drawing::Point(311, 190);
			this->dob_label->Name = L"dob_label";
			this->dob_label->Size = System::Drawing::Size(110, 24);
			this->dob_label->TabIndex = 33;
			this->dob_label->Text = L"Date of Birth";
			// 
			// gender_label
			// 
			this->gender_label->AutoSize = true;
			this->gender_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->gender_label->Location = System::Drawing::Point(308, 123);
			this->gender_label->Name = L"gender_label";
			this->gender_label->Size = System::Drawing::Size(74, 24);
			this->gender_label->TabIndex = 34;
			this->gender_label->Text = L"Gender";
			// 
			// section_label
			// 
			this->section_label->AutoSize = true;
			this->section_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->section_label->Location = System::Drawing::Point(332, 391);
			this->section_label->Name = L"section_label";
			this->section_label->Size = System::Drawing::Size(73, 24);
			this->section_label->TabIndex = 39;
			this->section_label->Text = L"Section";
			// 
			// batch_label
			// 
			this->batch_label->AutoSize = true;
			this->batch_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->batch_label->Location = System::Drawing::Point(335, 458);
			this->batch_label->Name = L"batch_label";
			this->batch_label->Size = System::Drawing::Size(57, 24);
			this->batch_label->TabIndex = 38;
			this->batch_label->Text = L"Batch";
			// 
			// campus__label
			// 
			this->campus__label->AutoSize = true;
			this->campus__label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->campus__label->Location = System::Drawing::Point(334, 426);
			this->campus__label->Name = L"campus__label";
			this->campus__label->Size = System::Drawing::Size(80, 24);
			this->campus__label->TabIndex = 37;
			this->campus__label->Text = L"Campus";
			// 
			// rollno_label
			// 
			this->rollno_label->AutoSize = true;
			this->rollno_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->rollno_label->Location = System::Drawing::Point(332, 358);
			this->rollno_label->Name = L"rollno_label";
			this->rollno_label->Size = System::Drawing::Size(116, 24);
			this->rollno_label->TabIndex = 36;
			this->rollno_label->Text = L"Roll Number";
			this->rollno_label->Click += gcnew System::EventHandler(this, &Info_Student::label9_Click);
			// 
			// EXIT_button
			// 
			this->EXIT_button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(2)), static_cast<System::Int32>(static_cast<System::Byte>(119)),
				static_cast<System::Int32>(static_cast<System::Byte>(189)));
			this->EXIT_button->ForeColor = System::Drawing::Color::White;
			this->EXIT_button->Location = System::Drawing::Point(849, 502);
			this->EXIT_button->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->EXIT_button->Name = L"EXIT_button";
			this->EXIT_button->Size = System::Drawing::Size(159, 46);
			this->EXIT_button->TabIndex = 14;
			this->EXIT_button->Text = L"EXIT";
			this->EXIT_button->UseVisualStyleBackColor = false;
			this->EXIT_button->Click += gcnew System::EventHandler(this, &Info_Student::EXIT_button_Click);
			// 
			// textBox1
			// 
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox1->Location = System::Drawing::Point(471, 192);
			this->textBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(416, 22);
			this->textBox1->TabIndex = 40;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Info_Student::textBox1_TextChanged);
			// 
			// Info_Student
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1057, 578);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->section_label);
			this->Controls->Add(this->batch_label);
			this->Controls->Add(this->campus__label);
			this->Controls->Add(this->rollno_label);
			this->Controls->Add(this->gender_label);
			this->Controls->Add(this->dob_label);
			this->Controls->Add(this->cnic_label);
			this->Controls->Add(this->mobileno_label);
			this->Controls->Add(this->section_textBox);
			this->Controls->Add(this->campus_textBox);
			this->Controls->Add(this->batch_textBox);
			this->Controls->Add(this->rollno_textBox);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->gender_textBox);
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
			this->Name = L"Info_Student";
			this->Text = L"Info_Student";
			this->Load += gcnew System::EventHandler(this, &Info_Student::Info_Student_Load);
			this->Logo_WHO->ResumeLayout(false);
			this->Logo_WHO->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void pictureBox3_Click(System::Object^ sender, System::EventArgs^ e) {}
	private: System::Void name_textBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
		   System::Void Info_Student_Load(System::Object^ sender, System::EventArgs^ e)
		   {
			   String^ sql =
				   "SELECT RollNO, Name, Gender, CNIC,MobileNum, Campus, Section, Batch, DOB " +
				   "FROM Student WHERE RollNO = @roll";
			   try {
				   SqlConnection^ conn = gcnew SqlConnection(connectionString);
				   SqlCommand^ cmd = gcnew SqlCommand(sql, conn);
				   cmd->Parameters->AddWithValue("@roll", currentRoll);
				   conn->Open();
				   SqlDataReader^ rdr = cmd->ExecuteReader();
				   if (rdr->Read()) {
					   name_textBox->Text = rdr["Name"]->ToString();
					   gender_textBox->Text = rdr["Gender"]->ToString();
					   cnic_textBox->Text = rdr["CNIC"]->ToString();
					   mobile_num_textBox->Text = rdr["MobileNum"]->ToString();
					   campus_textBox->Text = rdr["Campus"]->ToString();
					   section_textBox->Text = rdr["Section"]->ToString();
					   batch_textBox->Text = rdr["Batch"]->ToString();
					   textBox1->Text = rdr["DOB"]->ToString();
					   rollno_textBox->Text = rdr["RollNO"]->ToString();
				   }
				   conn->Close();
			   }
			   catch (SqlException^ ex) {
				   MessageBox::Show("DB error: " + ex->Message);
			   }
		   }
	private: System::Void label9_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void EXIT_button_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void cnic_textBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void mobile_num_textBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
