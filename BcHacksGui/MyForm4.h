#pragma once

namespace BcHacksGui {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm4
	/// </summary>
	public ref class MyForm4 : public System::Windows::Forms::Form
	{
	public:
		MyForm4(void)
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
		~MyForm4()
		{
			if (components)
			{
				delete components;
			}
		}
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm4::typeid));
			this->backbutton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// backbutton
			// 
			this->backbutton->BackColor = System::Drawing::Color::Transparent;
			this->backbutton->FlatAppearance->BorderSize = 0;
			this->backbutton->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->backbutton->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->backbutton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->backbutton->Location = System::Drawing::Point(26, 31);
			this->backbutton->Name = L"backbutton";
			this->backbutton->Size = System::Drawing::Size(272, 311);
			this->backbutton->TabIndex = 10;
			this->backbutton->UseVisualStyleBackColor = false;
			this->backbutton->Click += gcnew System::EventHandler(this, &MyForm4::backbutton_Click);
			// 
			// MyForm4
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1064, 681);
			this->Controls->Add(this->backbutton);
			this->MaximumSize = System::Drawing::Size(1080, 720);
			this->MinimumSize = System::Drawing::Size(1080, 720);
			this->Name = L"MyForm4";
			this->Text = L"MyForm4";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void backbutton_Click(System::Object^ sender, System::EventArgs^ e) {

		this->Close();
	}
	};
}
