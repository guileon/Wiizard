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
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler( this, &Form1::Form1_MouseMove );
			
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
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 264);
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

	private: void Form1_MouseMove( Object^ /*sender*/, System::Windows::Forms::MouseEventArgs^ e )
			 {
				// Update the mouse path that is drawn onto the Panel. 
				int posX = e->X;
				int posY = e->Y;
				//mousePath->AddLine( mouseX, mouseY, mouseX, mouseY );
				y->Text = posY.ToString();
				x->Text = posX.ToString();
				x->Refresh();
				y->Refresh();
			 }
	};
}

