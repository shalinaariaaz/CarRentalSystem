#pragma once

namespace SemesterProject1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for LoginForm
	/// </summary>
	public ref class LoginForm : public System::Windows::Forms::Form
	{
	public:
		LoginForm(void)
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
		~LoginForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBoxUser;
	private: System::Windows::Forms::TextBox^ textBoxPassword;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button1;
	protected:

	protected:


	protected:

	private:
		String^ username = "Shalina";
		String^ password = "Car";

		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBoxUser = (gcnew System::Windows::Forms::TextBox());
			this->textBoxPassword = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(267, 218);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(107, 24);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Username:";
			this->label1->Click += gcnew System::EventHandler(this, &LoginForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(267, 258);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(103, 24);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Password:";
			// 
			// textBoxUser
			// 
			this->textBoxUser->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxUser->Location = System::Drawing::Point(384, 216);
			this->textBoxUser->Name = L"textBoxUser";
			this->textBoxUser->Size = System::Drawing::Size(209, 32);
			this->textBoxUser->TabIndex = 2;
			// 
			// textBoxPassword
			// 
			this->textBoxPassword->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxPassword->Location = System::Drawing::Point(384, 256);
			this->textBoxPassword->Name = L"textBoxPassword";
			this->textBoxPassword->PasswordChar = '*';
			this->textBoxPassword->Size = System::Drawing::Size(209, 32);
			this->textBoxPassword->TabIndex = 3;
			this->textBoxPassword->TextChanged += gcnew System::EventHandler(this, &LoginForm::textBoxPassword_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(495, 307);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(98, 15);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Forget Password";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(384, 334);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(209, 34);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Login";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &LoginForm::button1_Click_1);
			// 
			// LoginForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->ClientSize = System::Drawing::Size(1017, 535);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBoxPassword);
			this->Controls->Add(this->textBoxUser);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"LoginForm";
			this->Text = L"LoginForm";
			this->Load += gcnew System::EventHandler(this, &LoginForm::LoginForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void LoginForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
		if (textBoxUser->Text == username && textBoxPassword->Text == password) 
		{
			MessageBox::Show("Login Succesfully");
		}
	}
	private: System::Void textBoxPassword_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
