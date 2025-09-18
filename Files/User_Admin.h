#pragma once
#include "User_Student_Admin.h"
#include "User_Teacher_Admin.h"
#include "Search_Student.h"
#include "Remove_Student.h"

#include <fstream>
#include <iostream>
#include <string>
#include <msclr\marshal_cppstd.h>
namespace SMS {

	using namespace System;
	using namespace System::IO;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for User_Admin
	/// </summary>
	public ref class User_Admin : public System::Windows::Forms::Form
	{
	private:
		String^ title;
	public:

		void GetTitle(String^% title)
		{
			String^ fileName = "FeatureAdmin.txt";
			if (File::Exists(fileName))
			{
				StreamReader^ sr = gcnew StreamReader(fileName);
				String^ line;
				Int32 lineNumber = 0;
				while ((line = sr->ReadLine()) != nullptr)
				{
					array<String^>^ parts = line->Split(',');
					if (parts->Length == 1)
					{
						String^ key = parts[0]->Trim();
						SetTitle(key);
					}
				}
				sr->Close();
			}
		}

		void WriteToFile(String^ data) {
			String^ filePath = "SearchUser.txt";
			System::IO::StreamWriter^ sw = gcnew System::IO::StreamWriter(filePath, false); 
			sw->WriteLine(data);
			sw->Close();
		}


		void SetTitle(String^ title)
		{
			this->title = title;
		}

		String^ ReturnTitle()
		{
			return title;
		}

		User_Admin(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~User_Admin()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ EXIT_button;
	protected:

	protected:
	private: System::Windows::Forms::Button^ Teacher_button;
	private: System::Windows::Forms::Button^ Student_button;
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

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(User_Admin::typeid));
			this->EXIT_button = (gcnew System::Windows::Forms::Button());
			this->Teacher_button = (gcnew System::Windows::Forms::Button());
			this->Student_button = (gcnew System::Windows::Forms::Button());
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
			this->EXIT_button->Location = System::Drawing::Point(635, 515);
			this->EXIT_button->Name = L"EXIT_button";
			this->EXIT_button->Size = System::Drawing::Size(146, 68);
			this->EXIT_button->TabIndex = 23;
			this->EXIT_button->Text = L"EXIT";
			this->EXIT_button->UseVisualStyleBackColor = false;
			this->EXIT_button->Click += gcnew System::EventHandler(this, &User_Admin::EXIT_Click);
			// 
			// Teacher_button
			// 
			this->Teacher_button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(2)), static_cast<System::Int32>(static_cast<System::Byte>(119)),
				static_cast<System::Int32>(static_cast<System::Byte>(189)));
			this->Teacher_button->ForeColor = System::Drawing::Color::White;
			this->Teacher_button->Location = System::Drawing::Point(373, 349);
			this->Teacher_button->Name = L"Teacher_button";
			this->Teacher_button->Size = System::Drawing::Size(287, 68);
			this->Teacher_button->TabIndex = 21;
			this->Teacher_button->Text = L"TEACHER";
			this->Teacher_button->UseVisualStyleBackColor = false;
			this->Teacher_button->Click += gcnew System::EventHandler(this, &User_Admin::Teacher_button_Click);
			// 
			// Student_button
			// 
			this->Student_button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(2)), static_cast<System::Int32>(static_cast<System::Byte>(119)),
				static_cast<System::Int32>(static_cast<System::Byte>(189)));
			this->Student_button->ForeColor = System::Drawing::Color::White;
			this->Student_button->Location = System::Drawing::Point(373, 244);
			this->Student_button->Name = L"Student_button";
			this->Student_button->Size = System::Drawing::Size(287, 68);
			this->Student_button->TabIndex = 20;
			this->Student_button->Text = L"STUDENT";
			this->Student_button->UseVisualStyleBackColor = false;
			this->Student_button->Click += gcnew System::EventHandler(this, &User_Admin::Student_button_Click);
			// 
			// TITLE
			// 
			this->TITLE->AutoSize = true;
			this->TITLE->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24));
			this->TITLE->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(63)),
				static_cast<System::Int32>(static_cast<System::Byte>(155)));
			this->TITLE->Location = System::Drawing::Point(303, 101);
			this->TITLE->Name = L"TITLE";
			this->TITLE->Size = System::Drawing::Size(453, 55);
			this->TITLE->TabIndex = 19;
			this->TITLE->Text = L"WELCOME ADMIN!";
			// 
			// Logo_WHO
			// 
			this->Logo_WHO->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(63)),
				static_cast<System::Int32>(static_cast<System::Byte>(155)));
			this->Logo_WHO->Controls->Add(this->label_paanel_WHO_2);
			this->Logo_WHO->Controls->Add(this->label_panel);
			this->Logo_WHO->Controls->Add(this->pictureBox1);
			this->Logo_WHO->Location = System::Drawing::Point(1, 0);
			this->Logo_WHO->Name = L"Logo_WHO";
			this->Logo_WHO->Size = System::Drawing::Size(235, 643);
			this->Logo_WHO->TabIndex = 18;
			// 
			// label_paanel_WHO_2
			// 
			this->label_paanel_WHO_2->AutoSize = true;
			this->label_paanel_WHO_2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18));
			this->label_paanel_WHO_2->ForeColor = System::Drawing::Color::White;
			this->label_paanel_WHO_2->Location = System::Drawing::Point(55, 429);
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
			this->label_panel->Location = System::Drawing::Point(51, 386);
			this->label_panel->Name = L"label_panel";
			this->label_panel->Size = System::Drawing::Size(119, 40);
			this->label_panel->TabIndex = 1;
			this->label_panel->Text = L"Admin";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(-2, 164);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(234, 205);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// User_Admin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(827, 642);
			this->Controls->Add(this->EXIT_button);
			this->Controls->Add(this->Teacher_button);
			this->Controls->Add(this->Student_button);
			this->Controls->Add(this->TITLE);
			this->Controls->Add(this->Logo_WHO);
			this->MaximumSize = System::Drawing::Size(849, 698);
			this->MinimumSize = System::Drawing::Size(849, 698);
			this->Name = L"User_Admin";
			this->Text = L"User_Admin";
			this->Logo_WHO->ResumeLayout(false);
			this->Logo_WHO->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Student_button_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();

		GetTitle(title);
		WriteToFile("STUDENT");

		if (ReturnTitle() == "ADD") {
			User_Student_Admin s;
			s.ShowDialog();
		}
		else if (ReturnTitle() == "EDIT") {
			Search_Student s;
			s.ShowDialog();
		}
		else if(ReturnTitle()=="REMOVE"){
		Remove_Student s;
			s.ShowDialog();
		}
	}
private: System::Void Teacher_button_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();

	WriteToFile("TEACHER");

	GetTitle(title);
	if (ReturnTitle() == "ADD") {
		User_Teacher_Admin t;
		t.ShowDialog();
	}
	else if (ReturnTitle() == "EDIT") {
		Search_Student t;
		t.ShowDialog();
	}
	else if (ReturnTitle() == "REMOVE") {
		Remove_Student s;
		s.ShowDialog();
	}

}
private: System::Void EXIT_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}
