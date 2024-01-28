#pragma once



namespace BcHacksGui {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm3
	/// </summary>
	public ref class MyForm3 : public System::Windows::Forms::Form
	{
	public:
		MyForm3(void)
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
		~MyForm3()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ PuccioName;
	private: System::Windows::Forms::Label^ puccio1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ backbutton;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm3::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->PuccioName = (gcnew System::Windows::Forms::Label());
			this->puccio1 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->backbutton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Transparent;
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel1->Location = System::Drawing::Point(338, 117);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(200, 200);
			this->panel1->TabIndex = 0;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm3::panel1_Paint);
			// 
			// PuccioName
			// 
			this->PuccioName->AutoSize = true;
			this->PuccioName->BackColor = System::Drawing::Color::Transparent;
			this->PuccioName->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->PuccioName->Font = (gcnew System::Drawing::Font(L"Courier New", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PuccioName->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->PuccioName->Location = System::Drawing::Point(368, 66);
			this->PuccioName->Name = L"PuccioName";
			this->PuccioName->Size = System::Drawing::Size(129, 36);
			this->PuccioName->TabIndex = 1;
			this->PuccioName->Text = L"Puccio";
			this->PuccioName->Click += gcnew System::EventHandler(this, &MyForm3::label1_Click);
			// 
			// puccio1
			// 
			this->puccio1->AutoSize = true;
			this->puccio1->BackColor = System::Drawing::Color::Transparent;
			this->puccio1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->puccio1->Font = (gcnew System::Drawing::Font(L"Courier New", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->puccio1->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->puccio1->Location = System::Drawing::Point(544, 117);
			this->puccio1->Name = L"puccio1";
			this->puccio1->Size = System::Drawing::Size(477, 30);
			this->puccio1->TabIndex = 2;
			this->puccio1->Text = L"Geography: Flat, salt fields,";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label1->Font = (gcnew System::Drawing::Font(L"Courier New", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label1->Location = System::Drawing::Point(639, 147);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(237, 30);
			this->label1->TabIndex = 3;
			this->label1->Text = L"sparce forests";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label2->Font = (gcnew System::Drawing::Font(L"Courier New", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label2->Location = System::Drawing::Point(544, 198);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(269, 30);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Population: 300k";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label3->Font = (gcnew System::Drawing::Font(L"Courier New", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label3->Location = System::Drawing::Point(544, 250);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(237, 30);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Radius: 2900km";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point(26, 371);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(1008, 95);
			this->button1->TabIndex = 6;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm3::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Transparent;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->ForeColor = System::Drawing::Color::Transparent;
			this->button2->Location = System::Drawing::Point(26, 462);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(1008, 95);
			this->button2->TabIndex = 7;
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm3::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Transparent;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button3->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Location = System::Drawing::Point(12, 554);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(1008, 98);
			this->button3->TabIndex = 8;
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm3::button3_Click);
			// 
			// backbutton
			// 
			this->backbutton->BackColor = System::Drawing::Color::Transparent;
			this->backbutton->FlatAppearance->BorderSize = 0;
			this->backbutton->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->backbutton->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->backbutton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->backbutton->Location = System::Drawing::Point(26, 29);
			this->backbutton->Name = L"backbutton";
			this->backbutton->Size = System::Drawing::Size(272, 311);
			this->backbutton->TabIndex = 9;
			this->backbutton->UseVisualStyleBackColor = false;
			this->backbutton->Click += gcnew System::EventHandler(this, &MyForm3::backbutton_Click);
			// 
			// MyForm3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1064, 681);
			this->Controls->Add(this->backbutton);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->puccio1);
			this->Controls->Add(this->PuccioName);
			this->Controls->Add(this->panel1);
			this->DoubleBuffered = true;
			this->MaximumSize = System::Drawing::Size(1080, 720);
			this->MinimumSize = System::Drawing::Size(1080, 720);
			this->Name = L"MyForm3";
			this->Text = L"MyForm3";
			this->Load += gcnew System::EventHandler(this, &MyForm3::MyForm3_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm3_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		PuccioName->Text = "Puccio";
		puccio1->Text = "Geography: Flat, salt fields,";
		label1->Text = "sparse forests";
		label2->Text = "Population: 300k";
		label3->Text = "Radius: 2900km";

	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

	PuccioName->Text = "Sunbreaker";
	puccio1->Text = "Amenities: Oxygen";
	label1->Text = "Population: 230k";
	label2->Text = "Race: Looxmaxxers";
	label3->Text = "Radius: 4.3k";



}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {


	PuccioName->Text = "Venespa3312";
	puccio1->Text = "Amenities: Fuel";
	label1->Text = "Population: 93.4k";
	label2->Text = "Race: Humans";
	label3->Text = "Radius: 3.2k";

	



}
private: System::Void backbutton_Click(System::Object^ sender, System::EventArgs^ e) {

	this->Close();

	


}
};
}
