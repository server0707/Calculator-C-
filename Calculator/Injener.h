#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace Calculator {

	/// <summary>
	/// —водка дл€ Injener
	/// </summary>
	public ref class Injener : public System::Windows::Forms::UserControl
	{
	public:
		Injener(void)
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
		~Injener()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  panel1;
	protected: 
	private: System::Windows::Forms::Button^  button25;
	private: System::Windows::Forms::Button^  button26;
	private: System::Windows::Forms::Button^  button27;
	private: System::Windows::Forms::Button^  button28;
	private: System::Windows::Forms::Button^  button29;
	private: System::Windows::Forms::Button^  button19;
	private: System::Windows::Forms::Button^  button20;
	private: System::Windows::Forms::Button^  button21;
	private: System::Windows::Forms::Button^  button22;
	private: System::Windows::Forms::Button^  button23;
	private: System::Windows::Forms::Button^  button13;
	private: System::Windows::Forms::Button^  button14;
	private: System::Windows::Forms::Button^  button15;
	private: System::Windows::Forms::Button^  button16;
	private: System::Windows::Forms::Button^  button17;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Panel^  panel2;

























	private: System::Windows::Forms::Panel^  panel3;

	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::Button^  button18;
	private: System::Windows::Forms::Button^  button24;
	private: System::Windows::Forms::Button^  button30;
	private: System::Windows::Forms::Button^  button31;
	private: System::Windows::Forms::Button^  button32;
	private: System::Windows::Forms::Button^  button33;
	private: System::Windows::Forms::Button^  button34;
	private: System::Windows::Forms::Button^  button35;
	private: System::Windows::Forms::Button^  button36;
	private: System::Windows::Forms::Button^  button37;
	private: System::Windows::Forms::Button^  button38;
	private: System::Windows::Forms::Button^  button39;
	private: System::Windows::Forms::Button^  button40;
	private: System::Windows::Forms::Button^  button41;
	private: System::Windows::Forms::Button^  button42;
	private: System::Windows::Forms::Button^  button43;
	private: System::Windows::Forms::Button^  button44;
	private: System::Windows::Forms::Button^  button45;
	private: System::Windows::Forms::Button^  button46;
	private: System::Windows::Forms::Button^  button47;
	private: System::Windows::Forms::Button^  button48;
	private: System::Windows::Forms::Button^  button49;
	private: System::Windows::Forms::Button^  button50;
	private: System::Windows::Forms::Button^  button51;
	private: System::Windows::Forms::Button^  button52;
	private: System::Windows::Forms::Button^  button53;
private: System::Windows::Forms::Label^  label1;
private: System::Windows::Forms::Button^  button65;
private: System::Windows::Forms::Button^  button66;
private: System::Windows::Forms::Button^  button67;
private: System::Windows::Forms::Button^  button68;
private: System::Windows::Forms::Button^  button70;
private: System::Windows::Forms::Button^  button71;
private: System::Windows::Forms::Button^  button72;


private: System::Windows::Forms::Button^  button75;
private: System::Windows::Forms::Button^  button76;
private: System::Windows::Forms::Button^  button77;
private: System::Windows::Forms::Panel^  panel4;
private: System::Windows::Forms::RadioButton^  radioButton3;
private: System::Windows::Forms::RadioButton^  radioButton2;
private: System::Windows::Forms::RadioButton^  radioButton1;





























































	protected: 

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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button77 = (gcnew System::Windows::Forms::Button());
			this->button76 = (gcnew System::Windows::Forms::Button());
			this->button75 = (gcnew System::Windows::Forms::Button());
			this->button72 = (gcnew System::Windows::Forms::Button());
			this->button65 = (gcnew System::Windows::Forms::Button());
			this->button71 = (gcnew System::Windows::Forms::Button());
			this->button66 = (gcnew System::Windows::Forms::Button());
			this->button70 = (gcnew System::Windows::Forms::Button());
			this->button67 = (gcnew System::Windows::Forms::Button());
			this->button68 = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button30 = (gcnew System::Windows::Forms::Button());
			this->button31 = (gcnew System::Windows::Forms::Button());
			this->button32 = (gcnew System::Windows::Forms::Button());
			this->button33 = (gcnew System::Windows::Forms::Button());
			this->button34 = (gcnew System::Windows::Forms::Button());
			this->button35 = (gcnew System::Windows::Forms::Button());
			this->button36 = (gcnew System::Windows::Forms::Button());
			this->button37 = (gcnew System::Windows::Forms::Button());
			this->button38 = (gcnew System::Windows::Forms::Button());
			this->button39 = (gcnew System::Windows::Forms::Button());
			this->button40 = (gcnew System::Windows::Forms::Button());
			this->button41 = (gcnew System::Windows::Forms::Button());
			this->button42 = (gcnew System::Windows::Forms::Button());
			this->button43 = (gcnew System::Windows::Forms::Button());
			this->button44 = (gcnew System::Windows::Forms::Button());
			this->button45 = (gcnew System::Windows::Forms::Button());
			this->button46 = (gcnew System::Windows::Forms::Button());
			this->button47 = (gcnew System::Windows::Forms::Button());
			this->button48 = (gcnew System::Windows::Forms::Button());
			this->button49 = (gcnew System::Windows::Forms::Button());
			this->button50 = (gcnew System::Windows::Forms::Button());
			this->button51 = (gcnew System::Windows::Forms::Button());
			this->button52 = (gcnew System::Windows::Forms::Button());
			this->button53 = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->panel1->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->panel4);
			this->panel1->Controls->Add(this->button25);
			this->panel1->Controls->Add(this->button26);
			this->panel1->Controls->Add(this->button71);
			this->panel1->Controls->Add(this->button27);
			this->panel1->Controls->Add(this->button77);
			this->panel1->Controls->Add(this->button28);
			this->panel1->Controls->Add(this->button68);
			this->panel1->Controls->Add(this->button67);
			this->panel1->Controls->Add(this->button29);
			this->panel1->Controls->Add(this->button76);
			this->panel1->Controls->Add(this->button19);
			this->panel1->Controls->Add(this->button70);
			this->panel1->Controls->Add(this->button20);
			this->panel1->Controls->Add(this->button66);
			this->panel1->Controls->Add(this->button21);
			this->panel1->Controls->Add(this->button75);
			this->panel1->Controls->Add(this->button22);
			this->panel1->Controls->Add(this->button65);
			this->panel1->Controls->Add(this->button23);
			this->panel1->Controls->Add(this->button72);
			this->panel1->Controls->Add(this->button13);
			this->panel1->Controls->Add(this->button14);
			this->panel1->Controls->Add(this->button15);
			this->panel1->Controls->Add(this->button16);
			this->panel1->Controls->Add(this->button17);
			this->panel1->Controls->Add(this->button7);
			this->panel1->Controls->Add(this->button8);
			this->panel1->Controls->Add(this->button9);
			this->panel1->Controls->Add(this->button10);
			this->panel1->Controls->Add(this->button11);
			this->panel1->Controls->Add(this->button6);
			this->panel1->Controls->Add(this->button5);
			this->panel1->Controls->Add(this->button4);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Location = System::Drawing::Point(0, 50);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(243, 269);
			this->panel1->TabIndex = 62;
			// 
			// panel4
			// 
			this->panel4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel4->Controls->Add(this->radioButton3);
			this->panel4->Controls->Add(this->radioButton2);
			this->panel4->Controls->Add(this->radioButton1);
			this->panel4->Location = System::Drawing::Point(4, 4);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(239, 38);
			this->panel4->TabIndex = 71;
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->radioButton3->Location = System::Drawing::Point(178, 11);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(53, 17);
			this->radioButton3->TabIndex = 2;
			this->radioButton3->Text = L"Grads";
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->radioButton2->Location = System::Drawing::Point(87, 11);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(64, 17);
			this->radioButton2->TabIndex = 1;
			this->radioButton2->Text = L"Radians";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Checked = true;
			this->radioButton1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->radioButton1->Location = System::Drawing::Point(3, 11);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(65, 17);
			this->radioButton1->TabIndex = 0;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Degrees";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// button25
			// 
			this->button25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			this->button25->Location = System::Drawing::Point(200, 228);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(43, 39);
			this->button25->TabIndex = 56;
			this->button25->Text = L"10^x";
			this->button25->UseVisualStyleBackColor = true;
			this->button25->Click += gcnew System::EventHandler(this, &Injener::button25_Click);
			// 
			// button26
			// 
			this->button26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			this->button26->Location = System::Drawing::Point(200, 183);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(43, 39);
			this->button26->TabIndex = 55;
			this->button26->Text = L"x^1/3";
			this->button26->UseVisualStyleBackColor = true;
			this->button26->Click += gcnew System::EventHandler(this, &Injener::button26_Click);
			// 
			// button27
			// 
			this->button27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			this->button27->Location = System::Drawing::Point(200, 138);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(43, 39);
			this->button27->TabIndex = 54;
			this->button27->Text = L"x^1/y";
			this->button27->UseVisualStyleBackColor = true;
			this->button27->Click += gcnew System::EventHandler(this, &Injener::button27_Click);
			// 
			// button28
			// 
			this->button28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			this->button28->Location = System::Drawing::Point(200, 93);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(43, 39);
			this->button28->TabIndex = 53;
			this->button28->Text = L"n!";
			this->button28->UseVisualStyleBackColor = true;
			this->button28->Click += gcnew System::EventHandler(this, &Injener::button28_Click);
			// 
			// button29
			// 
			this->button29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			this->button29->Location = System::Drawing::Point(200, 48);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(43, 39);
			this->button29->TabIndex = 52;
			this->button29->Text = L")";
			this->button29->UseVisualStyleBackColor = true;
			this->button29->Click += gcnew System::EventHandler(this, &Injener::button29_Click);
			// 
			// button19
			// 
			this->button19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			this->button19->Location = System::Drawing::Point(151, 228);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(43, 39);
			this->button19->TabIndex = 51;
			this->button19->Text = L"log";
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Click += gcnew System::EventHandler(this, &Injener::button19_Click);
			// 
			// button20
			// 
			this->button20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			this->button20->Location = System::Drawing::Point(151, 183);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(43, 39);
			this->button20->TabIndex = 50;
			this->button20->Text = L"x^3";
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Click += gcnew System::EventHandler(this, &Injener::button20_Click);
			// 
			// button21
			// 
			this->button21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			this->button21->Location = System::Drawing::Point(151, 138);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(43, 39);
			this->button21->TabIndex = 49;
			this->button21->Text = L"x^y";
			this->button21->UseVisualStyleBackColor = true;
			this->button21->Click += gcnew System::EventHandler(this, &Injener::button21_Click);
			// 
			// button22
			// 
			this->button22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			this->button22->Location = System::Drawing::Point(151, 93);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(43, 39);
			this->button22->TabIndex = 48;
			this->button22->Text = L"x^2";
			this->button22->UseVisualStyleBackColor = true;
			this->button22->Click += gcnew System::EventHandler(this, &Injener::button22_Click);
			// 
			// button23
			// 
			this->button23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			this->button23->Location = System::Drawing::Point(151, 48);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(43, 39);
			this->button23->TabIndex = 47;
			this->button23->Text = L"(";
			this->button23->UseVisualStyleBackColor = true;
			this->button23->Click += gcnew System::EventHandler(this, &Injener::button23_Click);
			// 
			// button13
			// 
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			this->button13->Location = System::Drawing::Point(102, 228);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(43, 39);
			this->button13->TabIndex = 46;
			this->button13->Text = L"Mod";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &Injener::button13_Click);
			// 
			// button14
			// 
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			this->button14->Location = System::Drawing::Point(102, 183);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(43, 39);
			this->button14->TabIndex = 45;
			this->button14->Text = L"tan";
			this->button14->UseVisualStyleBackColor = true;
			// 
			// button15
			// 
			this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			this->button15->Location = System::Drawing::Point(102, 138);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(43, 39);
			this->button15->TabIndex = 44;
			this->button15->Text = L"cos";
			this->button15->UseVisualStyleBackColor = true;
			// 
			// button16
			// 
			this->button16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			this->button16->Location = System::Drawing::Point(102, 93);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(43, 39);
			this->button16->TabIndex = 43;
			this->button16->Text = L"sin";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &Injener::button16_Click);
			// 
			// button17
			// 
			this->button17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			this->button17->Location = System::Drawing::Point(102, 48);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(43, 39);
			this->button17->TabIndex = 42;
			this->button17->Text = L"Ln";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &Injener::button17_Click);
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			this->button7->Location = System::Drawing::Point(53, 228);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(43, 39);
			this->button7->TabIndex = 41;
			this->button7->Text = L"Exp";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Injener::button7_Click);
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			this->button8->Location = System::Drawing::Point(53, 183);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(43, 39);
			this->button8->TabIndex = 40;
			this->button8->Text = L"tanh";
			this->button8->UseVisualStyleBackColor = true;
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			this->button9->Location = System::Drawing::Point(53, 138);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(43, 39);
			this->button9->TabIndex = 39;
			this->button9->Text = L"cosh";
			this->button9->UseVisualStyleBackColor = true;
			// 
			// button10
			// 
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			this->button10->Location = System::Drawing::Point(53, 93);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(43, 39);
			this->button10->TabIndex = 38;
			this->button10->Text = L"sinh";
			this->button10->UseVisualStyleBackColor = true;
			// 
			// button11
			// 
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			this->button11->Location = System::Drawing::Point(53, 48);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(43, 39);
			this->button11->TabIndex = 37;
			this->button11->Text = L"Inv";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &Injener::button11_Click);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			this->button6->Location = System::Drawing::Point(4, 228);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(43, 39);
			this->button6->TabIndex = 36;
			this->button6->Text = L"F-E";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			this->button5->Location = System::Drawing::Point(4, 183);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(43, 39);
			this->button5->TabIndex = 35;
			this->button5->Text = L"pi";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Injener::button5_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			this->button4->Location = System::Drawing::Point(4, 138);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(43, 39);
			this->button4->TabIndex = 34;
			this->button4->Text = L"dms";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			this->button3->Location = System::Drawing::Point(4, 93);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(43, 39);
			this->button3->TabIndex = 33;
			this->button3->Text = L"Int";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Injener::button3_Click);
			// 
			// button2
			// 
			this->button2->Enabled = false;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			this->button2->Location = System::Drawing::Point(4, 48);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(43, 39);
			this->button2->TabIndex = 32;
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button77
			// 
			this->button77->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			this->button77->Location = System::Drawing::Point(4, 93);
			this->button77->Name = L"button77";
			this->button77->Size = System::Drawing::Size(43, 39);
			this->button77->TabIndex = 58;
			this->button77->Text = L"Frac";
			this->button77->UseVisualStyleBackColor = true;
			this->button77->Visible = false;
			this->button77->Click += gcnew System::EventHandler(this, &Injener::button77_Click);
			// 
			// button76
			// 
			this->button76->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			this->button76->Location = System::Drawing::Point(4, 138);
			this->button76->Name = L"button76";
			this->button76->Size = System::Drawing::Size(43, 39);
			this->button76->TabIndex = 59;
			this->button76->Text = L"deg";
			this->button76->UseVisualStyleBackColor = true;
			this->button76->Visible = false;
			// 
			// button75
			// 
			this->button75->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			this->button75->Location = System::Drawing::Point(4, 183);
			this->button75->Name = L"button75";
			this->button75->Size = System::Drawing::Size(43, 39);
			this->button75->TabIndex = 60;
			this->button75->Text = L"2*pi";
			this->button75->UseVisualStyleBackColor = true;
			this->button75->Visible = false;
			this->button75->Click += gcnew System::EventHandler(this, &Injener::button75_Click);
			// 
			// button72
			// 
			this->button72->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			this->button72->Location = System::Drawing::Point(53, 93);
			this->button72->Name = L"button72";
			this->button72->Size = System::Drawing::Size(43, 39);
			this->button72->TabIndex = 63;
			this->button72->Text = L"sinh^-1";
			this->button72->UseVisualStyleBackColor = true;
			this->button72->Visible = false;
			// 
			// button65
			// 
			this->button65->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			this->button65->Location = System::Drawing::Point(102, 183);
			this->button65->Name = L"button65";
			this->button65->Size = System::Drawing::Size(43, 39);
			this->button65->TabIndex = 70;
			this->button65->Text = L"tan^-1";
			this->button65->UseVisualStyleBackColor = true;
			this->button65->Visible = false;
			// 
			// button71
			// 
			this->button71->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			this->button71->Location = System::Drawing::Point(53, 138);
			this->button71->Name = L"button71";
			this->button71->Size = System::Drawing::Size(43, 39);
			this->button71->TabIndex = 64;
			this->button71->Text = L"cosh^-1";
			this->button71->UseVisualStyleBackColor = true;
			this->button71->Visible = false;
			// 
			// button66
			// 
			this->button66->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			this->button66->Location = System::Drawing::Point(102, 138);
			this->button66->Name = L"button66";
			this->button66->Size = System::Drawing::Size(43, 39);
			this->button66->TabIndex = 69;
			this->button66->Text = L"cos^-1";
			this->button66->UseVisualStyleBackColor = true;
			this->button66->Visible = false;
			// 
			// button70
			// 
			this->button70->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			this->button70->Location = System::Drawing::Point(53, 183);
			this->button70->Name = L"button70";
			this->button70->Size = System::Drawing::Size(43, 39);
			this->button70->TabIndex = 65;
			this->button70->Text = L"tanh^-1";
			this->button70->UseVisualStyleBackColor = true;
			this->button70->Visible = false;
			// 
			// button67
			// 
			this->button67->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			this->button67->Location = System::Drawing::Point(102, 93);
			this->button67->Name = L"button67";
			this->button67->Size = System::Drawing::Size(43, 39);
			this->button67->TabIndex = 68;
			this->button67->Text = L"sin^-1";
			this->button67->UseVisualStyleBackColor = true;
			this->button67->Visible = false;
			// 
			// button68
			// 
			this->button68->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			this->button68->Location = System::Drawing::Point(102, 48);
			this->button68->Name = L"button68";
			this->button68->Size = System::Drawing::Size(43, 39);
			this->button68->TabIndex = 67;
			this->button68->Text = L"e^x";
			this->button68->UseVisualStyleBackColor = true;
			this->button68->Visible = false;
			this->button68->Click += gcnew System::EventHandler(this, &Injener::button68_Click);
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->button1);
			this->panel2->Controls->Add(this->button12);
			this->panel2->Controls->Add(this->button18);
			this->panel2->Controls->Add(this->button24);
			this->panel2->Controls->Add(this->button30);
			this->panel2->Controls->Add(this->button31);
			this->panel2->Controls->Add(this->button32);
			this->panel2->Controls->Add(this->button33);
			this->panel2->Controls->Add(this->button34);
			this->panel2->Controls->Add(this->button35);
			this->panel2->Controls->Add(this->button36);
			this->panel2->Controls->Add(this->button37);
			this->panel2->Controls->Add(this->button38);
			this->panel2->Controls->Add(this->button39);
			this->panel2->Controls->Add(this->button40);
			this->panel2->Controls->Add(this->button41);
			this->panel2->Controls->Add(this->button42);
			this->panel2->Controls->Add(this->button43);
			this->panel2->Controls->Add(this->button44);
			this->panel2->Controls->Add(this->button45);
			this->panel2->Controls->Add(this->button46);
			this->panel2->Controls->Add(this->button47);
			this->panel2->Controls->Add(this->button48);
			this->panel2->Controls->Add(this->button49);
			this->panel2->Controls->Add(this->button50);
			this->panel2->Controls->Add(this->button51);
			this->panel2->Controls->Add(this->button52);
			this->panel2->Controls->Add(this->button53);
			this->panel2->Location = System::Drawing::Point(249, 50);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(242, 269);
			this->panel2->TabIndex = 63;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(196, 48);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(43, 39);
			this->button1->TabIndex = 57;
			this->button1->Text = L"sqrt";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Injener::button1_Click);
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(147, 48);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(43, 39);
			this->button12->TabIndex = 56;
			this->button12->Text = L"+-";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &Injener::button12_Click);
			// 
			// button18
			// 
			this->button18->Location = System::Drawing::Point(98, 48);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(43, 39);
			this->button18->TabIndex = 55;
			this->button18->Text = L"C";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &Injener::button18_Click);
			// 
			// button24
			// 
			this->button24->Location = System::Drawing::Point(49, 48);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(43, 39);
			this->button24->TabIndex = 54;
			this->button24->Text = L"CE";
			this->button24->UseVisualStyleBackColor = true;
			this->button24->Click += gcnew System::EventHandler(this, &Injener::button24_Click);
			// 
			// button30
			// 
			this->button30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			this->button30->Location = System::Drawing::Point(0, 48);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(43, 39);
			this->button30->TabIndex = 53;
			this->button30->Text = L"BPS";
			this->button30->UseVisualStyleBackColor = true;
			this->button30->Click += gcnew System::EventHandler(this, &Injener::button30_Click);
			// 
			// button31
			// 
			this->button31->Location = System::Drawing::Point(147, 227);
			this->button31->Name = L"button31";
			this->button31->Size = System::Drawing::Size(43, 39);
			this->button31->TabIndex = 52;
			this->button31->Text = L"+";
			this->button31->UseVisualStyleBackColor = true;
			this->button31->Click += gcnew System::EventHandler(this, &Injener::button31_Click);
			// 
			// button32
			// 
			this->button32->Location = System::Drawing::Point(98, 227);
			this->button32->Name = L"button32";
			this->button32->Size = System::Drawing::Size(43, 39);
			this->button32->TabIndex = 51;
			this->button32->Text = L",";
			this->button32->UseVisualStyleBackColor = true;
			this->button32->Click += gcnew System::EventHandler(this, &Injener::button32_Click);
			// 
			// button33
			// 
			this->button33->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			this->button33->Location = System::Drawing::Point(0, 227);
			this->button33->Name = L"button33";
			this->button33->Size = System::Drawing::Size(92, 39);
			this->button33->TabIndex = 50;
			this->button33->Text = L"0";
			this->button33->UseVisualStyleBackColor = true;
			this->button33->Click += gcnew System::EventHandler(this, &Injener::button33_Click);
			// 
			// button34
			// 
			this->button34->Location = System::Drawing::Point(196, 182);
			this->button34->Name = L"button34";
			this->button34->Size = System::Drawing::Size(43, 84);
			this->button34->TabIndex = 49;
			this->button34->Text = L"=";
			this->button34->UseVisualStyleBackColor = true;
			this->button34->Click += gcnew System::EventHandler(this, &Injener::button34_Click);
			// 
			// button35
			// 
			this->button35->Location = System::Drawing::Point(147, 182);
			this->button35->Name = L"button35";
			this->button35->Size = System::Drawing::Size(43, 39);
			this->button35->TabIndex = 48;
			this->button35->Text = L"-";
			this->button35->UseVisualStyleBackColor = true;
			this->button35->Click += gcnew System::EventHandler(this, &Injener::button35_Click);
			// 
			// button36
			// 
			this->button36->Location = System::Drawing::Point(98, 182);
			this->button36->Name = L"button36";
			this->button36->Size = System::Drawing::Size(43, 39);
			this->button36->TabIndex = 47;
			this->button36->Text = L"3";
			this->button36->UseVisualStyleBackColor = true;
			this->button36->Click += gcnew System::EventHandler(this, &Injener::button36_Click);
			// 
			// button37
			// 
			this->button37->Location = System::Drawing::Point(49, 182);
			this->button37->Name = L"button37";
			this->button37->Size = System::Drawing::Size(43, 39);
			this->button37->TabIndex = 46;
			this->button37->Text = L"2";
			this->button37->UseVisualStyleBackColor = true;
			this->button37->Click += gcnew System::EventHandler(this, &Injener::button37_Click);
			// 
			// button38
			// 
			this->button38->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			this->button38->Location = System::Drawing::Point(0, 182);
			this->button38->Name = L"button38";
			this->button38->Size = System::Drawing::Size(43, 39);
			this->button38->TabIndex = 45;
			this->button38->Text = L"1";
			this->button38->UseVisualStyleBackColor = true;
			this->button38->Click += gcnew System::EventHandler(this, &Injener::button38_Click);
			// 
			// button39
			// 
			this->button39->Location = System::Drawing::Point(196, 137);
			this->button39->Name = L"button39";
			this->button39->Size = System::Drawing::Size(43, 39);
			this->button39->TabIndex = 44;
			this->button39->Text = L"1/x";
			this->button39->UseVisualStyleBackColor = true;
			this->button39->Click += gcnew System::EventHandler(this, &Injener::button39_Click);
			// 
			// button40
			// 
			this->button40->Location = System::Drawing::Point(147, 137);
			this->button40->Name = L"button40";
			this->button40->Size = System::Drawing::Size(43, 39);
			this->button40->TabIndex = 43;
			this->button40->Text = L"*";
			this->button40->UseVisualStyleBackColor = true;
			this->button40->Click += gcnew System::EventHandler(this, &Injener::button40_Click);
			// 
			// button41
			// 
			this->button41->Location = System::Drawing::Point(98, 137);
			this->button41->Name = L"button41";
			this->button41->Size = System::Drawing::Size(43, 39);
			this->button41->TabIndex = 42;
			this->button41->Text = L"6";
			this->button41->UseVisualStyleBackColor = true;
			this->button41->Click += gcnew System::EventHandler(this, &Injener::button41_Click);
			// 
			// button42
			// 
			this->button42->Location = System::Drawing::Point(49, 137);
			this->button42->Name = L"button42";
			this->button42->Size = System::Drawing::Size(43, 39);
			this->button42->TabIndex = 41;
			this->button42->Text = L"5";
			this->button42->UseVisualStyleBackColor = true;
			this->button42->Click += gcnew System::EventHandler(this, &Injener::button42_Click);
			// 
			// button43
			// 
			this->button43->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			this->button43->Location = System::Drawing::Point(0, 137);
			this->button43->Name = L"button43";
			this->button43->Size = System::Drawing::Size(43, 39);
			this->button43->TabIndex = 40;
			this->button43->Text = L"4";
			this->button43->UseVisualStyleBackColor = true;
			this->button43->Click += gcnew System::EventHandler(this, &Injener::button43_Click);
			// 
			// button44
			// 
			this->button44->Enabled = false;
			this->button44->Location = System::Drawing::Point(196, 93);
			this->button44->Name = L"button44";
			this->button44->Size = System::Drawing::Size(43, 39);
			this->button44->TabIndex = 39;
			this->button44->Text = L"%";
			this->button44->UseVisualStyleBackColor = true;
			this->button44->Click += gcnew System::EventHandler(this, &Injener::button44_Click);
			// 
			// button45
			// 
			this->button45->Location = System::Drawing::Point(147, 93);
			this->button45->Name = L"button45";
			this->button45->Size = System::Drawing::Size(43, 39);
			this->button45->TabIndex = 38;
			this->button45->Text = L"/";
			this->button45->UseVisualStyleBackColor = true;
			this->button45->Click += gcnew System::EventHandler(this, &Injener::button45_Click);
			// 
			// button46
			// 
			this->button46->Location = System::Drawing::Point(98, 93);
			this->button46->Name = L"button46";
			this->button46->Size = System::Drawing::Size(43, 39);
			this->button46->TabIndex = 37;
			this->button46->Text = L"9";
			this->button46->UseVisualStyleBackColor = true;
			this->button46->Click += gcnew System::EventHandler(this, &Injener::button46_Click);
			// 
			// button47
			// 
			this->button47->Location = System::Drawing::Point(49, 93);
			this->button47->Name = L"button47";
			this->button47->Size = System::Drawing::Size(43, 39);
			this->button47->TabIndex = 36;
			this->button47->Text = L"8";
			this->button47->UseVisualStyleBackColor = true;
			this->button47->Click += gcnew System::EventHandler(this, &Injener::button47_Click);
			// 
			// button48
			// 
			this->button48->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			this->button48->Location = System::Drawing::Point(0, 93);
			this->button48->Name = L"button48";
			this->button48->Size = System::Drawing::Size(43, 39);
			this->button48->TabIndex = 35;
			this->button48->Text = L"7";
			this->button48->UseVisualStyleBackColor = true;
			this->button48->Click += gcnew System::EventHandler(this, &Injener::button48_Click);
			// 
			// button49
			// 
			this->button49->Location = System::Drawing::Point(196, 3);
			this->button49->Name = L"button49";
			this->button49->Size = System::Drawing::Size(43, 39);
			this->button49->TabIndex = 34;
			this->button49->Text = L"M-";
			this->button49->UseVisualStyleBackColor = true;
			this->button49->Click += gcnew System::EventHandler(this, &Injener::button49_Click);
			// 
			// button50
			// 
			this->button50->Location = System::Drawing::Point(147, 3);
			this->button50->Name = L"button50";
			this->button50->Size = System::Drawing::Size(43, 39);
			this->button50->TabIndex = 33;
			this->button50->Text = L"M+";
			this->button50->UseVisualStyleBackColor = true;
			this->button50->Click += gcnew System::EventHandler(this, &Injener::button50_Click);
			// 
			// button51
			// 
			this->button51->Location = System::Drawing::Point(98, 3);
			this->button51->Name = L"button51";
			this->button51->Size = System::Drawing::Size(43, 39);
			this->button51->TabIndex = 32;
			this->button51->Text = L"MS";
			this->button51->UseVisualStyleBackColor = true;
			this->button51->Click += gcnew System::EventHandler(this, &Injener::button51_Click);
			// 
			// button52
			// 
			this->button52->Location = System::Drawing::Point(49, 3);
			this->button52->Name = L"button52";
			this->button52->Size = System::Drawing::Size(43, 39);
			this->button52->TabIndex = 31;
			this->button52->Text = L"MR";
			this->button52->UseVisualStyleBackColor = true;
			this->button52->Click += gcnew System::EventHandler(this, &Injener::button52_Click);
			// 
			// button53
			// 
			this->button53->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			this->button53->Location = System::Drawing::Point(0, 3);
			this->button53->Name = L"button53";
			this->button53->Size = System::Drawing::Size(43, 39);
			this->button53->TabIndex = 30;
			this->button53->Text = L"MC";
			this->button53->UseVisualStyleBackColor = true;
			this->button53->Click += gcnew System::EventHandler(this, &Injener::button53_Click);
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->label1);
			this->panel3->Controls->Add(this->textBox1);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel3->Location = System::Drawing::Point(0, 0);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(491, 48);
			this->panel3->TabIndex = 64;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(5, 29);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(16, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"M";
			this->label1->Visible = false;
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(4, 4);
			this->textBox1->MaxLength = 12;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(484, 40);
			this->textBox1->TabIndex = 0;
			this->textBox1->Text = L"0";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// Injener
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Name = L"Injener";
			this->Size = System::Drawing::Size(491, 319);
			this->Load += gcnew System::EventHandler(this, &Injener::Injener_Load);
			this->panel1->ResumeLayout(false);
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->ResumeLayout(false);

		}
		Int64 factorial(int n){
			if (n==0) return 1;
			return n*factorial(n-1);
		}
		String ^s;
		bool vergul;
		double bs,is;
		char amal;
		double m;
		bool inv;
		int qavs;
