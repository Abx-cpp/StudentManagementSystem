#pragma once
#include "User_Admin.h"
namespace SMS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for FeaturesAdmin
	/// </summary>
	public ref class FeaturesAdmin : public System::Windows::Forms::Form
	{
	public:

		void WriteToFile(String^ data) {
			String^ filePath = "FeatureAdmin.txt";
			System::IO::StreamWriter^ sw = gcnew System::IO::StreamWriter(filePath, false); 
			sw->WriteLine(data);
			sw->Close();
		}
		
		FeaturesAdmin(void)
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
		~FeaturesAdmin()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ EXIT_button;
	private: System::Windows::Forms::Button^ REMOVE_button;
	protected:

	private: System::Windows::Forms::Button^ EDIT_button;

	private: System::Windows::Forms::Panel^ Logo_WHO;
	private: System::Windows::Forms::Label^ label_paanel_WHO_2;
	private: System::Windows::Forms::Label^ label_panel;
	private: System::Windows::Forms::PictureBox^ pictureBox1;

	private: System::Windows::Forms::Button^ ADDbutton;
	private: System::Windows::Forms::Label^ label1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FeaturesAdmin::typeid));
			this->EXIT_button = (gcnew System::Windows::Forms::Button());
			this->REMOVE_button = (gcnew System::Windows::Forms::Button());
			this->EDIT_button = (gcnew System::Windows::Forms::Button());
			this->Logo_WHO = (gcnew System::Windows::Forms::Panel());
			this->label_paanel_WHO_2 = (gcnew System::Windows::Forms::Label());
			this->label_panel = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->ADDbutton = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Logo_WHO->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// EXIT_button
			// 
			this->EXIT_button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(2)), static_cast<System::Int32>(static_cast<System::Byte>(119)),
				static_cast<System::Int32>(static_cast<System::Byte>(189)));
			this->EXIT_button->ForeColor = System::Drawing::Color::White;
			this->EXIT_button->Location = System::Drawing::Point(621, 541);
			this->EXIT_button->Name = L"EXIT_button";
			this->EXIT_button->Size = System::Drawing::Size(146, 68);
			this->EXIT_button->TabIndex = 22;
			this->EXIT_button->Text = L"EXIT";
			this->EXIT_button->UseVisualStyleBackColor = false;
			this->EXIT_button->Click += gcnew System::EventHandler(this, &FeaturesAdmin::EXIT_button_Click);
			// 
			// REMOVE_button
			// 
			this->REMOVE_button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(2)), static_cast<System::Int32>(static_cast<System::Byte>(119)),
				static_cast<System::Int32>(static_cast<System::Byte>(189)));
			this->REMOVE_button->ForeColor = System::Drawing::Color::White;
			this->REMOVE_button->Location = System::Drawing::Point(388, 394);
			this->REMOVE_button->Name = L"REMOVE_button";
			this->REMOVE_button->Size = System::Drawing::Size(287, 68);
			this->REMOVE_button->TabIndex = 21;
			this->REMOVE_button->Text = L"REMOVE";
			this->REMOVE_button->UseVisualStyleBackColor = false;
			this->REMOVE_button->Click += gcnew System::EventHandler(this, &FeaturesAdmin::REMOVE_button_Click);
			// 
			// EDIT_button
			// 
			this->EDIT_button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(2)), static_cast<System::Int32>(static_cast<System::Byte>(119)),
				static_cast<System::Int32>(static_cast<System::Byte>(189)));
			this->EDIT_button->ForeColor = System::Drawing::Color::White;
			this->EDIT_button->Location = System::Drawing::Point(388, 289);
			this->EDIT_button->Name = L"EDIT_button";
			this->EDIT_button->Size = System::Drawing::Size(287, 68);
			this->EDIT_button->TabIndex = 20;
			this->EDIT_button->Text = L"EDIT";
			this->EDIT_button->UseVisualStyleBackColor = false;
			this->EDIT_button->Click += gcnew System::EventHandler(this, &FeaturesAdmin::EDIT_button_Click);
			// 
			// Logo_WHO
			// 
			this->Logo_WHO->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(63)),
				static_cast<System::Int32>(static_cast<System::Byte>(155)));
			this->Logo_WHO->Controls->Add(this->label_paanel_WHO_2);
			this->Logo_WHO->Controls->Add(this->label_panel);
			this->Logo_WHO->Controls->Add(this->pictureBox1);
			this->Logo_WHO->Location = System::Drawing::Point(2, 0);
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
			// ADDbutton
			// 
			this->ADDbutton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(2)), static_cast<System::Int32>(static_cast<System::Byte>(119)),
				static_cast<System::Int32>(static_cast<System::Byte>(189)));
			this->ADDbutton->ForeColor = System::Drawing::Color::White;
			this->ADDbutton->Location = System::Drawing::Point(388, 197);
			this->ADDbutton->Name = L"ADDbutton";
			this->ADDbutton->Size = System::Drawing::Size(287, 68);
			this->ADDbutton->TabIndex = 23;
			this->ADDbutton->Text = L"ADD";
			this->ADDbutton->UseVisualStyleBackColor = false;
			this->ADDbutton->Click += gcnew System::EventHandler(this, &FeaturesAdmin::ADDbutton_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(63)),
				static_cast<System::Int32>(static_cast<System::Byte>(155)));
			this->label1->Location = System::Drawing::Point(302, 92);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(453, 55);
			this->label1->TabIndex = 24;
			this->label1->Text = L"WELCOME ADMIN!";
			// 
			// FeaturesAdmin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(827, 642);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->ADDbutton);
			this->Controls->Add(this->EXIT_button);
			this->Controls->Add(this->REMOVE_button);
			this->Controls->Add(this->EDIT_button);
			this->Controls->Add(this->Logo_WHO);
			this->MaximumSize = System::Drawing::Size(849, 698);
			this->MinimumSize = System::Drawing::Size(849, 698);
			this->Name = L"FeaturesAdmin";
			this->Text = L"FeaturesAdmin";
			this->Logo_WHO->ResumeLayout(false);
			this->Logo_WHO->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void ADDbutton_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();

	WriteToFile("ADD");
	User_Admin^ form = gcnew User_Admin();
	form->ShowDialog();
}
private: System::Void EDIT_button_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();

	WriteToFile("EDIT");
	User_Admin^ form = gcnew User_Admin();
	form->ShowDialog();
}
private: System::Void REMOVE_button_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();

	WriteToFile("REMOVE");
	User_Admin^ form = gcnew User_Admin();
	form->ShowDialog();
}
private: System::Void EXIT_button_Click(System::Object^ sender, System::EventArgs^ e) {
this->Close();
}
};
}
