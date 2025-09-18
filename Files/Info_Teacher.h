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
	/// Summary for Info_Teacher
	/// </summary>
	public ref class Info_Teacher : public System::Windows::Forms::Form
	{
	public:
		Info_Teacher(String^ connStr, String^ userId)
		{
			InitializeComponent();
			connectionString = connStr;
			this->userID = userId;
			this->Load += gcnew EventHandler(this, &Info_Teacher::Info_Teacher_Load);
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Info_Teacher()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Label^ degree_label;
	private: System::Windows::Forms::Label^ department_label;
	private: System::Windows::Forms::Label^ campus__label;
	private: System::Windows::Forms::Label^ userID_label;


	private: System::Windows::Forms::Label^ gender_label;
	private: System::Windows::Forms::Label^ dob_label;
	private: System::Windows::Forms::Label^ cnic_label;
	private: System::Windows::Forms::Label^ mobileno_label;
	private: System::Windows::Forms::TextBox^ degree_textBox;
	private: System::Windows::Forms::TextBox^ campus_textBox;
	private: System::Windows::Forms::TextBox^ depaartment_textBox;



	private: System::Windows::Forms::TextBox^ user_id_textBox;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ gender_textBox;
	private: System::Windows::Forms::TextBox^ cnic_textBox;
	private: System::Windows::Forms::TextBox^ mobile_num_textBox;



	private: System::Windows::Forms::Label^ TITLE;
	private: System::Windows::Forms::Button^ EXIT_button;
	private: System::Windows::Forms::Label^ Name_label;
	private: System::Windows::Forms::TextBox^ name_textBox;

	private: System::Windows::Forms::Panel^ Logo_WHO;
	private: System::Windows::Forms::Label^ label_paanel_WHO_2;
	private: System::Windows::Forms::Label^ label_panel;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::TextBox^ textBox1;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;
		String^ connectionString;
		String^ userID;


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Info_Teacher::typeid));
			this->degree_label = (gcnew System::Windows::Forms::Label());
			this->department_label = (gcnew System::Windows::Forms::Label());
			this->campus__label = (gcnew System::Windows::Forms::Label());
			this->userID_label = (gcnew System::Windows::Forms::Label());
			this->gender_label = (gcnew System::Windows::Forms::Label());
			this->dob_label = (gcnew System::Windows::Forms::Label());
			this->cnic_label = (gcnew System::Windows::Forms::Label());
			this->mobileno_label = (gcnew System::Windows::Forms::Label());
			this->degree_textBox = (gcnew System::Windows::Forms::TextBox());
			this->campus_textBox = (gcnew System::Windows::Forms::TextBox());
			this->depaartment_textBox = (gcnew System::Windows::Forms::TextBox());
			this->user_id_textBox = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->gender_textBox = (gcnew System::Windows::Forms::TextBox());
			this->cnic_textBox = (gcnew System::Windows::Forms::TextBox());
			this->mobile_num_textBox = (gcnew System::Windows::Forms::TextBox());
			this->TITLE = (gcnew System::Windows::Forms::Label());
			this->EXIT_button = (gcnew System::Windows::Forms::Button());
			this->Name_label = (gcnew System::Windows::Forms::Label());
			this->name_textBox = (gcnew System::Windows::Forms::TextBox());
			this->Logo_WHO = (gcnew System::Windows::Forms::Panel());
			this->label_paanel_WHO_2 = (gcnew System::Windows::Forms::Label());
			this->label_panel = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->Logo_WHO->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// degree_label
			// 
			this->degree_label->AutoSize = true;
			this->degree_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->degree_label->Location = System::Drawing::Point(369, 489);
			this->degree_label->Name = L"degree_label";
			this->degree_label->Size = System::Drawing::Size(83, 26);
			this->degree_label->TabIndex = 62;
			this->degree_label->Text = L"Degree";
			// 
			// department_label
			// 
			this->department_label->AutoSize = true;
			this->department_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->department_label->Location = System::Drawing::Point(370, 572);
			this->department_label->Name = L"department_label";
			this->department_label->Size = System::Drawing::Size(126, 26);
			this->department_label->TabIndex = 61;
			this->department_label->Text = L"Department";
			// 
			// campus__label
			// 
			this->campus__label->AutoSize = true;
			this->campus__label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->campus__label->Location = System::Drawing::Point(369, 532);
			this->campus__label->Name = L"campus__label";
			this->campus__label->Size = System::Drawing::Size(94, 26);
			this->campus__label->TabIndex = 60;
			this->campus__label->Text = L"Campus";
			// 
			// userID_label
			// 
			this->userID_label->AutoSize = true;
			this->userID_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->userID_label->Location = System::Drawing::Point(370, 449);
			this->userID_label->Name = L"userID_label";
			this->userID_label->Size = System::Drawing::Size(86, 26);
			this->userID_label->TabIndex = 59;
			this->userID_label->Text = L"User ID";
			// 
			// gender_label
			// 
			this->gender_label->AutoSize = true;
			this->gender_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->gender_label->Location = System::Drawing::Point(345, 155);
			this->gender_label->Name = L"gender_label";
			this->gender_label->Size = System::Drawing::Size(84, 26);
			this->gender_label->TabIndex = 57;
			this->gender_label->Text = L"Gender";
			// 
			// dob_label
			// 
			this->dob_label->AutoSize = true;
			this->dob_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->dob_label->Location = System::Drawing::Point(348, 238);
			this->dob_label->Name = L"dob_label";
			this->dob_label->Size = System::Drawing::Size(133, 26);
			this->dob_label->TabIndex = 56;
			this->dob_label->Text = L"Date of Birth";
			// 
			// cnic_label
			// 
			this->cnic_label->AutoSize = true;
			this->cnic_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->cnic_label->Location = System::Drawing::Point(346, 198);
			this->cnic_label->Name = L"cnic_label";
			this->cnic_label->Size = System::Drawing::Size(66, 26);
			this->cnic_label->TabIndex = 55;
			this->cnic_label->Text = L"CNIC";
			// 
			// mobileno_label
			// 
			this->mobileno_label->AutoSize = true;
			this->mobileno_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->mobileno_label->Location = System::Drawing::Point(346, 285);
			this->mobileno_label->Name = L"mobileno_label";
			this->mobileno_label->Size = System::Drawing::Size(160, 26);
			this->mobileno_label->TabIndex = 54;
			this->mobileno_label->Text = L"Mobile Number";
			// 
			// degree_textBox
			// 
			this->degree_textBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->degree_textBox->Location = System::Drawing::Point(528, 492);
			this->degree_textBox->Name = L"degree_textBox";
			this->degree_textBox->ReadOnly = true;
			this->degree_textBox->Size = System::Drawing::Size(468, 26);
			this->degree_textBox->TabIndex = 53;
			// 
			// campus_textBox
			// 
			this->campus_textBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->campus_textBox->Location = System::Drawing::Point(528, 535);
			this->campus_textBox->Name = L"campus_textBox";
			this->campus_textBox->ReadOnly = true;
			this->campus_textBox->Size = System::Drawing::Size(468, 26);
			this->campus_textBox->TabIndex = 52;
			// 
			// depaartment_textBox
			// 
			this->depaartment_textBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->depaartment_textBox->Location = System::Drawing::Point(528, 577);
			this->depaartment_textBox->Name = L"depaartment_textBox";
			this->depaartment_textBox->ReadOnly = true;
			this->depaartment_textBox->Size = System::Drawing::Size(468, 26);
			this->depaartment_textBox->TabIndex = 51;
			// 
			// user_id_textBox
			// 
			this->user_id_textBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->user_id_textBox->Location = System::Drawing::Point(528, 455);
			this->user_id_textBox->Name = L"user_id_textBox";
			this->user_id_textBox->ReadOnly = true;
			this->user_id_textBox->Size = System::Drawing::Size(468, 26);
			this->user_id_textBox->TabIndex = 50;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 32));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(63)),
				static_cast<System::Int32>(static_cast<System::Byte>(155)));
			this->label1->Location = System::Drawing::Point(286, 348);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(835, 73);
			this->label1->TabIndex = 49;
			this->label1->Text = L"ACADEMIC INFORMATION";
			// 
			// gender_textBox
			// 
			this->gender_textBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->gender_textBox->Location = System::Drawing::Point(528, 155);
			this->gender_textBox->Name = L"gender_textBox";
			this->gender_textBox->ReadOnly = true;
			this->gender_textBox->Size = System::Drawing::Size(468, 26);
			this->gender_textBox->TabIndex = 48;
			// 
			// cnic_textBox
			// 
			this->cnic_textBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->cnic_textBox->Location = System::Drawing::Point(528, 198);
			this->cnic_textBox->Name = L"cnic_textBox";
			this->cnic_textBox->ReadOnly = true;
			this->cnic_textBox->Size = System::Drawing::Size(468, 26);
			this->cnic_textBox->TabIndex = 47;
			// 
			// mobile_num_textBox
			// 
			this->mobile_num_textBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->mobile_num_textBox->Location = System::Drawing::Point(528, 288);
			this->mobile_num_textBox->Name = L"mobile_num_textBox";
			this->mobile_num_textBox->ReadOnly = true;
			this->mobile_num_textBox->Size = System::Drawing::Size(468, 26);
			this->mobile_num_textBox->TabIndex = 46;
			// 
			// TITLE
			// 
			this->TITLE->AutoSize = true;
			this->TITLE->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 32));
			this->TITLE->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(63)),
				static_cast<System::Int32>(static_cast<System::Byte>(155)));
			this->TITLE->Location = System::Drawing::Point(285, 28);
			this->TITLE->Name = L"TITLE";
			this->TITLE->Size = System::Drawing::Size(847, 73);
			this->TITLE->TabIndex = 45;
			this->TITLE->Text = L"PERSONAL INFORMATION";
			// 
			// EXIT_button
			// 
			this->EXIT_button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(2)), static_cast<System::Int32>(static_cast<System::Byte>(119)),
				static_cast<System::Int32>(static_cast<System::Byte>(189)));
			this->EXIT_button->ForeColor = System::Drawing::Color::White;
			this->EXIT_button->Location = System::Drawing::Point(944, 632);
			this->EXIT_button->Name = L"EXIT_button";
			this->EXIT_button->Size = System::Drawing::Size(178, 57);
			this->EXIT_button->TabIndex = 44;
			this->EXIT_button->Text = L"EXIT";
			this->EXIT_button->UseVisualStyleBackColor = false;
			this->EXIT_button->Click += gcnew System::EventHandler(this, &Info_Teacher::EXIT_button_Click);
			// 
			// Name_label
			// 
			this->Name_label->AutoSize = true;
			this->Name_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->Name_label->Location = System::Drawing::Point(350, 118);
			this->Name_label->Name = L"Name_label";
			this->Name_label->Size = System::Drawing::Size(71, 26);
			this->Name_label->TabIndex = 43;
			this->Name_label->Text = L"Name";
			// 
			// name_textBox
			// 
			this->name_textBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->name_textBox->Location = System::Drawing::Point(528, 118);
			this->name_textBox->Name = L"name_textBox";
			this->name_textBox->ReadOnly = true;
			this->name_textBox->Size = System::Drawing::Size(468, 26);
			this->name_textBox->TabIndex = 42;
			// 
			// Logo_WHO
			// 
			this->Logo_WHO->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(63)),
				static_cast<System::Int32>(static_cast<System::Byte>(155)));
			this->Logo_WHO->Controls->Add(this->label_paanel_WHO_2);
			this->Logo_WHO->Controls->Add(this->label_panel);
			this->Logo_WHO->Controls->Add(this->pictureBox1);
			this->Logo_WHO->Location = System::Drawing::Point(-3, -2);
			this->Logo_WHO->Name = L"Logo_WHO";
			this->Logo_WHO->Size = System::Drawing::Size(236, 715);
			this->Logo_WHO->TabIndex = 41;
			// 
			// label_paanel_WHO_2
			// 
			this->label_paanel_WHO_2->AutoSize = true;
			this->label_paanel_WHO_2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18));
			this->label_paanel_WHO_2->ForeColor = System::Drawing::Color::White;
			this->label_paanel_WHO_2->Location = System::Drawing::Point(60, 438);
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
			this->label_panel->Location = System::Drawing::Point(42, 395);
			this->label_panel->Name = L"label_panel";
			this->label_panel->Size = System::Drawing::Size(149, 40);
			this->label_panel->TabIndex = 1;
			this->label_panel->Text = L"Teacher";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(14, 175);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(212, 205);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// textBox1
			// 
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox1->Location = System::Drawing::Point(528, 241);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(468, 26);
			this->textBox1->TabIndex = 63;
			// 
			// Info_Teacher
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1185, 712);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->degree_label);
			this->Controls->Add(this->department_label);
			this->Controls->Add(this->campus__label);
			this->Controls->Add(this->userID_label);
			this->Controls->Add(this->gender_label);
			this->Controls->Add(this->dob_label);
			this->Controls->Add(this->cnic_label);
			this->Controls->Add(this->mobileno_label);
			this->Controls->Add(this->degree_textBox);
			this->Controls->Add(this->campus_textBox);
			this->Controls->Add(this->depaartment_textBox);
			this->Controls->Add(this->user_id_textBox);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->gender_textBox);
			this->Controls->Add(this->cnic_textBox);
			this->Controls->Add(this->mobile_num_textBox);
			this->Controls->Add(this->TITLE);
			this->Controls->Add(this->EXIT_button);
			this->Controls->Add(this->Name_label);
			this->Controls->Add(this->name_textBox);
			this->Controls->Add(this->Logo_WHO);
			this->MaximumSize = System::Drawing::Size(1207, 768);
			this->MinimumSize = System::Drawing::Size(1207, 768);
			this->Name = L"Info_Teacher";
			this->Text = L"Info_Teacher";
			this->Load += gcnew System::EventHandler(this, &Info_Teacher::Info_Teacher_Load);
			this->Logo_WHO->ResumeLayout(false);
			this->Logo_WHO->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();
			this->EXIT_button->Click += gcnew System::EventHandler(this, &Info_Teacher::EXIT_button_Click);
		}