#pragma endregion
	private: System::Void button38_Click(System::Object^  sender, System::EventArgs^  e) {
				 int l=textBox1->Text->Length;
					s=textBox1->Text;
				 if (s=="0") textBox1->Text="1";
				 else
				 if (vergul && l<13)
					 textBox1->Text+="1"; else
				 if (l<12)
					textBox1->Text+="1";
			 }
private: System::Void button37_Click(System::Object^  sender, System::EventArgs^  e) {
			  int l=textBox1->Text->Length;
			 s=textBox1->Text;
				 if (s=="0") textBox1->Text="2";
				 else
				 if (vergul && l<13)
					 textBox1->Text+="2"; else
				 if (l<12)
					textBox1->Text+="2";
		 }
private: System::Void button36_Click(System::Object^  sender, System::EventArgs^  e) {
			 int l=textBox1->Text->Length;
			 s=textBox1->Text;
				 if (s=="0") textBox1->Text="3";
				 else
				 if (vergul && l<13)
					 textBox1->Text+="3"; else
				 if (l<12)
					textBox1->Text+="3";
		 }
private: System::Void button43_Click(System::Object^  sender, System::EventArgs^  e) {
			 int l=textBox1->Text->Length;
			 s=textBox1->Text;
				 if (s=="0") textBox1->Text="4";
				 else
				 if (vergul && l<13)
					 textBox1->Text+="4"; else
				 if (l<12)
					textBox1->Text+="4";
		 }
