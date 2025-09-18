#ifndef WHO_H
#define WHO_H
#pragma once
#include "Login_Student.h"
#include "Login_Teacher.h"
#include "Login_Admin.h"
namespace SMS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for WHO
	/// </summary>
	public ref class WHO : public System::Windows::Forms::Form
	{
	public:
		WHO(void)
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
		~WHO()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ Logo_WHO;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label_panel_WHO_1;
	private: System::Windows::Forms::Label^ label_paanel_WHO_2;
	private: System::Windows::Forms::Label^ TITLE;
	private: System::Windows::Forms::Button^ STUDENT_button;
	private: System::Windows::Forms::Button^ Teacher_button;
	private: System::Windows::Forms::Button^ ADMIN_button;
	private: System::Windows::Forms::Button^ EXIT_BUTTON;







	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(WHO::typeid));
			this->Logo_WHO = (gcnew System::Windows::Forms::Panel());
			this->label_paanel_WHO_2 = (gcnew System::Windows::Forms::Label());
			this->label_panel_WHO_1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->TITLE = (gcnew System::Windows::Forms::Label());
			this->STUDENT_button = (gcnew System::Windows::Forms::Button());
			this->Teacher_button = (gcnew System::Windows::Forms::Button());
			this->ADMIN_button = (gcnew System::Windows::Forms::Button());
			this->EXIT_BUTTON = (gcnew System::Windows::Forms::Button());
			this->Logo_WHO->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// Logo_WHO
			// 
			this->Logo_WHO->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(63)),
				static_cast<System::Int32>(static_cast<System::Byte>(155)));
			this->Logo_WHO->Controls->Add(this->label_paanel_WHO_2);
			this->Logo_WHO->Controls->Add(this->label_panel_WHO_1);
			this->Logo_WHO->Controls->Add(this->pictureBox1);
			this->Logo_WHO->Location = System::Drawing::Point(0, 0);
			this->Logo_WHO->Name = L"Logo_WHO";
			this->Logo_WHO->Size = System::Drawing::Size(235, 643);
			this->Logo_WHO->TabIndex = 0;
			this->Logo_WHO->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &WHO::Logo_WHO_Paint);
			// 
			// label_paanel_WHO_2
			// 
			this->label_paanel_WHO_2->AutoSize = true;
			this->label_paanel_WHO_2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18));
			this->label_paanel_WHO_2->ForeColor = System::Drawing::Color::White;
			this->label_paanel_WHO_2->Location = System::Drawing::Point(56, 429);
			this->label_paanel_WHO_2->Name = L"label_paanel_WHO_2";
			this->label_paanel_WHO_2->Size = System::Drawing::Size(109, 40);
			this->label_paanel_WHO_2->TabIndex = 2;
			this->label_paanel_WHO_2->Text = L"Wave";
			// 
			// label_panel_WHO_1
			// 
			this->label_panel_WHO_1->AutoSize = true;
			this->label_panel_WHO_1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18));
			this->label_panel_WHO_1->ForeColor = System::Drawing::Color::White;
			this->label_panel_WHO_1->Location = System::Drawing::Point(26, 389);
			this->label_panel_WHO_1->Name = L"label_panel_WHO_1";
			this->label_panel_WHO_1->Size = System::Drawing::Size(175, 40);
			this->label_panel_WHO_1->TabIndex = 1;
			this->label_panel_WHO_1->Text = L"Academic";
			this->label_panel_WHO_1->Click += gcnew System::EventHandler(this, &WHO::label1_Click);
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
			// TITLE
			// 
			this->TITLE->AutoSize = true;
			this->TITLE->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 32));
			this->TITLE->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(63)),
				static_cast<System::Int32>(static_cast<System::Byte>(155)));
			this->TITLE->Location = System::Drawing::Point(262, 65);
			this->TITLE->Name = L"TITLE";
			this->TITLE->Size = System::Drawing::Size(529, 73);
			this->TITLE->TabIndex = 1;
			this->TITLE->Text = L"WHO ARE YOU\?";
			// 
			// STUDENT_button
			// 
			this->STUDENT_button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(2)), static_cast<System::Int32>(static_cast<System::Byte>(119)),
				static_cast<System::Int32>(static_cast<System::Byte>(189)));
			this->STUDENT_button->ForeColor = System::Drawing::Color::White;
			this->STUDENT_button->Location = System::Drawing::Point(372, 213);
			this->STUDENT_button->Name = L"STUDENT_button";
			this->STUDENT_button->Size = System::Drawing::Size(287, 68);
			this->STUDENT_button->TabIndex = 2;
			this->STUDENT_button->Text = L"STUDENT";
			this->STUDENT_button->UseVisualStyleBackColor = false;
			this->STUDENT_button->Click += gcnew System::EventHandler(this, &WHO::STUDENT_Click);
			// 
			// Teacher_button
			// 
			this->Teacher_button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(2)), static_cast<System::Int32>(static_cast<System::Byte>(119)),
				static_cast<System::Int32>(static_cast<System::Byte>(189)));
			this->Teacher_button->ForeColor = System::Drawing::Color::White;
			this->Teacher_button->Location = System::Drawing::Point(372, 318);
			this->Teacher_button->Name = L"Teacher_button";
			this->Teacher_button->Size = System::Drawing::Size(287, 68);
			this->Teacher_button->TabIndex = 3;
			this->Teacher_button->Text = L"TEACHER";
			this->Teacher_button->UseVisualStyleBackColor = false;
			this->Teacher_button->Click += gcnew System::EventHandler(this, &WHO::Teacher_Click);
			// 
			// ADMIN_button
			// 
			this->ADMIN_button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(2)), static_cast<System::Int32>(static_cast<System::Byte>(119)),
				static_cast<System::Int32>(static_cast<System::Byte>(189)));
			this->ADMIN_button->ForeColor = System::Drawing::Color::White;
			this->ADMIN_button->Location = System::Drawing::Point(373, 429);
			this->ADMIN_button->Name = L"ADMIN_button";
			this->ADMIN_button->Size = System::Drawing::Size(287, 68);
			this->ADMIN_button->TabIndex = 4;
			this->ADMIN_button->Text = L"ADMIN";
			this->ADMIN_button->UseVisualStyleBackColor = false;
			this->ADMIN_button->Click += gcnew System::EventHandler(this, &WHO::ADMIN_Click);
			// 
			// EXIT_BUTTON
			// 
			this->EXIT_BUTTON->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(2)), static_cast<System::Int32>(static_cast<System::Byte>(119)),
				static_cast<System::Int32>(static_cast<System::Byte>(189)));
			this->EXIT_BUTTON->ForeColor = System::Drawing::Color::White;
			this->EXIT_BUTTON->Location = System::Drawing::Point(638, 536);
			this->EXIT_BUTTON->Name = L"EXIT_BUTTON";
			this->EXIT_BUTTON->Size = System::Drawing::Size(146, 68);
			this->EXIT_BUTTON->TabIndex = 5;
			this->EXIT_BUTTON->Text = L"EXIT";
			this->EXIT_BUTTON->UseVisualStyleBackColor = false;
			this->EXIT_BUTTON->Click += gcnew System::EventHandler(this, &WHO::EXIT_Click);
			// 
			// WHO
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(827, 642);
			this->Controls->Add(this->EXIT_BUTTON);
			this->Controls->Add(this->ADMIN_button);
			this->Controls->Add(this->Teacher_button);
			this->Controls->Add(this->STUDENT_button);
			this->Controls->Add(this->TITLE);
			this->Controls->Add(this->Logo_WHO);
			this->MaximumSize = System::Drawing::Size(849, 698);
			this->MinimumSize = System::Drawing::Size(849, 698);
			this->Name = L"WHO";
			this->Text = L"WHO";
			this->Load += gcnew System::EventHandler(this, &WHO::WHO_Load);
			this->Logo_WHO->ResumeLayout(false);
			this->Logo_WHO->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void WHO_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Logo_WHO_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {

	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void STUDENT_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		Login_Student s;
		s.ShowDialog();

	}
private: System::Void Teacher_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	Login_Teacher t;
	t.ShowDialog();

}
private: System::Void ADMIN_Click(System::Object^ sender, System::EventArgs^ e) {

	this->Hide();
	Login_Admin a;
	a.ShowDialog();

}
private: System::Void EXIT_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}
#endif // !WHO_H