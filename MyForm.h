#pragma once

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	private: System::Windows::Forms::Label^  lbldisplay;
	protected:
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::Button^  button13;
	private: System::Windows::Forms::Button^  button14;
	private: System::Windows::Forms::Button^  button15;
	private: System::Windows::Forms::Button^  button17;


	protected:

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
			this->lbldisplay = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// lbldisplay
			// 
			this->lbldisplay->BackColor = System::Drawing::SystemColors::Info;
			this->lbldisplay->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbldisplay->Location = System::Drawing::Point(13, 9);
			this->lbldisplay->Name = L"lbldisplay";
			this->lbldisplay->Size = System::Drawing::Size(392, 75);
			this->lbldisplay->TabIndex = 1;
			this->lbldisplay->Text = L"0";
			this->lbldisplay->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(12, 120);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(95, 60);
			this->button1->TabIndex = 0;
			this->button1->Text = L"1";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(113, 120);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(95, 60);
			this->button2->TabIndex = 0;
			this->button2->Text = L"2";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(214, 120);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(95, 60);
			this->button3->TabIndex = 0;
			this->button3->Text = L"3";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(315, 120);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(95, 60);
			this->button4->TabIndex = 0;
			this->button4->Text = L"4";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(12, 183);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(95, 60);
			this->button5->TabIndex = 0;
			this->button5->Text = L"5";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(113, 186);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(95, 60);
			this->button6->TabIndex = 0;
			this->button6->Text = L"6";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(214, 183);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(95, 60);
			this->button7->TabIndex = 0;
			this->button7->Text = L"7";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(315, 183);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(95, 60);
			this->button8->TabIndex = 0;
			this->button8->Text = L"8";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->Location = System::Drawing::Point(12, 246);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(95, 60);
			this->button9->TabIndex = 0;
			this->button9->Text = L"9";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->Location = System::Drawing::Point(113, 246);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(95, 60);
			this->button10->TabIndex = 0;
			this->button10->Text = L"0";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->Location = System::Drawing::Point(214, 249);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(95, 60);
			this->button11->TabIndex = 0;
			this->button11->Text = L"/";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button12->Location = System::Drawing::Point(315, 249);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(95, 60);
			this->button12->TabIndex = 0;
			this->button12->Text = L"-";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button13->Location = System::Drawing::Point(12, 309);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(95, 60);
			this->button13->TabIndex = 0;
			this->button13->Text = L"X";
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button14->Location = System::Drawing::Point(113, 312);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(95, 60);
			this->button14->TabIndex = 0;
			this->button14->Text = L"+";
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button15->Location = System::Drawing::Point(214, 315);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(95, 60);
			this->button15->TabIndex = 0;
			this->button15->Text = L"C";
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click);
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button17->Location = System::Drawing::Point(315, 315);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(95, 60);
			this->button17->TabIndex = 0;
			this->button17->Text = L"=";
			this->button17->UseVisualStyleBackColor = false;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::button17_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(417, 427);
			this->Controls->Add(this->lbldisplay);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);

		}
		int erstnummer,zweitenummer,ergebnis;
		char operation;

#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		if (lbldisplay->Text == "0") {
			lbldisplay->Text = "1";
		}
		else {
			lbldisplay->Text = Convert::ToInt32(lbldisplay->Text) + "1";
		}

	
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		if (lbldisplay->Text == "0") {
			lbldisplay->Text = "2";
		}
		else {
			lbldisplay->Text = Convert::ToInt32(lbldisplay->Text) + "2";
		}

	}

	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		if (lbldisplay->Text == "0") {
			lbldisplay->Text = "3";
		}
		else {
			lbldisplay->Text = Convert::ToInt32(lbldisplay->Text) + "3";
		}

	}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	if (lbldisplay->Text == "0") {
		lbldisplay->Text = "4";
	}
	else {
		lbldisplay->Text = Convert::ToInt32(lbldisplay->Text) + "4";
	}
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	if (lbldisplay->Text == "0") {
		lbldisplay->Text = "5";
	}
	else {
		lbldisplay->Text = Convert::ToInt32(lbldisplay->Text) + "5";
	}
}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
	if (lbldisplay->Text == "0") {
		lbldisplay->Text = "6";
	}
	else {
		lbldisplay->Text = Convert::ToInt32(lbldisplay->Text) + "6";
	}
}
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
	if (lbldisplay->Text == "0") {
		lbldisplay->Text = "7";
	}
	else {
		lbldisplay->Text = Convert::ToInt32(lbldisplay->Text) + "7";
	}
}
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
	if (lbldisplay->Text == "0") {
		lbldisplay->Text = "8";
	}
	else {
		lbldisplay->Text = Convert::ToInt32(lbldisplay->Text) + "8";
	}
}
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
	if (lbldisplay->Text == "0") {
		lbldisplay->Text = "9";
	}
	else {
		lbldisplay->Text = Convert::ToInt32(lbldisplay->Text) + "9";
	}
}
private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
	if (lbldisplay->Text == "0") {
		lbldisplay->Text = "0";
	}
	else {
		lbldisplay->Text = Convert::ToInt32(lbldisplay->Text) + "0";
	}
}
private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
	erstnummer = Convert::ToInt32(lbldisplay->Text);
	lbldisplay->Text = "0";
	operation = '/';
}
private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e) {
	erstnummer = Convert::ToInt32(lbldisplay->Text);
	lbldisplay->Text = "0";
	operation = '-';
}
private: System::Void button13_Click(System::Object^  sender, System::EventArgs^  e) {
	erstnummer = Convert::ToInt32(lbldisplay->Text);
	lbldisplay->Text = "0";
	operation = '*';
}
private: System::Void button14_Click(System::Object^  sender, System::EventArgs^  e) {
	erstnummer = Convert::ToInt32(lbldisplay->Text);
	lbldisplay->Text = "0";
	operation = '+';
}
private: System::Void button15_Click(System::Object^  sender, System::EventArgs^  e) {
	lbldisplay->Text = "";
	lbldisplay->Text = "0";
}
private: System::Void button17_Click(System::Object^  sender, System::EventArgs^  e) {
	zweitenummer = Convert::ToInt32(lbldisplay->Text);
	switch (operation)
	{
	case '+':
		ergebnis = erstnummer + zweitenummer;
		lbldisplay->Text = System::Convert::ToString(ergebnis);
		break;
	case '-':
		ergebnis = erstnummer - zweitenummer;
		lbldisplay->Text = System::Convert::ToString(ergebnis);
		break;
	case '*':
		ergebnis = erstnummer * zweitenummer;
		lbldisplay->Text = System::Convert::ToString(ergebnis);
		break;
	case '/':
		ergebnis = erstnummer / zweitenummer;
		lbldisplay->Text = System::Convert::ToString(ergebnis);
		break;
	default:
		break;
	}
}
};
}