private: System::Void button42_Click(System::Object^  sender, System::EventArgs^  e) {
			 int l=textBox1->Text->Length;
			 s=textBox1->Text;
				 if (s=="0") textBox1->Text="5";
				 else
				 if (vergul && l<13)
					 textBox1->Text+="5"; else
				 if (l<12)
					textBox1->Text+="5";
		 }
private: System::Void button41_Click(System::Object^  sender, System::EventArgs^  e) {
			 int l=textBox1->Text->Length;
			 s=textBox1->Text;
				 if (s=="0") textBox1->Text="6";
				 else
				 if (vergul && l<13)
					 textBox1->Text+="6"; else
				 if (l<12)
					textBox1->Text+="6";
		 }
private: System::Void button48_Click(System::Object^  sender, System::EventArgs^  e) {
			 int l=textBox1->Text->Length;
			 s=textBox1->Text;
				 if (s=="0") textBox1->Text="7";
				 else
				 if (vergul && l<13)
					 textBox1->Text+="7"; else
				 if (l<12)
					textBox1->Text+="7";
		 }
private: System::Void button47_Click(System::Object^  sender, System::EventArgs^  e) {
			 int l=textBox1->Text->Length;
			 s=textBox1->Text;
				 if (s=="0") textBox1->Text="8";
				 else
				 if (vergul && l<13)
					 textBox1->Text+="8"; else
				 if (l<12)
					textBox1->Text+="8";
		 }
