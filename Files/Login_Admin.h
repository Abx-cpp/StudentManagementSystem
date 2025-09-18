#pragma once
#include "FeaturesAdmin.h"
#include <fstream>
#include <msclr\marshal_cppstd.h>

namespace SMS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for Login_Admin
	/// </summary>
	public ref class Login_Admin : public System::Windows::Forms::Form
	{
	public:
		Login_Admin(void)
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
		~Login_Admin()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	protected:
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Button^ EXIT_button;

	private: System::Windows::Forms::TextBox^ password_textBox;
	private: System::Windows::Forms::Label^ Password;
	private: System::Windows::Forms::Label^ Username;
	private: System::Windows::Forms::TextBox^ username_textBox;
	private: System::Windows::Forms::Panel^ Logo_WHO;
	private: System::Windows::Forms::Label^ label_paanel_WHO_2;
	private: System::Windows::Forms::Label^ label_panel_WHO_1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ LOGINbutton;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Login_Admin::typeid));
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->EXIT_button = (gcnew System::Windows::Forms::Button());
			this->password_textBox = (gcnew System::Windows::Forms::TextBox());
			this->Password = (gcnew System::Windows::Forms::Label());
			this->Username = (gcnew System::Windows::Forms::Label());
			this->username_textBox = (gcnew System::Windows::Forms::TextBox());
			this->Logo_WHO = (gcnew System::Windows::Forms::Panel());
			this->label_paanel_WHO_2 = (gcnew System::Windows::Forms::Label());
			this->label_panel_WHO_1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->LOGINbutton = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->Logo_WHO->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(215, 223);
			this->pictureBox3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(72, 52);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 16;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(216, 157);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(72, 52);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 15;
			this->pictureBox2->TabStop = false;
			// 
			// EXIT_button
			// 
			this->EXIT_button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(2)), static_cast<System::Int32>(static_cast<System::Byte>(119)),
				static_cast<System::Int32>(static_cast<System::Byte>(189)));
			this->EXIT_button->ForeColor = System::Drawing::Color::White;
			this->EXIT_button->Location = System::Drawing::Point(372, 385);
			this->EXIT_button->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->EXIT_button->Name = L"EXIT_button";
			this->EXIT_button->Size = System::Drawing::Size(130, 54);
			this->EXIT_button->TabIndex = 14;
			this->EXIT_button->Text = L"EXIT";
			this->EXIT_button->UseVisualStyleBackColor = false;
			this->EXIT_button->Click += gcnew System::EventHandler(this, &Login_Admin::EXIT_Click);
			// 
			// password_textBox
			// 
			this->password_textBox->Location = System::Drawing::Point(435, 244);
			this->password_textBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->password_textBox->Name = L"password_textBox";
			this->password_textBox->PasswordChar = '*';
			this->password_textBox->Size = System::Drawing::Size(231, 22);
			this->password_textBox->TabIndex = 13;
			// 
			// Password
			// 
			this->Password->AutoSize = true;
			this->Password->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->Password->Location = System::Drawing::Point(292, 242);
			this->Password->Name = L"Password";
			this->Password->Size = System::Drawing::Size(108, 26);
			this->Password->TabIndex = 12;
			this->Password->Text = L"Password";
			// 
			// Username
			// 
			this->Username->AutoSize = true;
			this->Username->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->Username->Location = System::Drawing::Point(293, 172);
			this->Username->Name = L"Username";
			this->Username->Size = System::Drawing::Size(113, 26);
			this->Username->TabIndex = 11;
			this->Username->Text = L"Username";
			// 
			// username_textBox
			// 
			this->username_textBox->Location = System::Drawing::Point(435, 176);
			this->username_textBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->username_textBox->Name = L"username_textBox";
			this->username_textBox->Size = System::Drawing::Size(231, 22);
			this->username_textBox->TabIndex = 10;
			// 
			// Logo_WHO
			// 
			this->Logo_WHO->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(63)),
				static_cast<System::Int32>(static_cast<System::Byte>(155)));
			this->Logo_WHO->Controls->Add(this->label_paanel_WHO_2);
			this->Logo_WHO->Controls->Add(this->label_panel_WHO_1);
			this->Logo_WHO->Controls->Add(this->pictureBox1);
			this->Logo_WHO->Location = System::Drawing::Point(0, 0);
			this->Logo_WHO->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Logo_WHO->Name = L"Logo_WHO";
			this->Logo_WHO->Size = System::Drawing::Size(209, 479);
			this->Logo_WHO->TabIndex = 9;
			// 
			// label_paanel_WHO_2
			// 
			this->label_paanel_WHO_2->AutoSize = true;
			this->label_paanel_WHO_2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18));
			this->label_paanel_WHO_2->ForeColor = System::Drawing::Color::White;
			this->label_paanel_WHO_2->Location = System::Drawing::Point(50, 321);
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
			this->label_panel_WHO_1->Location = System::Drawing::Point(48, 286);
			this->label_panel_WHO_1->Name = L"label_panel_WHO_1";
			this->label_panel_WHO_1->Size = System::Drawing::Size(100, 36);
			this->label_panel_WHO_1->TabIndex = 1;
			this->label_panel_WHO_1->Text = L"Admin";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(11, 111);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(188, 164);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// LOGINbutton
			// 
			this->LOGINbutton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(2)), static_cast<System::Int32>(static_cast<System::Byte>(119)),
				static_cast<System::Int32>(static_cast<System::Byte>(189)));
			this->LOGINbutton->ForeColor = System::Drawing::Color::White;
			this->LOGINbutton->Location = System::Drawing::Point(534, 282);
			this->LOGINbutton->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->LOGINbutton->Name = L"LOGINbutton";
			this->LOGINbutton->Size = System::Drawing::Size(130, 42);
			this->LOGINbutton->TabIndex = 17;
			this->LOGINbutton->Text = L"LOGIN";
			this->LOGINbutton->UseVisualStyleBackColor = false;
			this->LOGINbutton->Click += gcnew System::EventHandler(this, &Login_Admin::LOGINbutton_Click);
			// 
			// Login_Admin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(689, 486);
			this->Controls->Add(this->LOGINbutton);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->EXIT_button);
			this->Controls->Add(this->password_textBox);
			this->Controls->Add(this->Password);
			this->Controls->Add(this->Username);
			this->Controls->Add(this->username_textBox);
			this->Controls->Add(this->Logo_WHO);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->MaximumSize = System::Drawing::Size(707, 533);
			this->MinimumSize = System::Drawing::Size(707, 533);
			this->Name = L"Login_Admin";
			this->Text = L"Login_Admin";
			this->Load += gcnew System::EventHandler(this, &Login_Admin::Login_Admin_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
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
	private: System::Void LOGINbutton_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			// Connection string should be moved to a configuration file
			String^ connectionString = "Data Source=LAPTOP-7E9PK6M6\\SQLEXPRESS;Initial Catalog=Flex;Integrated Security=True;";
			String^ username = username_textBox->Text;
			String^ password = password_textBox->Text;

			if (String::IsNullOrEmpty(username) || String::IsNullOrEmpty(password)) {
				MessageBox::Show("Username and password cannot be empty");
				return;
			}

			String^ query = "SELECT COUNT(1) FROM Users WHERE Username = @username AND Password = @password AND Role = 'Admin'";

			try {
				SqlConnection^ connection = gcnew SqlConnection(connectionString);
				SqlCommand^ command = gcnew SqlCommand(query, connection);

				command->Parameters->AddWithValue("@username", username);
				command->Parameters->AddWithValue("@password", password);

				connection->Open();

				int result = (int)command->ExecuteScalar();
				connection->Close();

				if (result == 1) {
					std::string t = msclr::interop::marshal_as<std::string>(username_textBox->Text);
					std::string n;
					n += t[1];
					n += t[2];
					n += "L";
					n += "-";
					for (int i = 3; i < 7; ++i) {
						n += t[i];
					}

					this->Hide();
					FeaturesAdmin^ stHome = gcnew FeaturesAdmin();
					stHome->Show();
				}
				else {
					MessageBox::Show("Invalid username or password. Please try again.");
				}
			}
			catch (SqlException^ ex) {
				MessageBox::Show("Database error: " + ex->Message);
			}
		}
		catch (Exception^ ex) {
			MessageBox::Show("An error occurred: " + ex->Message);
		}
	}
private: System::Void Login_Admin_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
