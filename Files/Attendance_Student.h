#pragma once
#include "Attendance_Studentt.h"
#include <fstream>
#include <string>

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
	/// Summary for Attendance_Student
	/// </summary>
	public ref class Attendance_Student : public System::Windows::Forms::Form
	{
	public:
		Attendance_Student(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		Attendance_Student(String^ connStr, String^ rollNo)
		{
			InitializeComponent();
			this->connectionString = connStr;
			this->currentRoll = rollNo;
			this->Load += gcnew System::EventHandler(this, &Attendance_Student::Attendance_Student_Load);
		}


		void SetSubject(String^ subj)
		{
			this->selectedSubject = subj;
		}


	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Attendance_Student()
		{
			if (components)
			{
				delete components;
			}
		}

		void DLDbutton_Click(Object^ sender, EventArgs^ e)
		{
			selectedSubject = "DLD";
			Attendance_Studentt^ a = gcnew Attendance_Studentt(connectionString, currentRoll, selectedSubject);
			a->ShowDialog();
		}


		void MVCbutton_Click(Object^ sender, EventArgs^ e)
		{
			selectedSubject = "MVC";
			Attendance_Studentt^ a = gcnew Attendance_Studentt(connectionString, currentRoll, selectedSubject);
			a->ShowDialog();
		}

		void DS_BUTTON_Click(Object^ sender, EventArgs^ e)
		{
			selectedSubject = "DS";
			Attendance_Studentt^ a = gcnew Attendance_Studentt(connectionString, currentRoll, selectedSubject);
			a->ShowDialog();
		}

		void ISE_BUTTON_Click(Object^ sender, EventArgs^ e)
		{
			selectedSubject = "ISE";
			Attendance_Studentt^ a = gcnew Attendance_Studentt(connectionString, currentRoll, selectedSubject);
			a->ShowDialog();
		}

		void OOP_BUTTON_Click(Object^ sender, EventArgs^ e)
		{
			selectedSubject = "OOP";
			Attendance_Studentt^ a = gcnew Attendance_Studentt(connectionString, currentRoll, selectedSubject);
			a->ShowDialog();
		}

	private: System::Windows::Forms::Button^ DLDbutton;
	protected:
	private: System::Windows::Forms::Button^ MVCbutton;
	private: System::Windows::Forms::Button^ EXIT_button;

	private: System::Windows::Forms::Button^ DS_BUTTON;
	private: System::Windows::Forms::Button^ ISE_BUTTON;
	private: System::Windows::Forms::Button^ OOP_BUTTON;
	private: System::Windows::Forms::Label^ TITLE;
	private: System::Windows::Forms::Panel^ Logo_WHO;
	private: System::Windows::Forms::Label^ label_paanel_WHO_2;
	private: System::Windows::Forms::Label^ label_panel_WHO_1;
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

		String^ currentRoll;
		String^ selectedSubject;



#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Attendance_Student::typeid));
			this->DLDbutton = (gcnew System::Windows::Forms::Button());
			this->MVCbutton = (gcnew System::Windows::Forms::Button());
			this->EXIT_button = (gcnew System::Windows::Forms::Button());
			this->DS_BUTTON = (gcnew System::Windows::Forms::Button());
			this->ISE_BUTTON = (gcnew System::Windows::Forms::Button());
			this->OOP_BUTTON = (gcnew System::Windows::Forms::Button());
			this->TITLE = (gcnew System::Windows::Forms::Label());
			this->Logo_WHO = (gcnew System::Windows::Forms::Panel());
			this->label_paanel_WHO_2 = (gcnew System::Windows::Forms::Label());
			this->label_panel_WHO_1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->Logo_WHO->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// DLDbutton
			// 
			this->DLDbutton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(2)), static_cast<System::Int32>(static_cast<System::Byte>(119)),
				static_cast<System::Int32>(static_cast<System::Byte>(189)));
			this->DLDbutton->ForeColor = System::Drawing::Color::White;
			this->DLDbutton->Location = System::Drawing::Point(276, 441);
			this->DLDbutton->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->DLDbutton->Name = L"DLDbutton";
			this->DLDbutton->Size = System::Drawing::Size(350, 47);
			this->DLDbutton->TabIndex = 21;
			this->DLDbutton->Text = L"DLD";
			this->DLDbutton->UseVisualStyleBackColor = false;
			this->DLDbutton->Click += gcnew System::EventHandler(this, &Attendance_Student::DLDbutton_Click);
			// 
			// MVCbutton
			// 
			this->MVCbutton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(2)), static_cast<System::Int32>(static_cast<System::Byte>(119)),
				static_cast<System::Int32>(static_cast<System::Byte>(189)));
			this->MVCbutton->ForeColor = System::Drawing::Color::White;
			this->MVCbutton->Location = System::Drawing::Point(276, 357);
			this->MVCbutton->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->MVCbutton->Name = L"MVCbutton";
			this->MVCbutton->Size = System::Drawing::Size(350, 47);
			this->MVCbutton->TabIndex = 20;
			this->MVCbutton->Text = L"MVC";
			this->MVCbutton->UseVisualStyleBackColor = false;
			this->MVCbutton->Click += gcnew System::EventHandler(this, &Attendance_Student::MVCbutton_Click);
			// 
			// EXIT_button
			// 
			this->EXIT_button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(2)), static_cast<System::Int32>(static_cast<System::Byte>(119)),
				static_cast<System::Int32>(static_cast<System::Byte>(189)));
			this->EXIT_button->ForeColor = System::Drawing::Color::White;
			this->EXIT_button->Location = System::Drawing::Point(516, 507);
			this->EXIT_button->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->EXIT_button->Name = L"EXIT_button";
			this->EXIT_button->Size = System::Drawing::Size(137, 50);
			this->EXIT_button->TabIndex = 19;
			this->EXIT_button->Text = L"EXIT";
			this->EXIT_button->UseVisualStyleBackColor = false;
			this->EXIT_button->Click += gcnew System::EventHandler(this, &Attendance_Student::EXIT_Click);
			// 
			// DS_BUTTON
			// 
			this->DS_BUTTON->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(2)), static_cast<System::Int32>(static_cast<System::Byte>(119)),
				static_cast<System::Int32>(static_cast<System::Byte>(189)));
			this->DS_BUTTON->ForeColor = System::Drawing::Color::White;
			this->DS_BUTTON->Location = System::Drawing::Point(275, 279);
			this->DS_BUTTON->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->DS_BUTTON->Name = L"DS_BUTTON";
			this->DS_BUTTON->Size = System::Drawing::Size(350, 47);
			this->DS_BUTTON->TabIndex = 18;
			this->DS_BUTTON->Text = L"DS";
			this->DS_BUTTON->UseVisualStyleBackColor = false;
			this->DS_BUTTON->Click += gcnew System::EventHandler(this, &Attendance_Student::DS_BUTTON_Click);
			// 
			// ISE_BUTTON
			// 
			this->ISE_BUTTON->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(2)), static_cast<System::Int32>(static_cast<System::Byte>(119)),
				static_cast<System::Int32>(static_cast<System::Byte>(189)));
			this->ISE_BUTTON->ForeColor = System::Drawing::Color::White;
			this->ISE_BUTTON->Location = System::Drawing::Point(274, 198);
			this->ISE_BUTTON->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->ISE_BUTTON->Name = L"ISE_BUTTON";
			this->ISE_BUTTON->Size = System::Drawing::Size(350, 47);
			this->ISE_BUTTON->TabIndex = 17;
			this->ISE_BUTTON->Text = L"ISE";
			this->ISE_BUTTON->UseVisualStyleBackColor = false;
			this->ISE_BUTTON->Click += gcnew System::EventHandler(this, &Attendance_Student::ISE_BUTTON_Click);
			// 
			// OOP_BUTTON
			// 
			this->OOP_BUTTON->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(2)), static_cast<System::Int32>(static_cast<System::Byte>(119)),
				static_cast<System::Int32>(static_cast<System::Byte>(189)));
			this->OOP_BUTTON->ForeColor = System::Drawing::Color::White;
			this->OOP_BUTTON->Location = System::Drawing::Point(274, 122);
			this->OOP_BUTTON->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->OOP_BUTTON->Name = L"OOP_BUTTON";
			this->OOP_BUTTON->Size = System::Drawing::Size(350, 47);
			this->OOP_BUTTON->TabIndex = 16;
			this->OOP_BUTTON->Text = L"OOP";
			this->OOP_BUTTON->UseVisualStyleBackColor = false;
			this->OOP_BUTTON->Click += gcnew System::EventHandler(this, &Attendance_Student::OOP_BUTTON_Click);
			// 
			// TITLE
			// 
			this->TITLE->AutoSize = true;
			this->TITLE->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28));
			this->TITLE->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(63)),
				static_cast<System::Int32>(static_cast<System::Byte>(155)));
			this->TITLE->Location = System::Drawing::Point(269, 35);
			this->TITLE->Name = L"TITLE";
			this->TITLE->Size = System::Drawing::Size(341, 54);
			this->TITLE->TabIndex = 15;
			this->TITLE->Text = L"ATTENDANCE";
			// 
			// Logo_WHO
			// 
			this->Logo_WHO->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(63)),
				static_cast<System::Int32>(static_cast<System::Byte>(155)));
			this->Logo_WHO->Controls->Add(this->label_paanel_WHO_2);
			this->Logo_WHO->Controls->Add(this->label_panel_WHO_1);
			this->Logo_WHO->Controls->Add(this->pictureBox1);
			this->Logo_WHO->Location = System::Drawing::Point(0, -3);
			this->Logo_WHO->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Logo_WHO->Name = L"Logo_WHO";
			this->Logo_WHO->Size = System::Drawing::Size(212, 637);
			this->Logo_WHO->TabIndex = 14;
			// 
			// label_paanel_WHO_2
			// 
			this->label_paanel_WHO_2->AutoSize = true;
			this->label_paanel_WHO_2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18));
			this->label_paanel_WHO_2->ForeColor = System::Drawing::Color::White;
			this->label_paanel_WHO_2->Location = System::Drawing::Point(52, 383);
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
			this->label_panel_WHO_1->Location = System::Drawing::Point(36, 351);
			this->label_panel_WHO_1->Name = L"label_panel_WHO_1";
			this->label_panel_WHO_1->Size = System::Drawing::Size(118, 36);
			this->label_panel_WHO_1->TabIndex = 1;
			this->label_panel_WHO_1->Text = L"Student";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(-4, 171);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(208, 164);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// Attendance_Student
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(694, 590);
			this->Controls->Add(this->DLDbutton);
			this->Controls->Add(this->MVCbutton);
			this->Controls->Add(this->EXIT_button);
			this->Controls->Add(this->DS_BUTTON);
			this->Controls->Add(this->ISE_BUTTON);
			this->Controls->Add(this->OOP_BUTTON);
			this->Controls->Add(this->TITLE);
			this->Controls->Add(this->Logo_WHO);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->MaximumSize = System::Drawing::Size(712, 637);
			this->MinimumSize = System::Drawing::Size(712, 637);
			this->Name = L"Attendance_Student";
			this->Text = L"Attendance_Student";
			this->Load += gcnew System::EventHandler(this, &Attendance_Student::Attendance_Student_Load);
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
	private: System::Void Attendance_Student_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