private: System::Void button46_Click(System::Object^  sender, System::EventArgs^  e) {
			 int l=textBox1->Text->Length;
			 s=textBox1->Text;
				 if (s=="0") textBox1->Text="9";
				 else
				 if (vergul && l<13)
					 textBox1->Text+="9"; else
				 if (l<12)
					textBox1->Text+="9";
		 }
private: System::Void button33_Click(System::Object^  sender, System::EventArgs^  e) {
			 int l=textBox1->Text->Length;
			 s=textBox1->Text;
			 if (s=="0") {textBox1->Text="0,";vergul=true;}
				 else
				 if (vergul && l<13)
					 textBox1->Text+="0"; else
				 if (l<12)
					textBox1->Text+="0";
		 }
private: System::Void button32_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(!vergul) {textBox1->Text+=","; vergul = true;}
		 }

private: System::Void button30_Click(System::Object^  sender, System::EventArgs^  e) {
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
private: System::Void button24_Click(System::Object^  sender, System::EventArgs^  e) {
			textBox1->Text="0";
		 }
private: System::Void button18_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBox1->Text="0";
			 vergul=false;
			 bs=0;
			 is=0;
			 m=0;
		 }
private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBox1->Text=Convert::ToString(-1*Convert::ToDouble(textBox1->Text));
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBox1->Text=Convert::ToString(Math::Sqrt(Convert::ToDouble(textBox1->Text)));
		 }
