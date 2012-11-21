#pragma once

namespace gambaa {

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
	private: System::Windows::Forms::PictureBox^  thumb;
	private: System::Windows::Forms::PictureBox^  zoomin;
	private: System::Windows::Forms::Button^  readbtn;
	protected: 

	protected: 


	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;

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
			this->thumb = (gcnew System::Windows::Forms::PictureBox());
			this->zoomin = (gcnew System::Windows::Forms::PictureBox());
			this->readbtn = (gcnew System::Windows::Forms::Button());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->thumb))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->zoomin))->BeginInit();
			this->SuspendLayout();
			// 
			// thumb
			// 
			this->thumb->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->thumb->Location = System::Drawing::Point(12, 12);
			this->thumb->Name = L"thumb";
			this->thumb->Size = System::Drawing::Size(222, 152);
			this->thumb->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->thumb->TabIndex = 0;
			this->thumb->TabStop = false;
			// 
			// zoomin
			// 
			this->zoomin->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->zoomin->Location = System::Drawing::Point(240, 12);
			this->zoomin->Name = L"zoomin";
			this->zoomin->Size = System::Drawing::Size(389, 299);
			this->zoomin->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->zoomin->TabIndex = 1;
			this->zoomin->TabStop = false;
			// 
			// readbtn
			// 
			this->readbtn->Location = System::Drawing::Point(12, 170);
			this->readbtn->Name = L"readbtn";
			this->readbtn->Size = System::Drawing::Size(222, 23);
			this->readbtn->TabIndex = 2;
			this->readbtn->Text = L"Read File";
			this->readbtn->UseVisualStyleBackColor = true;
			this->readbtn->Click += gcnew System::EventHandler(this, &Form1::readbtn_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(30, 246);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(45, 23);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Right";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(91, 246);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(45, 23);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Left";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(59, 217);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(45, 23);
			this->button3->TabIndex = 5;
			this->button3->Text = L"Up";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(59, 275);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(45, 23);
			this->button4->TabIndex = 6;
			this->button4->Text = L"Down";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(149, 199);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(85, 23);
			this->button5->TabIndex = 7;
			this->button5->Text = L"Zoom-In";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(149, 228);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(85, 23);
			this->button6->TabIndex = 8;
			this->button6->Text = L"Zoom-Out";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(641, 323);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->readbtn);
			this->Controls->Add(this->zoomin);
			this->Controls->Add(this->thumb);
			this->Name = L"Form1";
			this->Text = L"Wiimage";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->thumb))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->zoomin))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion


		static int x=560,y=650;
		static int sizeX=100,sizeY=100;
		static Bitmap^ image;
		


		private: void redraw()
				 {
				 Bitmap^ zoom = gcnew Bitmap(sizeX,sizeY); 				 
				 image = gcnew Bitmap("C:\\Users\\Guilherme\\Pictures\\minbut.bmp",true);
				 
				 
				 int i,j;
				 for(i=x ; i< x+sizeX  ; i++ )
					for(j=y ; j< y+sizeY ; j++)
					{
						zoom->SetPixel(i-x,j-y,image->GetPixel(i,j));
					}

				 for(i=x ; i< x+sizeX  ; i++ )
					for(j=y ; j< y+sizeY ; j++)
					{
						if(i==x || i==x+sizeX-1 || j==y || j==y+sizeY-1)
						{
							for(int k=0;k<5;k++)
								for(int l=0;l<5;l++)
									image->SetPixel(i+k,j+l,Color::FromName("Red"));
							
						}
					}

				thumb->Image = image;
				zoomin->Image = zoom;
				 }
	private: System::Void readbtn_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 redraw();
			 }
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 if (y>0) y-=5;
			 redraw();
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 if (x>0) x-=5;
			 redraw();
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			if (x<10000) x+=5;
			 redraw();
		 }
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 if (y<10000) y+=5;
			 redraw();
		 }
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 sizeX-=15;
			 sizeY-=15;
			 redraw();
		 }
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 sizeX+=15;
			 sizeY+=15;
			 redraw();
		 }
};
}

