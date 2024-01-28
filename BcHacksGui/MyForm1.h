#pragma once
#include "iostream"
#include "MyForm3.h"
#include "MyForm2.h"
#include "MyForm4.h"
#include "MyForm5.h"
#include "MyForm6.h"
#include "MyForm7.h"
#include "MyForm8.h"
#include "MyForm9.h"
//#include "Form2.h"

namespace BcHacksGui {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
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
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}


	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button1;


	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label6;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm1::typeid));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Courier New", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(677, 265);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(74, 33);
			this->textBox1->TabIndex = 2;
			this->textBox1->Text = L"0";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm1::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::SystemColors::Window;
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Courier New", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(677, 103);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(74, 33);
			this->textBox2->TabIndex = 3;
			this->textBox2->Text = L"0";
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(877, 74);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(236, 226);
			this->button1->TabIndex = 4;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click);
			// 
			// textBox3
			// 
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Courier New", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(677, 318);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(74, 33);
			this->textBox3->TabIndex = 7;
			this->textBox3->Text = L"0";
			this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox4
			// 
			this->textBox4->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Courier New", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->Location = System::Drawing::Point(677, 157);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(74, 33);
			this->textBox4->TabIndex = 8;
			this->textBox4->Text = L"0";
			this->textBox4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &MyForm1::textBox4_TextChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Courier New", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(671, 466);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(0, 31);
			this->label5->TabIndex = 9;
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label5->Click += gcnew System::EventHandler(this, &MyForm1::label5_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Transparent;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Location = System::Drawing::Point(877, 318);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(236, 227);
			this->button2->TabIndex = 10;
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm1::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Transparent;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button3->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Location = System::Drawing::Point(877, 559);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(236, 91);
			this->button3->TabIndex = 11;
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm1::button3_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Courier New", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(671, 546);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(0, 31);
			this->label6->TabIndex = 12;
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label6->Click += gcnew System::EventHandler(this, &MyForm1::label6_Click);
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1216, 698);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->DoubleBuffered = true;
			this->Name = L"MyForm1";
			this->Text = L"MyForm1";
			this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}



#pragma endregion
	private: System::Void MyForm1_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		double out_of_fuel = System::Convert::ToDouble(textBox1->Text) / System::Convert::ToDouble(textBox3->Text);
		double out_of_oxygen = System::Convert::ToDouble(textBox2->Text) / System::Convert::ToDouble(textBox4->Text);
		out_of_fuel = std::ceil(out_of_fuel * 100.0) / 100.0;;
		out_of_oxygen = std::ceil(out_of_oxygen * 100.0) / 100.0;
		label5->Text = System::Convert::ToString(out_of_fuel);
		label6->Text = System::Convert::ToString(out_of_oxygen);


	}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

	double out_of_fuel = System::Convert::ToDouble(textBox1->Text) / System::Convert::ToDouble(textBox3->Text);
	double out_of_oxygen = System::Convert::ToDouble(textBox2->Text) / System::Convert::ToDouble(textBox4->Text);

	if (System::Convert::ToDouble(textBox1->Text) <= 50 && System::Convert::ToDouble(textBox2->Text) > 50) {

		if (out_of_fuel > out_of_oxygen) {

			// opens a form with 3 planes of group A

			
			MyForm2^ f2 = gcnew MyForm2();
			f2->ShowDialog();


		}
		else if (out_of_fuel < out_of_oxygen) {

			// opens a form with 3 planes of group B
			MyForm3^ f3 = gcnew MyForm3();
			f3->ShowDialog();

			
		}
		else if (out_of_fuel = out_of_oxygen) {

			// opens a form with 3 planes of group C
			MyForm4^ f4 = gcnew MyForm4();
			f4->ShowDialog();

		}

	}
	else if (System::Convert::ToDouble(textBox1->Text) > 50 && System::Convert::ToDouble(textBox2->Text) <= 50) {

		if (out_of_fuel > out_of_oxygen) {

			// opens a form with 3 planes of group D


			MyForm4^ f4 = gcnew MyForm4();
			f4->ShowDialog();


		}
		else if (out_of_fuel < out_of_oxygen) {

			// opens a form with 3 planes of group E
			MyForm5^ f5 = gcnew MyForm5();
			f5->ShowDialog();


		}
		else if (out_of_fuel = out_of_oxygen) {

			// opens a form with 3 planes of group F
			MyForm6^ f6 = gcnew MyForm6();
			f6->ShowDialog();

		}




	}
	else if (System::Convert::ToDouble(textBox1->Text) > 50 && System::Convert::ToDouble(textBox2->Text) > 50) {

		if (out_of_fuel > out_of_oxygen) {

			// opens a form with 3 planes of group G


			MyForm7^ f7 = gcnew MyForm7();
			f7->ShowDialog();


		}
		else if (out_of_fuel < out_of_oxygen) {

			// opens a form with 3 planes of group H
			MyForm8^ f8 = gcnew MyForm8();
			f8->ShowDialog();


		}
		else if (out_of_fuel = out_of_oxygen) {

			// opens a form with 3 planes of group I
			MyForm9^ f9 = gcnew MyForm9();
			f9->ShowDialog();

		}


	}
	else if (System::Convert::ToDouble(textBox1->Text) < 50 && System::Convert::ToDouble(textBox2->Text) < 50) {

		//Display error message

		if (MessageBox::Show("CALL FOR HELP?", "Not enough oxygen or fuel to reach nearest planet", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
			MessageBox::Show("Calling for Help");
		}
		else {
			MessageBox::Show("Ok", "Our Condolences");
		}

	}



		
		

}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {

	this->Close();

}
};
}