private: System::Void button45_Click(System::Object^  sender, System::EventArgs^  e) {
			 bs=Convert::ToDouble(textBox1->Text);
			 textBox1->Text="0";
			 amal = '/';
		 }
private: System::Void button44_Click(System::Object^  sender, System::EventArgs^  e) {
			 is=Convert::ToDouble(textBox1->Text);
			 textBox1->Text=Convert::ToString(bs*is/100.0);
		 }
private: System::Void button40_Click(System::Object^  sender, System::EventArgs^  e) {
			 bs=Convert::ToDouble(textBox1->Text);
			 textBox1->Text="0";
			 amal = '*';
		 }
private: System::Void button39_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBox1->Text=Convert::ToString(1.0/Convert::ToDouble(textBox1->Text));
		 }
private: System::Void button35_Click(System::Object^  sender, System::EventArgs^  e) {
			 bs=Convert::ToDouble(textBox1->Text);
			 textBox1->Text="0";
			 amal = '-';
		 }
private: System::Void button31_Click(System::Object^  sender, System::EventArgs^  e) {
			 bs=Convert::ToDouble(textBox1->Text);
			 textBox1->Text="0";
			 amal = '+';
		 }
private: System::Void button53_Click(System::Object^  sender, System::EventArgs^  e) {
			 m=0;
			 label1->Visible=false;	
		 }
