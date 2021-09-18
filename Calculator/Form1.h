#pragma once
#include"Oddiy.h"
#include"Injener.h"
#include"Programmist.h"

namespace Calculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	protected: 
	private: System::Windows::Forms::ToolStripMenuItem^  faylToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  oddiyToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  injenerToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  dasturchiToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  infoToolStripMenuItem;
	private: System::Windows::Forms::Panel^  panel1;

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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->faylToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->oddiyToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->injenerToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->dasturchiToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->infoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->faylToolStripMenuItem, 
				this->infoToolStripMenuItem});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(246, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// faylToolStripMenuItem
			// 
			this->faylToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->oddiyToolStripMenuItem, 
				this->injenerToolStripMenuItem, this->dasturchiToolStripMenuItem});
			this->faylToolStripMenuItem->Name = L"faylToolStripMenuItem";
			this->faylToolStripMenuItem->Size = System::Drawing::Size(40, 20);
			this->faylToolStripMenuItem->Text = L"Fayl";
			// 
			// oddiyToolStripMenuItem
			// 
			this->oddiyToolStripMenuItem->Name = L"oddiyToolStripMenuItem";
			this->oddiyToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->oddiyToolStripMenuItem->Text = L"Oddiy";
			this->oddiyToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::oddiyToolStripMenuItem_Click);
			// 
			// injenerToolStripMenuItem
			// 
			this->injenerToolStripMenuItem->Name = L"injenerToolStripMenuItem";
			this->injenerToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->injenerToolStripMenuItem->Text = L"Injener";
			this->injenerToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::injenerToolStripMenuItem_Click);
			// 
			// dasturchiToolStripMenuItem
			// 
			this->dasturchiToolStripMenuItem->Name = L"dasturchiToolStripMenuItem";
			this->dasturchiToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->dasturchiToolStripMenuItem->Text = L"Dasturchi";
			this->dasturchiToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::dasturchiToolStripMenuItem_Click);
			// 
			// infoToolStripMenuItem
			// 
			this->infoToolStripMenuItem->Name = L"infoToolStripMenuItem";
			this->infoToolStripMenuItem->Size = System::Drawing::Size(40, 20);
			this->infoToolStripMenuItem->Text = L"Info";
			// 
			// panel1
			// 
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(0, 24);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(246, 327);
			this->panel1->TabIndex = 1;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoValidate = System::Windows::Forms::AutoValidate::EnableAllowFocusChange;
			this->ClientSize = System::Drawing::Size(246, 351);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->Name = L"Form1";
			this->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Oddiy";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void oddiyToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
				 Form1::Width=262;
				 Form1::Height=390;
				 Text="Oddiy";
				 Oddiy ^ obekt = gcnew Oddiy();
				 Form1::panel1->Controls->Clear();
				 Form1::panel1->Controls->Add(obekt);
			 }
private: System::Void injenerToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			     Injener ^ obekt = gcnew Injener();
				 Form1::Width=507;
				 Form1::Height=382;
				 Text="Injener";
				 Form1::panel1->Controls->Clear();
				 Form1::panel1->Controls->Add(obekt);

		 }
private: System::Void dasturchiToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 Programmist^ obekt = gcnew Programmist();	 
			 Form1::Width=508;
				 Form1::Height=462;
				 Text="Dasturchi";
				 Form1::panel1->Controls->Clear();
				 Form1::panel1->Controls->Add(obekt);
		 }
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
				Form1::Width=262;
				 Form1::Height=390;
				 Oddiy ^ obekt = gcnew Oddiy();
				 Form1::panel1->Controls->Clear();
				 Form1::panel1->Controls->Add(obekt);
		 }
};
}

