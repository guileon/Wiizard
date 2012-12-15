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
			this->loadedImage->MouseMove += gcnew System::Windows::Forms::MouseEventHandler( this, &Form1::PictureBox1_MouseMove );
			
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
	private: System::Windows::Forms::PictureBox^  loadedImage;

	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;


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
			this->loadedImage = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->loadedImage))->BeginInit();
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
			// loadedImage
			// 
			this->loadedImage->Location = System::Drawing::Point(128, 12);
			this->loadedImage->Name = L"loadedImage";
			this->loadedImage->Size = System::Drawing::Size(277, 240);
			this->loadedImage->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->loadedImage->TabIndex = 2;
			this->loadedImage->TabStop = false;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(22, 64);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 3;
			this->button1->Text = L"load image";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(417, 264);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->loadedImage);
			this->Controls->Add(this->y);
			this->Controls->Add(this->x);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->loadedImage))->EndInit();
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
	static int posX=0,posY=0;
	static Bitmap^ image=nullptr;
	int positionX,positionY;
	private: void PictureBox1_MouseMove( Object^ /*sender*/, System::Windows::Forms::MouseEventArgs^ e )
			 {
				// Update the mouse path that is drawn onto the Panel. 
				posX = e->X;
				posY = e->Y;
				//mousePath->AddLine( mouseX, mouseY, mouseX, mouseY );
				y->Text = posY.ToString();
				x->Text = posX.ToString();
				x->Refresh();
				y->Refresh();
				
				if(image!= nullptr)
				{
					posX = e->X;
					posY = e->Y;
					for(int i=0 ; i < 55 ; i++)
					{
						if (posX+i < image->Width && posY+i < image->Height)
							image->SetPixel(posX+i,posY+i, Color::Red);
					}

				}
				loadedImage->Image = image;
				positionX = loadedImage->Location.X;
				positionY = loadedImage->Location.Y;
			 }
	
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				if(openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
				{
					//System::IO::StreamReader ^ sr = gcnew
					//System::IO::StreamReader(openFileDialog1->FileName);
					//MessageBox::Show(sr->ReadToEnd());
					//sr->Close();
					image = gcnew Bitmap(openFileDialog1->FileName);
					//this->loadedImage->Image->FromFile(openFileDialog1->FileName);
					//image = gcnew Bitmap(openFileDialog1->FileName);
					loadedImage->Image = image;
					this->loadedImage->Refresh();
				}
			 }
};
}