private: System::Void button52_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBox1->Text=Convert::ToString(m);
		 }
private: System::Void button51_Click(System::Object^  sender, System::EventArgs^  e) {
			 label1->Visible=true;
			 m=Convert::ToDouble(textBox1->Text);
		 }
private: System::Void button50_Click(System::Object^  sender, System::EventArgs^  e) {
			 label1->Visible=true;
			 m+=Convert::ToDouble(textBox1->Text);
		 }
private: System::Void button49_Click(System::Object^  sender, System::EventArgs^  e) {
			 label1->Visible=true;
			 m-=Convert::ToDouble(textBox1->Text);
		 }

private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(!inv){
				 button65->Visible=true;
				 button66->Visible=true;
				 button67->Visible=true;
				 button68->Visible=true;
				 button70->Visible=true;
				 button71->Visible=true;
				 button72->Visible=true;
				 button75->Visible=true;
				 button76->Visible=true;
				 button77->Visible=true;
				 
				 inv = true;
			 } else{
				 button65->Visible=false;
				 button66->Visible=false;
				 button67->Visible=false;
				 button68->Visible=false;
				 button70->Visible=false;
				 button71->Visible=false;
				 button72->Visible=false;
				 button75->Visible=false;
				 button76->Visible=false;
				 button77->Visible=false;
				 
				 inv=false;
			 }
		 }
