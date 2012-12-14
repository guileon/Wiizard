#pragma once
#include <dos.h>
#include <Windows.h>
namespace WiiIHCPie {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  x;
	protected: 
	private: System::Windows::Forms::TextBox^  y;
	private: System::Windows::Forms::Button^  start;

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
			this->x = (gcnew System::Windows::Forms::TextBox());
			this->y = (gcnew System::Windows::Forms::TextBox());
			this->start = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// x
			// 
			this->x->Location = System::Drawing::Point(22, 12);
			this->x->Name = L"x";
			this->x->ReadOnly = true;
			this->x->Size = System::Drawing::Size(100, 20);
			this->x->TabIndex = 0;
			this->x->TextChanged += gcnew System::EventHandler(this, &Form1::x_TextChanged);
			// 
			// y
			// 
			this->y->Location = System::Drawing::Point(22, 38);
			this->y->Name = L"y";
			this->y->ReadOnly = true;
			this->y->Size = System::Drawing::Size(100, 20);
			this->y->TabIndex = 1;
			this->y->TextChanged += gcnew System::EventHandler(this, &Form1::y_TextChanged);
			// 
			// start
			// 
			this->start->Location = System::Drawing::Point(22, 64);
			this->start->Name = L"start";
			this->start->Size = System::Drawing::Size(75, 23);
			this->start->TabIndex = 2;
			this->start->Text = L"Start";
			this->start->UseVisualStyleBackColor = true;
			this->start->Click += gcnew System::EventHandler(this, &Form1::start_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 264);
			this->Controls->Add(this->start);
			this->Controls->Add(this->y);
			this->Controls->Add(this->x);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) 
			 {

			 }

	private: System::Void x_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void y_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void start_Click(System::Object^  sender, System::EventArgs^  e) {
<<<<<<< HEAD
				 while(true)//for(int i=0 ; i < 500 ; i++)
				 {
=======
				 //for(int i=0 ; i < 10 ; i++)
				 //{
>>>>>>> FUNCIONOU CARALHO
					//this->Cursor = gcnew System::Windows::Forms::Cursor( ::Cursor::Current->Handle );
					//::Cursor::Position = Point(::Cursor::Position.X - 50,::Cursor::Position.Y - 50);
					//::Cursor::Clip = Rectangle(this->Location,this->Size);
					
					x->Text = Control::MousePosition.X.ToString();
					//y->Text = Control::MousePosition.Y.ToString();
					//Sleep(5000);
					//y->Text = Control::MousePosition.X.ToString();
					//y->Text = Control::MousePosition.Y.ToString();
					//Sleep(5000);
					//x->Text = Control::MousePosition.X.ToString();
					//y->Text = Control::MousePosition.Y.ToString();
				 //}
				while(true)
				{
					int lastPosX;
					int posX = 0;
					int lastPosY;
					int posY = 0;

					lastPosX = posX;
					posX = Control::MousePosition.X;
					lastPosY = posY;
					posY = Control::MousePosition.Y;

					if (lastPosX != posX || lastPosY != posY)
					{
						y->Text = posY.ToString();
						x->Text = posX.ToString();
						x->Refresh();
						y->Refresh();
					}
				}

			 }
	};
}

