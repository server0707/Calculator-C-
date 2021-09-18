#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace Calculator {

	/// <summary>
	/// —водка дл€ Oddiy
	/// </summary>
	public ref class Oddiy : public System::Windows::Forms::UserControl
	{
	public:
		Oddiy(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~Oddiy()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  textBox1;
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
	private: System::Windows::Forms::Button^  button16;
	private: System::Windows::Forms::Button^  button17;
	private: System::Windows::Forms::Button^  button18;
	private: System::Windows::Forms::Button^  button19;
	private: System::Windows::Forms::Button^  button20;


	private: System::Windows::Forms::Button^  button23;

	private: System::Windows::Forms::Button^  button25;
	private: System::Windows::Forms::Button^  button22;
	private: System::Windows::Forms::Button^  button21;
	private: System::Windows::Forms::Button^  button26;
	private: System::Windows::Forms::Button^  button27;
	private: System::Windows::Forms::Button^  button28;
	private: System::Windows::Forms::Button^  button29;
	private: System::Windows::Forms::Label^  label1;

	private:
		/// <summary>
		/// “ребуетс€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ќб€зательный метод дл€ поддержки конструктора - не измен€йте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
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
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(3, 14);
			this->textBox1->MaxLength = 12;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(239, 40);
			this->textBox1->TabIndex = 0;
			this->textBox1->Text = L"0";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			this->button1->Location = System::Drawing::Point(3, 60);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(43, 39);
			this->button1->TabIndex = 1;
			this->button1->Text = L"MC";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Oddiy::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(52, 60);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(43, 39);
			this->button2->TabIndex = 2;
			this->button2->Text = L"MR";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Oddiy::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(101, 60);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(43, 39);
			this->button3->TabIndex = 3;
			this->button3->Text = L"MS";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Oddiy::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(150, 60);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(43, 39);
			this->button4->TabIndex = 4;
			this->button4->Text = L"M+";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Oddiy::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(199, 60);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(43, 39);
			this->button5->TabIndex = 5;
			this->button5->Text = L"M-";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Oddiy::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(199, 150);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(43, 39);
			this->button6->TabIndex = 10;
			this->button6->Text = L"%";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Oddiy::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(150, 150);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(43, 39);
			this->button7->TabIndex = 9;
			this->button7->Text = L"/";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Oddiy::button7_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(101, 150);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(43, 39);
			this->button8->TabIndex = 8;
			this->button8->Text = L"9";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Oddiy::button8_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(52, 150);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(43, 39);
			this->button9->TabIndex = 7;
			this->button9->Text = L"8";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &Oddiy::button9_Click);
			// 
			// button10
			// 
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			this->button10->Location = System::Drawing::Point(3, 150);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(43, 39);
			this->button10->TabIndex = 6;
			this->button10->Text = L"7";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &Oddiy::button10_Click);
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(199, 194);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(43, 39);
			this->button11->TabIndex = 15;
			this->button11->Text = L"1/x";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &Oddiy::button11_Click);
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(150, 194);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(43, 39);
			this->button12->TabIndex = 14;
			this->button12->Text = L"*";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &Oddiy::button12_Click);
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(101, 194);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(43, 39);
			this->button13->TabIndex = 13;
			this->button13->Text = L"6";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &Oddiy::button13_Click);
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(52, 194);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(43, 39);
			this->button14->TabIndex = 12;
			this->button14->Text = L"5";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &Oddiy::button14_Click);
			// 
			// button15
			// 
			this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			this->button15->Location = System::Drawing::Point(3, 194);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(43, 39);
			this->button15->TabIndex = 11;
			this->button15->Text = L"4";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &Oddiy::button15_Click);
			// 
			// button16
			// 
			this->button16->Location = System::Drawing::Point(199, 239);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(43, 84);
			this->button16->TabIndex = 20;
			this->button16->Text = L"=";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &Oddiy::button16_Click);
			// 
			// button17
			// 
			this->button17->Location = System::Drawing::Point(150, 239);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(43, 39);
			this->button17->TabIndex = 19;
			this->button17->Text = L"-";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &Oddiy::button17_Click);
			// 
			// button18
			// 
			this->button18->Location = System::Drawing::Point(101, 239);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(43, 39);
			this->button18->TabIndex = 18;
			this->button18->Text = L"3";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &Oddiy::button18_Click);
			// 
			// button19
			// 
			this->button19->Location = System::Drawing::Point(52, 239);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(43, 39);
			this->button19->TabIndex = 17;
			this->button19->Text = L"2";
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Click += gcnew System::EventHandler(this, &Oddiy::button19_Click);
			// 
			// button20
			// 
			this->button20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			this->button20->Location = System::Drawing::Point(3, 239);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(43, 39);
			this->button20->TabIndex = 16;
			this->button20->Text = L"1";
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Click += gcnew System::EventHandler(this, &Oddiy::button20_Click);
			// 
			// button23
			// 
			this->button23->Location = System::Drawing::Point(101, 284);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(43, 39);
			this->button23->TabIndex = 23;
			this->button23->Text = L",";
			this->button23->UseVisualStyleBackColor = true;
			this->button23->Click += gcnew System::EventHandler(this, &Oddiy::button23_Click);
			// 
			// button25
			// 
			this->button25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			this->button25->Location = System::Drawing::Point(3, 284);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(92, 39);
			this->button25->TabIndex = 21;
			this->button25->Text = L"0";
			this->button25->UseVisualStyleBackColor = true;
			this->button25->Click += gcnew System::EventHandler(this, &Oddiy::button25_Click);
			// 
			// button22
			// 
			this->button22->Location = System::Drawing::Point(150, 284);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(43, 39);
			this->button22->TabIndex = 24;
			this->button22->Text = L"+";
			this->button22->UseVisualStyleBackColor = true;
			this->button22->Click += gcnew System::EventHandler(this, &Oddiy::button22_Click);
			// 
			// button21
			// 
			this->button21->Location = System::Drawing::Point(199, 105);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(43, 39);
			this->button21->TabIndex = 29;
			this->button21->Text = L"sqrt";
			this->button21->UseVisualStyleBackColor = true;
			this->button21->Click += gcnew System::EventHandler(this, &Oddiy::button21_Click);
			// 
			// button26
			// 
			this->button26->Location = System::Drawing::Point(150, 105);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(43, 39);
			this->button26->TabIndex = 28;
			this->button26->Text = L"+-";
			this->button26->UseVisualStyleBackColor = true;
			this->button26->Click += gcnew System::EventHandler(this, &Oddiy::button26_Click);
			// 
			// button27
			// 
			this->button27->Location = System::Drawing::Point(101, 105);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(43, 39);
			this->button27->TabIndex = 27;
			this->button27->Text = L"C";
			this->button27->UseVisualStyleBackColor = true;
			this->button27->Click += gcnew System::EventHandler(this, &Oddiy::button27_Click);
			// 
			// button28
			// 
			this->button28->Location = System::Drawing::Point(52, 105);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(43, 39);
			this->button28->TabIndex = 26;
			this->button28->Text = L"CE";
			this->button28->UseVisualStyleBackColor = true;
			this->button28->Click += gcnew System::EventHandler(this, &Oddiy::button28_Click);
			// 
			// button29
			// 
			this->button29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			this->button29->Location = System::Drawing::Point(3, 105);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(43, 39);
			this->button29->TabIndex = 25;
			this->button29->Text = L"BPS";
			this->button29->UseVisualStyleBackColor = true;
			this->button29->Click += gcnew System::EventHandler(this, &Oddiy::button29_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(6, 39);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(16, 13);
			this->label1->TabIndex = 30;
			this->label1->Text = L"M";
			// 
			// Oddiy
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->button26);
			this->Controls->Add(this->button27);
			this->Controls->Add(this->button28);
			this->Controls->Add(this->button29);
			this->Controls->Add(this->button22);
			this->Controls->Add(this->button23);
			this->Controls->Add(this->button25);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Name = L"Oddiy";
			this->Size = System::Drawing::Size(245, 327);
			this->Load += gcnew System::EventHandler(this, &Oddiy::Oddiy_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		String ^s;
		bool vergul;
		double bs,is;
		char amal;
		double m;
#pragma endregion
	
private: System::Void Oddiy_Load(System::Object^  sender, System::EventArgs^  e) {
			 vergul=false;
			 bs=0;
			 is=0;
			 amal='q';
			 m=0;
			 label1->Visible=false;
		 }
private: System::Void button20_Click(System::Object^  sender, System::EventArgs^  e) {
			 int l=textBox1->Text->Length;
			 s=textBox1->Text;
				 if (s=="0") textBox1->Text="1";
				 else
				 if (vergul && l<13)
					 textBox1->Text+="1"; else
				 if (l<12)
					textBox1->Text+="1";
			 }
private: System::Void button19_Click(System::Object^  sender, System::EventArgs^  e) {
			 int l=textBox1->Text->Length;
			 s=textBox1->Text;
				 if (s=="0") textBox1->Text="2";
				 else
				 if (vergul && l<13)
					 textBox1->Text+="2"; else
				 if (l<12)
					textBox1->Text+="2";
		 }
private: System::Void button18_Click(System::Object^  sender, System::EventArgs^  e) {
			 int l=textBox1->Text->Length;
			 s=textBox1->Text;
				 if (s=="0") textBox1->Text="3";
				 else
				 if (vergul && l<13)
					 textBox1->Text+="3"; else
				 if (l<12)
					textBox1->Text+="3";
		 }
private: System::Void button15_Click(System::Object^  sender, System::EventArgs^  e) {
			 int l=textBox1->Text->Length;
			 s=textBox1->Text;
				 if (s=="0") textBox1->Text="4";
				 else
				 if (vergul && l<13)
					 textBox1->Text+="4"; else
				 if (l<12)
					textBox1->Text+="4";
		 }
private: System::Void button14_Click(System::Object^  sender, System::EventArgs^  e) {
			 int l=textBox1->Text->Length;
			 s=textBox1->Text;
				 if (s=="0") textBox1->Text="5";
				 else
				 if (vergul && l<13)
					 textBox1->Text+="5"; else
				 if (l<12)
					textBox1->Text+="5";
		 }
private: System::Void button13_Click(System::Object^  sender, System::EventArgs^  e) {
			 int l=textBox1->Text->Length;
			 s=textBox1->Text;
				 if (s=="0") textBox1->Text="6";
				 else
				 if (vergul && l<13)
					 textBox1->Text+="6"; else
				 if (l<12)
					textBox1->Text+="6";
		 }
private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
			 int l=textBox1->Text->Length;
			 s=textBox1->Text;
				 if (s=="0") textBox1->Text="7";
				 else
				 if (vergul && l<13)
					 textBox1->Text+="7"; else
				 if (l<12)
					textBox1->Text+="7";
		 }
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
			 int l=textBox1->Text->Length;
			 s=textBox1->Text;
				 if (s=="0") textBox1->Text="8";
				 else
				 if (vergul && l<13)
					 textBox1->Text+="8"; else
				 if (l<12)
					textBox1->Text+="8";
		 }
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
			 int l=textBox1->Text->Length;
			 s=textBox1->Text;
				 if (s=="0") textBox1->Text="9";
				 else
				 if (vergul && l<13)
					 textBox1->Text+="9"; else
				 if (l<12)
					textBox1->Text+="9";
		 }