private: System::Void Injener_Load(System::Object^  sender, System::EventArgs^  e) {
			 qavs=0;
		 }
private: System::Void button25_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBox1->Text=Convert::ToString(Math::Pow(10,Convert::ToDouble(textBox1->Text)));
			 vergul=false;
		 }
private: System::Void button19_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBox1->Text=Convert::ToString(Math::Log10(Convert::ToDouble(textBox1->Text)));
			 vergul=false;
		 }
private: System::Void button20_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBox1->Text=Convert::ToString(Math::Pow(Convert::ToDouble(textBox1->Text),3));
			 vergul=false;
		 }
private: System::Void button26_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBox1->Text=Convert::ToString(Math::Pow(Convert::ToDouble(textBox1->Text),1.0/3));
			 vergul=false;
		 }
private: System::Void button22_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBox1->Text=Convert::ToString(Math::Pow(Convert::ToDouble(textBox1->Text),2));
			 vergul=false;
		 }
private: System::Void button28_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (Convert::ToInt64(textBox1->Text)<21)
			 textBox1->Text=Convert::ToString(factorial(Convert::ToInt64(textBox1->Text))); else
			 MessageBox::Show("Bu kalkuyyator 20! gacha hisoblay oladi!","Ogohlantirish!",MessageBoxButtons::OK,MessageBoxIcon::Information);
			 vergul=false;
		 }
