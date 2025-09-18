#pragma once
#include "Teacher_Marks2.h"
#include <fstream>
#include <iostream>
#include <string>
#include <msclr\marshal_cppstd.h>
//using namespace std;
namespace SMS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for Teacher_Marks
	/// </summary>
	public ref class Teacher_Marks : public System::Windows::Forms::Form
	{
	public:

		Teacher_Marks(String^ connStr, String^ userID)
		{
			InitializeComponent();

			this->connectionString = connStr;
			this->currentUserID = userID;

			// wire up events
			this->QUIZ_BUTTON->Click += gcnew EventHandler(this, &Teacher_Marks::OnQuiz);
			this->ASSIGNMENT_BUTTON->Click += gcnew EventHandler(this, &Teacher_Marks::OnAssignment);
			this->MIDS_BUTTON->Click += gcnew EventHandler(this, &Teacher_Marks::OnMid);
			this->FINALbutton->Click += gcnew EventHandler(this, &Teacher_Marks::OnFinal);
		}


	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Teacher_Marks()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Button^ FINALbutton;
	private: System::Windows::Forms::Button^ EXIT_button;
	protected:


	private: System::Windows::Forms::Button^ MIDS_BUTTON;

	private: System::Windows::Forms::Button^ ASSIGNMENT_BUTTON;
	private: System::Windows::Forms::Button^ QUIZ_BUTTON;
	private: System::Windows::Forms::Label^ TITLE;
	private: System::Windows::Forms::Panel^ Logo_WHO;
	private: System::Windows::Forms::Label^ label_paanel_WHO_2;
	private: System::Windows::Forms::Label^ label_panel_WHO_1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;
		String^ connectionString;
		String^ currentUserID;

		// button handlers
		void OnQuiz(Object^ s, EventArgs^ e) { OpenMarksDialog("QUIZ"); }
		void OnAssignment(Object^ s, EventArgs^ e) { OpenMarksDialog("ASSIGNMENT"); }
		void OnMid(Object^ s, EventArgs^ e) { OpenMarksDialog("MID"); }
		void OnFinal(Object^ s, EventArgs^ e) { OpenMarksDialog("FINAL"); }
		
		void OpenMarksDialog(String^ markType)
		{
			this->Hide();
			auto dlg = gcnew Teacher_Marks2(connectionString, currentUserID, markType);
			dlg->ShowDialog();
			this->Show();
		}


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Teacher_Marks::typeid));
			this->FINALbutton = (gcnew System::Windows::Forms::Button());
			this->EXIT_button = (gcnew System::Windows::Forms::Button());
			this->MIDS_BUTTON = (gcnew System::Windows::Forms::Button());
			this->ASSIGNMENT_BUTTON = (gcnew System::Windows::Forms::Button());
			this->QUIZ_BUTTON = (gcnew System::Windows::Forms::Button());
			this->TITLE = (gcnew System::Windows::Forms::Label());
			this->Logo_WHO = (gcnew System::Windows::Forms::Panel());
			this->label_paanel_WHO_2 = (gcnew System::Windows::Forms::Label());
			this->label_panel_WHO_1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->Logo_WHO->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// FINALbutton
			// 
			this->FINALbutton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(2)), static_cast<System::Int32>(static_cast<System::Byte>(119)),
				static_cast<System::Int32>(static_cast<System::Byte>(189)));
			this->FINALbutton->ForeColor = System::Drawing::Color::White;
			this->FINALbutton->Location = System::Drawing::Point(277, 408);
			this->FINALbutton->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->FINALbutton->Name = L"FINALbutton";
			this->FINALbutton->Size = System::Drawing::Size(350, 47);
			this->FINALbutton->TabIndex = 20;
			this->FINALbutton->Text = L"FINAL";
			this->FINALbutton->UseVisualStyleBackColor = false;
			this->FINALbutton->Click += gcnew System::EventHandler(this, &Teacher_Marks::MVCbutton_Click);
			// 
			// EXIT_button
			// 
			this->EXIT_button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(2)), static_cast<System::Int32>(static_cast<System::Byte>(119)),
				static_cast<System::Int32>(static_cast<System::Byte>(189)));
			this->EXIT_button->ForeColor = System::Drawing::Color::White;
			this->EXIT_button->Location = System::Drawing::Point(517, 484);
			this->EXIT_button->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->EXIT_button->Name = L"EXIT_button";
			this->EXIT_button->Size = System::Drawing::Size(130, 54);
			this->EXIT_button->TabIndex = 19;
			this->EXIT_button->Text = L"EXIT";
			this->EXIT_button->UseVisualStyleBackColor = false;
			this->EXIT_button->Click += gcnew System::EventHandler(this, &Teacher_Marks::EXIT_Click);
			// 
			// MIDS_BUTTON
			// 
			this->MIDS_BUTTON->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(2)), static_cast<System::Int32>(static_cast<System::Byte>(119)),
				static_cast<System::Int32>(static_cast<System::Byte>(189)));
			this->MIDS_BUTTON->ForeColor = System::Drawing::Color::White;
			this->MIDS_BUTTON->Location = System::Drawing::Point(276, 334);
			this->MIDS_BUTTON->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->MIDS_BUTTON->Name = L"MIDS_BUTTON";
			this->MIDS_BUTTON->Size = System::Drawing::Size(350, 47);
			this->MIDS_BUTTON->TabIndex = 18;
			this->MIDS_BUTTON->Text = L"MID";
			this->MIDS_BUTTON->UseVisualStyleBackColor = false;
			this->MIDS_BUTTON->Click += gcnew System::EventHandler(this, &Teacher_Marks::MIDS_BUTTON_Click);
			// 
			// ASSIGNMENT_BUTTON
			// 
			this->ASSIGNMENT_BUTTON->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(2)), static_cast<System::Int32>(static_cast<System::Byte>(119)),
				static_cast<System::Int32>(static_cast<System::Byte>(189)));
			this->ASSIGNMENT_BUTTON->ForeColor = System::Drawing::Color::White;
			this->ASSIGNMENT_BUTTON->Location = System::Drawing::Point(276, 245);
			this->ASSIGNMENT_BUTTON->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->ASSIGNMENT_BUTTON->Name = L"ASSIGNMENT_BUTTON";
			this->ASSIGNMENT_BUTTON->Size = System::Drawing::Size(350, 47);
			this->ASSIGNMENT_BUTTON->TabIndex = 17;
			this->ASSIGNMENT_BUTTON->Text = L"ASSIGNMENT";
			this->ASSIGNMENT_BUTTON->UseVisualStyleBackColor = false;
			this->ASSIGNMENT_BUTTON->Click += gcnew System::EventHandler(this, &Teacher_Marks::ASSIGNMENT_BUTTON_Click);
			// 
			// QUIZ_BUTTON
			// 
			this->QUIZ_BUTTON->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(2)), static_cast<System::Int32>(static_cast<System::Byte>(119)),
				static_cast<System::Int32>(static_cast<System::Byte>(189)));
			this->QUIZ_BUTTON->ForeColor = System::Drawing::Color::White;
			this->QUIZ_BUTTON->Location = System::Drawing::Point(276, 161);
			this->QUIZ_BUTTON->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->QUIZ_BUTTON->Name = L"QUIZ_BUTTON";
			this->QUIZ_BUTTON->Size = System::Drawing::Size(350, 47);
			this->QUIZ_BUTTON->TabIndex = 16;
			this->QUIZ_BUTTON->Text = L"QUIZ";
			this->QUIZ_BUTTON->UseVisualStyleBackColor = false;
			this->QUIZ_BUTTON->Click += gcnew System::EventHandler(this, &Teacher_Marks::QUIZ_BUTTON_Click);
			// 
			// TITLE
			// 
			this->TITLE->AutoSize = true;
			this->TITLE->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28));
			this->TITLE->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(63)),
				static_cast<System::Int32>(static_cast<System::Byte>(155)));
			this->TITLE->Location = System::Drawing::Point(294, 62);
			this->TITLE->Name = L"TITLE";
			this->TITLE->Size = System::Drawing::Size(270, 54);
			this->TITLE->TabIndex = 15;
			this->TITLE->Text = L"ACADEMIC";
			// 
			// Logo_WHO
			// 
			this->Logo_WHO->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(63)),
				static_cast<System::Int32>(static_cast<System::Byte>(155)));
			this->Logo_WHO->Controls->Add(this->label_paanel_WHO_2);
			this->Logo_WHO->Controls->Add(this->label_panel_WHO_1);
			this->Logo_WHO->Controls->Add(this->pictureBox1);
			this->Logo_WHO->Location = System::Drawing::Point(2, -3);
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
			this->label_paanel_WHO_2->Location = System::Drawing::Point(52, 373);
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
			this->label_panel_WHO_1->Location = System::Drawing::Point(34, 341);
			this->label_panel_WHO_1->Name = L"label_panel_WHO_1";
			this->label_panel_WHO_1->Size = System::Drawing::Size(123, 36);
			this->label_panel_WHO_1->TabIndex = 1;
			this->label_panel_WHO_1->Text = L"Teacher";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(-4, 161);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(208, 164);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// Teacher_Marks
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(697, 574);
			this->Controls->Add(this->FINALbutton);
			this->Controls->Add(this->EXIT_button);
			this->Controls->Add(this->MIDS_BUTTON);
			this->Controls->Add(this->ASSIGNMENT_BUTTON);
			this->Controls->Add(this->QUIZ_BUTTON);
			this->Controls->Add(this->TITLE);
			this->Controls->Add(this->Logo_WHO);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->MaximumSize = System::Drawing::Size(715, 621);
			this->MinimumSize = System::Drawing::Size(715, 621);
			this->Name = L"Teacher_Marks";
			this->Text = L"Teacher_Marks";
			this->Load += gcnew System::EventHandler(this, &Teacher_Marks::Teacher_Marks_Load);
			this->Logo_WHO->ResumeLayout(false);
			this->Logo_WHO->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		//   this is the final button
	private: System::Void MVCbutton_Click(System::Object^ sender, System::EventArgs^ e) {
		
		
	}
private: System::Void QUIZ_BUTTON_Click(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void ASSIGNMENT_BUTTON_Click(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void MIDS_BUTTON_Click(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void EXIT_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void Teacher_Marks_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