private: System::Void button25_Click(System::Object^  sender, System::EventArgs^  e) {
			 int l=textBox1->Text->Length;
			 s=textBox1->Text;
			 if (s=="0") {textBox1->Text="0,";vergul=true;}
				 else
				 if (vergul && l<13)
					 textBox1->Text+="0"; else
				 if (l<12)
					textBox1->Text+="0";
		 }
private: System::Void button23_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(!vergul) {textBox1->Text+=","; vergul = true;} 
		 }
private: System::Void button29_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (textBox1->Text->Length==1){
				 textBox1->Text="0"; vergul=false;}
			 if (textBox1->Text->Length>1){
				textBox1->Text=textBox1->Text->Remove(textBox1->Text->Length-1);
				s=textBox1->Text;
				vergul = false;
				for (int i=0; i<s->Length;i++)
					if (s[i]==','){vergul=true; break;}
			 }
		 }
private: System::Void button28_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBox1->Text="0";
		 }
private: System::Void button27_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBox1->Text="0";
			 vergul=false;
			 bs=0;
			 is=0;
		 }
private: System::Void button26_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBox1->Text=Convert::ToString(-1*Convert::ToDouble(textBox1->Text));
		 }
private: System::Void button21_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBox1->Text=Convert::ToString(Math::Sqrt(Convert::ToDouble(textBox1->Text)));
		 }