#pragma endregion
	private: System::Void EXIT_button_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void Info_Teacher_Load(System::Object^ sender, System::EventArgs^ e) {
		
		if (String::IsNullOrEmpty(userID)) {
			MessageBox::Show("No User ID specified.", "Error",
				MessageBoxButtons::OK, MessageBoxIcon::Error);
			this->Close();
			return;
		}

		try {
			SqlConnection^ conn = gcnew SqlConnection(connectionString);
			conn->Open();

			SqlCommand^ cmd = gcnew SqlCommand(
				"SELECT UserID, Name, Gender, CNIC, DOB, MobileNum, Degree, Campus, Department "
				"FROM Teacher WHERE UserID = @id",
				conn);
			cmd->Parameters->AddWithValue("@id", userID);

			SqlDataReader^ rdr = cmd->ExecuteReader();
			if (!rdr->Read()) {
				MessageBox::Show("Teacher not found.", "Error",
					MessageBoxButtons::OK, MessageBoxIcon::Error);
				conn->Close();
				this->Close();
				return;
			}

			// Populate each control via ToString() :contentReference[oaicite:2]{index=2}:contentReference[oaicite:3]{index=3}
			user_id_textBox->Text = rdr["UserID"]->ToString();
			name_textBox->Text = rdr["Name"]->ToString();
			gender_textBox->Text = rdr["Gender"]->ToString();
			cnic_textBox->Text = rdr["CNIC"]->ToString();
			mobile_num_textBox->Text = rdr["MobileNum"]->ToString();
			degree_textBox->Text = rdr["Degree"]->ToString();
			campus_textBox->Text = rdr["Campus"]->ToString();
			depaartment_textBox->Text = rdr["Department"]->ToString();

			// DOB: stored as text in DB → parse
			{
				String^ s = rdr["DOB"]->ToString();
				DateTime dt;
				if (DateTime::TryParse(s, dt))
					textBox1->Text = dt.ToShortDateString();
				else
					textBox1->Text = s;  // fallback
			}

			rdr->Close();
			conn->Close();
		}
		catch (SqlException^ ex) {
			MessageBox::Show("Database error: " + ex->Message, "Error",
				MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	
	}
	};
}