private: System::Void button23_Click(System::Object^  sender, System::EventArgs^  e) {
			 qavs++;
			 if(qavs!=0)
				 button2->Text="(="+Convert::ToString(qavs); else button2->Text="";
		 }
private: System::Void button29_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (qavs>0){
				qavs--;
				if(qavs!=0)
				 button2->Text="(="+Convert::ToString(qavs); else button2->Text="";
				is = Convert::ToDouble(textBox1->Text);
				switch (amal)
			 {
			 case '+': textBox1->Text=Convert::ToString(bs+is); break;
			 case '-': textBox1->Text=Convert::ToString(bs-is); break;
			 case '*': textBox1->Text=Convert::ToString(bs*is); break;
			 case '/': textBox1->Text=Convert::ToString(bs/is); break;
			 case 'M': textBox1->Text=Convert::ToString((int)bs%(int)is); break;
			 case 'p': textBox1->Text=Convert::ToString(Math::Pow(bs,is)); break;
			 case 'q': textBox1->Text=Convert::ToString(Math::Pow(bs,1/is)); break;
			 case 'e': textBox1->Text=Convert::ToString(bs*Math::Pow(10,is)); break;
			 default:
				 break;
			 }
			 }
			 vergul=false;
		 }
private: System::Void button34_Click(System::Object^  sender, System::EventArgs^  e) {
			 is=Convert::ToDouble(textBox1->Text);
			 switch (amal)
			 {
			 case '+': textBox1->Text=Convert::ToString(bs+is); break;
			 case '-': textBox1->Text=Convert::ToString(bs-is); break;
			 case '*': textBox1->Text=Convert::ToString(bs*is); break;
			 case '/': textBox1->Text=Convert::ToString(bs/is); break;
			 case 'M': textBox1->Text=Convert::ToString((int)bs%(int)is); break;
			 case 'p': textBox1->Text=Convert::ToString(Math::Pow(bs,is)); break;
			 case 'q': textBox1->Text=Convert::ToString(Math::Pow(bs,1/is)); break;
			 case 'e': textBox1->Text=Convert::ToString(bs*Math::Pow(10,is)); break;
			 default:
				 break;
			 }
			 vergul=false;
		 }
private: System::Void button13_Click(System::Object^  sender, System::EventArgs^  e) {
			 amal = 'M';
			 bs = Convert::ToDouble(textBox1->Text);
			 textBox1->Text="0";
			 vergul=false;
		 }
private: System::Void button21_Click(System::Object^  sender, System::EventArgs^  e) {
			 amal='p';
			 bs = Convert::ToDouble(textBox1->Text);
			 textBox1->Text="0";
			 vergul=false;
		 }
private: System::Void button27_Click(System::Object^  sender, System::EventArgs^  e) {
			 amal='q';
			 bs = Convert::ToDouble(textBox1->Text);
			 textBox1->Text="0";
			 vergul=false;
		 }
private: System::Void button17_Click(System::Object^  sender, System::EventArgs^  e) {
			textBox1->Text=Convert::ToString(Math::Log(Convert::ToDouble(textBox1->Text)));
			vergul=false;
		 }
private: System::Void button16_Click(System::Object^  sender, System::EventArgs^  e) {

		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBox1->Text=Convert::ToString((int)(Convert::ToDouble(textBox1->Text)));
			 vergul=false;
		 }
private: System::Void button77_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBox1->Text=Convert::ToString(Convert::ToDouble(textBox1->Text)-(int)(Convert::ToDouble(textBox1->Text)));
			 vergul=false;
		 }
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBox1->Text=Convert::ToString(Math::Acos(-1));
			 vergul=false;
		 }
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
			 amal='e';
			 bs = Convert::ToDouble(textBox1->Text);
			 textBox1->Text="0";
			 vergul=false;
		 }
private: System::Void button75_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBox1->Text=Convert::ToString(2*Math::Acos(-1));
			 vergul=false;
		 }
private: System::Void button68_Click(System::Object^  sender, System::EventArgs^  e) {

			 textBox1->Text=Convert::ToString(Math::Exp(Convert::ToDouble(textBox1->Text)));
			 vergul=false;
		 }
};
}