private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBox1->Text=Convert::ToString(1.0/Convert::ToDouble(textBox1->Text));
		 }
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
			 is=Convert::ToDouble(textBox1->Text);
			 textBox1->Text=Convert::ToString(bs*is/100.0);
		 }
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
			 bs=Convert::ToDouble(textBox1->Text);
			 textBox1->Text="0";
			 amal = '/';
		 }
private: System::Void button22_Click(System::Object^  sender, System::EventArgs^  e) {
			 bs=Convert::ToDouble(textBox1->Text);
			 textBox1->Text="0";
			 amal = '+';
		 }
private: System::Void button17_Click(System::Object^  sender, System::EventArgs^  e) {
			 bs=Convert::ToDouble(textBox1->Text);
			 textBox1->Text="0";
			 amal = '-';
		 }
private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e) {
			 bs=Convert::ToDouble(textBox1->Text);
			 textBox1->Text="0";
			 amal = '*';
		 }
private: System::Void button16_Click(System::Object^  sender, System::EventArgs^  e) {
			 is=Convert::ToDouble(textBox1->Text);
			 switch (amal)
			 {
			 case '+': textBox1->Text=Convert::ToString(bs+is); break;
			 case '-': textBox1->Text=Convert::ToString(bs-is); break;
			 case '*': textBox1->Text=Convert::ToString(bs*is); break;
			 case '/': textBox1->Text=Convert::ToString(bs/is); break;
			 default:
				 break;
			 }
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 m=0;
			 label1->Visible=false;	
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBox1->Text=Convert::ToString(m);
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 label1->Visible=true;
			 m=Convert::ToDouble(textBox1->Text);
		 }
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			 label1->Visible=true;
			 m+=Convert::ToDouble(textBox1->Text);
		 }
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
			 label1->Visible=true;
			 m-=Convert::ToDouble(textBox1->Text);
		 }
};
}
