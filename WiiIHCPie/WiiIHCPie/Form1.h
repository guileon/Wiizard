#pragma once
#include <dos.h>
#include <Windows.h>
#include "ZoomImage.h"
//include "CImg.h"
//using namespace cimg_library;

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
			zoomedImage = gcnew ZoomImage;
			zoomedImage->Show();
			InitializeComponent();
			this->loadedImage->MouseMove += gcnew System::Windows::Forms::MouseEventHandler( this, &Form1::PictureBox1_MouseMove );
			this->loadedImage->MouseDown += gcnew System::Windows::Forms::MouseEventHandler( this, &Form1::PictureBox1_MouseClicked );
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
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;




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
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->loadedImage))->BeginInit();
			this->SuspendLayout();
			// 
			// x
			// 
			this->x->Location = System::Drawing::Point(22, 41);
			this->x->Name = L"x";
			this->x->ReadOnly = true;
			this->x->Size = System::Drawing::Size(100, 20);
			this->x->TabIndex = 0;
			this->x->Visible = false;
			this->x->TextChanged += gcnew System::EventHandler(this, &Form1::x_TextChanged);
			// 
			// y
			// 
			this->y->Location = System::Drawing::Point(22, 67);
			this->y->Name = L"y";
			this->y->ReadOnly = true;
			this->y->Size = System::Drawing::Size(100, 20);
			this->y->TabIndex = 1;
			this->y->Visible = false;
			this->y->TextChanged += gcnew System::EventHandler(this, &Form1::y_TextChanged);
			// 
			// loadedImage
			// 
			this->loadedImage->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->loadedImage->Location = System::Drawing::Point(128, 12);
			this->loadedImage->Name = L"loadedImage";
			this->loadedImage->Size = System::Drawing::Size(277, 197);
			this->loadedImage->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->loadedImage->TabIndex = 2;
			this->loadedImage->TabStop = false;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(22, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Load Image";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(22, 93);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 4;
			this->button2->Text = L"zoomin";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Visible = false;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(22, 122);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 5;
			this->button3->Text = L"zoomout";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Visible = false;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(411, 212);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->loadedImage);
			this->Controls->Add(this->y);
			this->Controls->Add(this->x);
			this->Name = L"Form1";
			this->Text = L"Wiimage";
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
	static int size = 100;
	static Bitmap^ original=nullptr;
	static Bitmap^ image=nullptr;
	static Bitmap^ zoomZone=nullptr;
	static ZoomImage^ zoomedImage=nullptr;
	//int positionX,positionY;
	//int *imageMatrix[15000][15000];
	static int truePosX=0,truePosY=0;
	private: void PictureBox1_MouseMove( Object^ /*sender*/, System::Windows::Forms::MouseEventArgs^ e )
			 {
				// Update the mouse path that is drawn onto the Panel. 
				posX = e->X;
				posY = e->Y;
				truePosX = posX;
				truePosY = posY;
				//mousePath->AddLine( mouseX, mouseY, mouseX, mouseY );
				y->Text = posY.ToString();
				x->Text = posX.ToString();
				x->Refresh();
				y->Refresh();
				

				//loadedImage->Image = image;
				if(image!= nullptr )
				{
					posX = (posX*original->Width)/loadedImage->Size.Width;
					posY = (posY*original->Height)/loadedImage->Size.Height;

					zoomZone = gcnew Bitmap(size,size);
					image = gcnew Bitmap(original);					
					
					if(posX + size >= original->Width)
						posX = original->Width - size - 1;
					if(posY + size >= original->Height)
						posY = original->Height - size - 1;

					for(int i=0 ; i < size ; i++)
						for(int j=0 ; j < size ; j++)
							if(posX+i < original->Width && posY+j < original->Height)
								zoomZone->SetPixel(i,j,image->GetPixel(i+posX,j+posY));
					//zoomImage->Image = zoomZone;
					
					for(int i=0 ; i < size ; i++)
					{
						if (posX+i < image->Width && posY+size < image->Height)
							image->SetPixel(posX+i,posY, Color::Red);
						if (posX+i < image->Width && posY+size < image->Height)
							image->SetPixel(posX+i,posY+size, Color::Red);
					}

					for(int i=0 ; i < size ; i++)
					{
						if (posX+size < image->Width && posY+i < image->Height)
							image->SetPixel(posX,posY+i, Color::Red);
						if (posX+size < image->Width && posY+i < image->Height)
							image->SetPixel(posX+size,posY+i, Color::Red);
					}
				}


				
				//loadedImage->Image = image;

				loadedImage->Refresh();
				zoomedImage->changeImage(zoomZone);
				//positionX = loadedImage->Location.X;
				//positionY = loadedImage->Location.Y;
			 }
	
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				openFileDialog1->FileName = ""; 
				openFileDialog1->Filter = "jpg files (*.jpg)|*.jpg|png files (*.png)|*.png|All files (*.*)|*.*";
				openFileDialog1->RestoreDirectory = true;
				if(openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
				{
					image = gcnew Bitmap(openFileDialog1->FileName);

					loadedImage->Image = image;
					//loadedImage->BackgroundImage = image;
					original = gcnew Bitmap(image);
					this->loadedImage->Refresh();
				}
			 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 size-=10;
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 size+=10;
		 }

		 
private: void PictureBox1_MouseClicked( Object^ /*sender*/, System::Windows::Forms::MouseEventArgs^ e )
		 {
			switch ( e->Button )
			 {
				case System::Windows::Forms::MouseButtons::Right:
					size += 10;
				   break;

				case System::Windows::Forms::MouseButtons::Left:
					size -= 10;
				   break;
			 }

		 }
};
}

