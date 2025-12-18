#pragma once
#include <fstream>
#include <string>
#include <msclr/marshal_cppstd.h>
#include "User.h"
#include "Wrapper.h"
#include "UserExceptionr.h"

namespace les18 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace msclr::interop;
	using namespace System::IO;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	

	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::RichTextBox^ richTextBox2;
	private: System::Windows::Forms::RichTextBox^ richTextBox3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;



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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox3 = (gcnew System::Windows::Forms::RichTextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(105, 243);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(181, 66);
			this->button1->TabIndex = 2;
			this->button1->Text = L"SUMBIT";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(174, 31);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(181, 27);
			this->richTextBox1->TabIndex = 5;
			this->richTextBox1->Text = L"";
			// 
			// richTextBox2
			// 
			this->richTextBox2->Location = System::Drawing::Point(174, 91);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->Size = System::Drawing::Size(181, 27);
			this->richTextBox2->TabIndex = 6;
			this->richTextBox2->Text = L"";
			this->richTextBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::richTextBox2_TextChanged);
			// 
			// richTextBox3
			// 
			this->richTextBox3->Location = System::Drawing::Point(174, 167);
			this->richTextBox3->Name = L"richTextBox3";
			this->richTextBox3->Size = System::Drawing::Size(181, 27);
			this->richTextBox3->TabIndex = 7;
			this->richTextBox3->Text = L"";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.8F));
			this->label1->Location = System::Drawing::Point(49, 29);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(81, 29);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Name";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.8F));
			this->label2->Location = System::Drawing::Point(23, 89);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(129, 29);
			this->label2->TabIndex = 9;
			this->label2->Text = L"LastName";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.8F));
			this->label3->Location = System::Drawing::Point(59, 165);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(58, 29);
			this->label3->TabIndex = 10;
			this->label3->Text = L"Age";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(409, 365);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->richTextBox3);
			this->Controls->Add(this->richTextBox2);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"x";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		/*std::string username = marshal_as<std::string>(textBox1->Text);
		std::string lastname = marshal_as<std::string>(textBox2->Text);
		std::ofstream file("userData.txt", std::ios::app);
		if (file.is_open()) {
			if (textBox1->Text != "" || textBox2->Text != "") {
				file << "Name - " << username << std::endl;
				file << "LastName - " << lastname << std::endl;
				file.close();
			}
			else {
				MessageBox::Show("Lines is empty!");
			}
		}
		else {
			MessageBox::Show("File is don't open!");
		}
		textBox1->Clear();
		textBox2->Clear();*/
		try {
			std::string filename = "userData.txt";
			String^ name = richTextBox1->Text;
			String^ lastName = richTextBox2->Text;
			int age = Convert::ToInt32(richTextBox3->Text);
			WrappedUser wrappedUser;
			if (name == "" || lastName == "") {
				throw gcnew UserException("Name or LastName is empty!");
				return;
			}
			if (age < 0 || age > 150) {
				throw gcnew UserException("Age is incorrect!");
				return;
			}
			wrappedUser.saveToFile(filename, marshal_as<std::string>(name), marshal_as<std::string>(lastName), age);
			richTextBox1->Clear();
			richTextBox2->Clear();
			richTextBox3->Clear();
		}
		catch ( UserException^ ex ) {
			MessageBox::Show(ex->Message);
		}
		/*std::string data = textBox1->Text + textBox2->Text;
		File::AppendAllText("datauserfile.txt", data);*/
	}
	private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void richTextBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
