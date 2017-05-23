#pragma once
#include<string>
#include<string.h>
#include "windows.h"
#include<stack>

namespace Sorting_Animation2 {

	using namespace System;
	using namespace System::Threading;
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
	private: System::Windows::Forms::TextBox^  D3;
	protected:

	protected:

	protected:

	protected:

	private: System::Windows::Forms::TextBox^  D7;


	private: System::Windows::Forms::TextBox^  D6;

	private: System::Windows::Forms::TextBox^  D2;
	private: System::Windows::Forms::TextBox^  D5;


	private: System::Windows::Forms::TextBox^  D4;
	private: System::Windows::Forms::TextBox^  D1;
	private: System::ComponentModel::IContainer^  components;





	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>

		//-------------------------------------------------------------------------------------------------------------------------------------
		//-------------------------------------------------------------------------------------------------------------------------------------
	private:
		int arrow1X = 34;
		int arrow2X = 67;
		int arrow3X;
		int smallestNum = 999999;
		int MaxNum = -9999;
		int saveLoc=0;
		int OperationType = 1;
		int NumberOfOperations = 0;
		bool MovementType = false;
		bool LinearFound = true;
		int timeInterval = 1000;
		int mySteps = 0;
		int TotalSteps = 0;
		bool StepsCalculated = false;
		bool TestChecker = false;
		int pause = 1;
		//-------------------------------------------------------------------------------------------------------------------------------------
		//-------------------------------------------------------------------------------------------------------------------------------------

	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::PictureBox^  Arrow1;
	private: System::Windows::Forms::PictureBox^  Arrow2;
	private: System::Windows::Forms::Button^  btnNext;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::Label^  Minlbl;
	private: System::Windows::Forms::TextBox^  txtMinNum;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  exitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  restartToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  sortToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  bubbleSortToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  selectionSortToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  aboutToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  exitToolStripMenuItem1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  txtMaxCurrent;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::TextBox^  D8;
	private: System::Windows::Forms::TextBox^  D9;
	private: System::Windows::Forms::TextBox^  D10;
	private: System::Windows::Forms::TextBox^  D11;
	private: System::Windows::Forms::TextBox^  D12;
	private: System::Windows::Forms::TextBox^  D15;
	private: System::Windows::Forms::TextBox^  D17;
	private: System::Windows::Forms::TextBox^  D16;
	private: System::Windows::Forms::TextBox^  D21;
	private: System::Windows::Forms::TextBox^  D18;
	private: System::Windows::Forms::TextBox^  D19;
	private: System::Windows::Forms::TextBox^  D20;
	private: System::Windows::Forms::TextBox^  D22;
	private: System::Windows::Forms::TextBox^  D23;
	private: System::Windows::Forms::TextBox^  D24;
	private: System::Windows::Forms::TextBox^  D25;
	private: System::Windows::Forms::TextBox^  D26;
	private: System::Windows::Forms::TextBox^  D27;
	private: System::Windows::Forms::Button^  btnAdd;
	private: System::Windows::Forms::Button^  btnRemove;
	private: System::Windows::Forms::TextBox^  D13;
	private: System::Windows::Forms::TextBox^  D14;
	private: System::Windows::Forms::RadioButton^  radioButton4;
	private: System::Windows::Forms::RadioButton^  radioButton3;
	private: System::Windows::Forms::Label^  lblSearch;
	private: System::Windows::Forms::TextBox^  txtSearch;
	private: System::Windows::Forms::TextBox^  txtOperations;
	private: System::Windows::Forms::Label^  lblOperations;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::PictureBox^  Arrow3;
	private: System::Windows::Forms::ToolStripMenuItem^  searchToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  linearSearchToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  binarySearchToolStripMenuItem;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::ToolStripMenuItem^  movementTypeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  stepbyStepToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  animationToolStripMenuItem;
	private: System::Windows::Forms::TrackBar^  trackBar1;
	private: System::Windows::Forms::Label^  lblSlow;
	private: System::Windows::Forms::Label^  lblFast;
	private: System::Windows::Forms::ProgressBar^  progressBar1;
private: System::Windows::Forms::Button^  btnPause;
private: System::Windows::Forms::Label^  lblPercentage;






	private: System::Windows::Forms::Button^  btnRandom;


#pragma region Windows Form Designer generated code
			 /// <summary>
			 /// Required method for Designer support - do not modify
			 /// the contents of this method with the code editor.
			 /// </summary>
			 void InitializeComponent(void)
			 {
				 this->components = (gcnew System::ComponentModel::Container());
				 System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
				 this->D3 = (gcnew System::Windows::Forms::TextBox());
				 this->D7 = (gcnew System::Windows::Forms::TextBox());
				 this->D6 = (gcnew System::Windows::Forms::TextBox());
				 this->D2 = (gcnew System::Windows::Forms::TextBox());
				 this->D5 = (gcnew System::Windows::Forms::TextBox());
				 this->D4 = (gcnew System::Windows::Forms::TextBox());
				 this->D1 = (gcnew System::Windows::Forms::TextBox());
				 this->button1 = (gcnew System::Windows::Forms::Button());
				 this->Arrow1 = (gcnew System::Windows::Forms::PictureBox());
				 this->Arrow2 = (gcnew System::Windows::Forms::PictureBox());
				 this->btnNext = (gcnew System::Windows::Forms::Button());
				 this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
				 this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
				 this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
				 this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
				 this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
				 this->Minlbl = (gcnew System::Windows::Forms::Label());
				 this->txtMinNum = (gcnew System::Windows::Forms::TextBox());
				 this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
				 this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				 this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				 this->restartToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				 this->exitToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
				 this->sortToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				 this->bubbleSortToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				 this->selectionSortToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				 this->searchToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				 this->linearSearchToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				 this->binarySearchToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				 this->movementTypeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				 this->stepbyStepToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				 this->animationToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				 this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				 this->label1 = (gcnew System::Windows::Forms::Label());
				 this->label2 = (gcnew System::Windows::Forms::Label());
				 this->txtMaxCurrent = (gcnew System::Windows::Forms::TextBox());
				 this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
				 this->D8 = (gcnew System::Windows::Forms::TextBox());
				 this->D9 = (gcnew System::Windows::Forms::TextBox());
				 this->D10 = (gcnew System::Windows::Forms::TextBox());
				 this->D11 = (gcnew System::Windows::Forms::TextBox());
				 this->D12 = (gcnew System::Windows::Forms::TextBox());
				 this->D15 = (gcnew System::Windows::Forms::TextBox());
				 this->D17 = (gcnew System::Windows::Forms::TextBox());
				 this->D16 = (gcnew System::Windows::Forms::TextBox());
				 this->D21 = (gcnew System::Windows::Forms::TextBox());
				 this->D18 = (gcnew System::Windows::Forms::TextBox());
				 this->D19 = (gcnew System::Windows::Forms::TextBox());
				 this->D20 = (gcnew System::Windows::Forms::TextBox());
				 this->D22 = (gcnew System::Windows::Forms::TextBox());
				 this->D23 = (gcnew System::Windows::Forms::TextBox());
				 this->D24 = (gcnew System::Windows::Forms::TextBox());
				 this->D25 = (gcnew System::Windows::Forms::TextBox());
				 this->D26 = (gcnew System::Windows::Forms::TextBox());
				 this->D27 = (gcnew System::Windows::Forms::TextBox());
				 this->btnAdd = (gcnew System::Windows::Forms::Button());
				 this->btnRemove = (gcnew System::Windows::Forms::Button());
				 this->D13 = (gcnew System::Windows::Forms::TextBox());
				 this->D14 = (gcnew System::Windows::Forms::TextBox());
				 this->btnRandom = (gcnew System::Windows::Forms::Button());
				 this->lblSearch = (gcnew System::Windows::Forms::Label());
				 this->txtSearch = (gcnew System::Windows::Forms::TextBox());
				 this->txtOperations = (gcnew System::Windows::Forms::TextBox());
				 this->lblOperations = (gcnew System::Windows::Forms::Label());
				 this->label3 = (gcnew System::Windows::Forms::Label());
				 this->textBox2 = (gcnew System::Windows::Forms::TextBox());
				 this->Arrow3 = (gcnew System::Windows::Forms::PictureBox());
				 this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
				 this->trackBar1 = (gcnew System::Windows::Forms::TrackBar());
				 this->lblSlow = (gcnew System::Windows::Forms::Label());
				 this->lblFast = (gcnew System::Windows::Forms::Label());
				 this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
				 this->btnPause = (gcnew System::Windows::Forms::Button());
				 this->lblPercentage = (gcnew System::Windows::Forms::Label());
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Arrow1))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Arrow2))->BeginInit();
				 this->groupBox1->SuspendLayout();
				 this->menuStrip1->SuspendLayout();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Arrow3))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->BeginInit();
				 this->SuspendLayout();
				 // 
				 // D3
				 // 
				 this->D3->Location = System::Drawing::Point(100, 44);
				 this->D3->Name = L"D3";
				 this->D3->Size = System::Drawing::Size(27, 20);
				 this->D3->TabIndex = 2;
				 this->D3->Click += gcnew System::EventHandler(this, &MyForm::D3_Click);
				 this->D3->TextChanged += gcnew System::EventHandler(this, &MyForm::D3_TextChanged);
				 // 
				 // D7
				 // 
				 this->D7->Location = System::Drawing::Point(232, 44);
				 this->D7->Name = L"D7";
				 this->D7->Size = System::Drawing::Size(27, 20);
				 this->D7->TabIndex = 3;
				 this->D7->Click += gcnew System::EventHandler(this, &MyForm::D7_Click);
				 this->D7->TextChanged += gcnew System::EventHandler(this, &MyForm::D7_TextChanged);
				 // 
				 // D6
				 // 
				 this->D6->Location = System::Drawing::Point(199, 44);
				 this->D6->Name = L"D6";
				 this->D6->Size = System::Drawing::Size(27, 20);
				 this->D6->TabIndex = 4;
				 this->D6->Click += gcnew System::EventHandler(this, &MyForm::D6_Click);
				 this->D6->TextChanged += gcnew System::EventHandler(this, &MyForm::D6_TextChanged);
				 // 
				 // D2
				 // 
				 this->D2->Location = System::Drawing::Point(67, 44);
				 this->D2->Name = L"D2";
				 this->D2->Size = System::Drawing::Size(27, 20);
				 this->D2->TabIndex = 5;
				 this->D2->Click += gcnew System::EventHandler(this, &MyForm::D2_Click);
				 this->D2->TextChanged += gcnew System::EventHandler(this, &MyForm::D2_TextChanged);
				 // 
				 // D5
				 // 
				 this->D5->Location = System::Drawing::Point(166, 44);
				 this->D5->Name = L"D5";
				 this->D5->Size = System::Drawing::Size(27, 20);
				 this->D5->TabIndex = 6;
				 this->D5->Click += gcnew System::EventHandler(this, &MyForm::D5_Click);
				 this->D5->TextChanged += gcnew System::EventHandler(this, &MyForm::D5_TextChanged);
				 // 
				 // D4
				 // 
				 this->D4->Location = System::Drawing::Point(133, 44);
				 this->D4->Name = L"D4";
				 this->D4->Size = System::Drawing::Size(27, 20);
				 this->D4->TabIndex = 7;
				 this->D4->Click += gcnew System::EventHandler(this, &MyForm::D4_Click);
				 this->D4->TextChanged += gcnew System::EventHandler(this, &MyForm::D4_TextChanged);
				 // 
				 // D1
				 // 
				 this->D1->Location = System::Drawing::Point(34, 44);
				 this->D1->Name = L"D1";
				 this->D1->Size = System::Drawing::Size(27, 20);
				 this->D1->TabIndex = 8;
				 this->D1->Click += gcnew System::EventHandler(this, &MyForm::D1_Click);
				 this->D1->TextChanged += gcnew System::EventHandler(this, &MyForm::D1_TextChanged);
				 // 
				 // button1
				 // 
				 this->button1->Location = System::Drawing::Point(12, 382);
				 this->button1->Name = L"button1";
				 this->button1->Size = System::Drawing::Size(103, 38);
				 this->button1->TabIndex = 9;
				 this->button1->Text = L"E&xit";
				 this->button1->UseVisualStyleBackColor = true;
				 this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
				 // 
				 // Arrow1
				 // 
				 this->Arrow1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Arrow1.Image")));
				 this->Arrow1->Location = System::Drawing::Point(34, 70);
				 this->Arrow1->Name = L"Arrow1";
				 this->Arrow1->Size = System::Drawing::Size(27, 29);
				 this->Arrow1->TabIndex = 10;
				 this->Arrow1->TabStop = false;
				 // 
				 // Arrow2
				 // 
				 this->Arrow2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Arrow2.Image")));
				 this->Arrow2->Location = System::Drawing::Point(67, 70);
				 this->Arrow2->Name = L"Arrow2";
				 this->Arrow2->Size = System::Drawing::Size(27, 29);
				 this->Arrow2->TabIndex = 11;
				 this->Arrow2->TabStop = false;
				 // 
				 // btnNext
				 // 
				 this->btnNext->Location = System::Drawing::Point(841, 382);
				 this->btnNext->Name = L"btnNext";
				 this->btnNext->Size = System::Drawing::Size(103, 38);
				 this->btnNext->TabIndex = 12;
				 this->btnNext->Text = L"Next";
				 this->btnNext->UseVisualStyleBackColor = true;
				 this->btnNext->Click += gcnew System::EventHandler(this, &MyForm::btnNext_Click);
				 // 
				 // groupBox1
				 // 
				 this->groupBox1->Controls->Add(this->radioButton4);
				 this->groupBox1->Controls->Add(this->radioButton2);
				 this->groupBox1->Controls->Add(this->radioButton3);
				 this->groupBox1->Controls->Add(this->radioButton1);
				 this->groupBox1->Location = System::Drawing::Point(34, 263);
				 this->groupBox1->Name = L"groupBox1";
				 this->groupBox1->Size = System::Drawing::Size(885, 113);
				 this->groupBox1->TabIndex = 13;
				 this->groupBox1->TabStop = false;
				 this->groupBox1->Text = L"Operation Type";
				 // 
				 // radioButton4
				 // 
				 this->radioButton4->AutoSize = true;
				 this->radioButton4->Location = System::Drawing::Point(8, 88);
				 this->radioButton4->Name = L"radioButton4";
				 this->radioButton4->Size = System::Drawing::Size(91, 17);
				 this->radioButton4->TabIndex = 1;
				 this->radioButton4->TabStop = true;
				 this->radioButton4->Text = L"Binary Search";
				 this->radioButton4->UseVisualStyleBackColor = true;
				 this->radioButton4->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton4_CheckedChanged);
				 // 
				 // radioButton2
				 // 
				 this->radioButton2->AutoSize = true;
				 this->radioButton2->Location = System::Drawing::Point(8, 42);
				 this->radioButton2->Name = L"radioButton2";
				 this->radioButton2->Size = System::Drawing::Size(91, 17);
				 this->radioButton2->TabIndex = 1;
				 this->radioButton2->Text = L"Selection Sort";
				 this->radioButton2->UseVisualStyleBackColor = true;
				 this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton2_CheckedChanged);
				 // 
				 // radioButton3
				 // 
				 this->radioButton3->AutoSize = true;
				 this->radioButton3->Location = System::Drawing::Point(8, 65);
				 this->radioButton3->Name = L"radioButton3";
				 this->radioButton3->Size = System::Drawing::Size(91, 17);
				 this->radioButton3->TabIndex = 0;
				 this->radioButton3->TabStop = true;
				 this->radioButton3->Text = L"Linear Search";
				 this->radioButton3->UseVisualStyleBackColor = true;
				 this->radioButton3->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton3_CheckedChanged);
				 // 
				 // radioButton1
				 // 
				 this->radioButton1->AutoSize = true;
				 this->radioButton1->Checked = true;
				 this->radioButton1->Location = System::Drawing::Point(8, 19);
				 this->radioButton1->Name = L"radioButton1";
				 this->radioButton1->Size = System::Drawing::Size(80, 17);
				 this->radioButton1->TabIndex = 0;
				 this->radioButton1->TabStop = true;
				 this->radioButton1->Text = L"Bubble Sort";
				 this->radioButton1->UseVisualStyleBackColor = true;
				 this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton1_CheckedChanged);
				 // 
				 // Minlbl
				 // 
				 this->Minlbl->AutoSize = true;
				 this->Minlbl->Location = System::Drawing::Point(559, 124);
				 this->Minlbl->Name = L"Minlbl";
				 this->Minlbl->Size = System::Drawing::Size(88, 13);
				 this->Minlbl->TabIndex = 14;
				 this->Minlbl->Text = L"Minimum Number";
				 // 
				 // txtMinNum
				 // 
				 this->txtMinNum->Enabled = false;
				 this->txtMinNum->Location = System::Drawing::Point(520, 121);
				 this->txtMinNum->Name = L"txtMinNum";
				 this->txtMinNum->Size = System::Drawing::Size(33, 20);
				 this->txtMinNum->TabIndex = 15;
				 // 
				 // menuStrip1
				 // 
				 this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
					 this->fileToolStripMenuItem,
						 this->sortToolStripMenuItem, this->searchToolStripMenuItem, this->movementTypeToolStripMenuItem, this->aboutToolStripMenuItem
				 });
				 this->menuStrip1->Location = System::Drawing::Point(0, 0);
				 this->menuStrip1->Name = L"menuStrip1";
				 this->menuStrip1->Size = System::Drawing::Size(958, 24);
				 this->menuStrip1->TabIndex = 16;
				 this->menuStrip1->Text = L"menuStrip1";
				 // 
				 // fileToolStripMenuItem
				 // 
				 this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
					 this->exitToolStripMenuItem,
						 this->restartToolStripMenuItem, this->exitToolStripMenuItem1
				 });
				 this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
				 this->fileToolStripMenuItem->Size = System::Drawing::Size(37, 20);
				 this->fileToolStripMenuItem->Text = L"&File";
				 // 
				 // exitToolStripMenuItem
				 // 
				 this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
				 this->exitToolStripMenuItem->Size = System::Drawing::Size(110, 22);
				 this->exitToolStripMenuItem->Text = L"New";
				 this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::exitToolStripMenuItem_Click);
				 // 
				 // restartToolStripMenuItem
				 // 
				 this->restartToolStripMenuItem->Name = L"restartToolStripMenuItem";
				 this->restartToolStripMenuItem->Size = System::Drawing::Size(110, 22);
				 this->restartToolStripMenuItem->Text = L"Restart";
				 this->restartToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::restartToolStripMenuItem_Click);
				 // 
				 // exitToolStripMenuItem1
				 // 
				 this->exitToolStripMenuItem1->Name = L"exitToolStripMenuItem1";
				 this->exitToolStripMenuItem1->Size = System::Drawing::Size(110, 22);
				 this->exitToolStripMenuItem1->Text = L"E&xit";
				 this->exitToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::exitToolStripMenuItem1_Click);
				 // 
				 // sortToolStripMenuItem
				 // 
				 this->sortToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
					 this->bubbleSortToolStripMenuItem,
						 this->selectionSortToolStripMenuItem
				 });
				 this->sortToolStripMenuItem->Name = L"sortToolStripMenuItem";
				 this->sortToolStripMenuItem->Size = System::Drawing::Size(40, 20);
				 this->sortToolStripMenuItem->Text = L"Sort";
				 // 
				 // bubbleSortToolStripMenuItem
				 // 
				 this->bubbleSortToolStripMenuItem->Name = L"bubbleSortToolStripMenuItem";
				 this->bubbleSortToolStripMenuItem->Size = System::Drawing::Size(146, 22);
				 this->bubbleSortToolStripMenuItem->Text = L"Bubble Sort";
				 this->bubbleSortToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::bubbleSortToolStripMenuItem_Click);
				 // 
				 // selectionSortToolStripMenuItem
				 // 
				 this->selectionSortToolStripMenuItem->Name = L"selectionSortToolStripMenuItem";
				 this->selectionSortToolStripMenuItem->Size = System::Drawing::Size(146, 22);
				 this->selectionSortToolStripMenuItem->Text = L"Selection Sort";
				 this->selectionSortToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::selectionSortToolStripMenuItem_Click);
				 // 
				 // searchToolStripMenuItem
				 // 
				 this->searchToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
					 this->linearSearchToolStripMenuItem,
						 this->binarySearchToolStripMenuItem
				 });
				 this->searchToolStripMenuItem->Name = L"searchToolStripMenuItem";
				 this->searchToolStripMenuItem->Size = System::Drawing::Size(54, 20);
				 this->searchToolStripMenuItem->Text = L"Search";
				 // 
				 // linearSearchToolStripMenuItem
				 // 
				 this->linearSearchToolStripMenuItem->Name = L"linearSearchToolStripMenuItem";
				 this->linearSearchToolStripMenuItem->Size = System::Drawing::Size(145, 22);
				 this->linearSearchToolStripMenuItem->Text = L"Linear Search";
				 this->linearSearchToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::linearSearchToolStripMenuItem_Click);
				 // 
				 // binarySearchToolStripMenuItem
				 // 
				 this->binarySearchToolStripMenuItem->Name = L"binarySearchToolStripMenuItem";
				 this->binarySearchToolStripMenuItem->Size = System::Drawing::Size(145, 22);
				 this->binarySearchToolStripMenuItem->Text = L"Binary Search";
				 this->binarySearchToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::binarySearchToolStripMenuItem_Click);
				 // 
				 // movementTypeToolStripMenuItem
				 // 
				 this->movementTypeToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
					 this->stepbyStepToolStripMenuItem,
						 this->animationToolStripMenuItem
				 });
				 this->movementTypeToolStripMenuItem->Name = L"movementTypeToolStripMenuItem";
				 this->movementTypeToolStripMenuItem->Size = System::Drawing::Size(103, 20);
				 this->movementTypeToolStripMenuItem->Text = L"Movement type";
				 // 
				 // stepbyStepToolStripMenuItem
				 // 
				 this->stepbyStepToolStripMenuItem->Name = L"stepbyStepToolStripMenuItem";
				 this->stepbyStepToolStripMenuItem->Size = System::Drawing::Size(143, 22);
				 this->stepbyStepToolStripMenuItem->Text = L"Step-by-Step";
				 this->stepbyStepToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::stepbyStepToolStripMenuItem_Click);
				 // 
				 // animationToolStripMenuItem
				 // 
				 this->animationToolStripMenuItem->Name = L"animationToolStripMenuItem";
				 this->animationToolStripMenuItem->Size = System::Drawing::Size(143, 22);
				 this->animationToolStripMenuItem->Text = L"Animation";
				 this->animationToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::animationToolStripMenuItem_Click);
				 // 
				 // aboutToolStripMenuItem
				 // 
				 this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
				 this->aboutToolStripMenuItem->Size = System::Drawing::Size(52, 20);
				 this->aboutToolStripMenuItem->Text = L"About";
				 this->aboutToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::aboutToolStripMenuItem_Click);
				 // 
				 // label1
				 // 
				 this->label1->AutoSize = true;
				 this->label1->Location = System::Drawing::Point(461, 28);
				 this->label1->Name = L"label1";
				 this->label1->Size = System::Drawing::Size(62, 13);
				 this->label1->TabIndex = 17;
				 this->label1->Text = L"Bubble Sort";
				 // 
				 // label2
				 // 
				 this->label2->AutoSize = true;
				 this->label2->Location = System::Drawing::Point(351, 124);
				 this->label2->Name = L"label2";
				 this->label2->Size = System::Drawing::Size(91, 13);
				 this->label2->TabIndex = 18;
				 this->label2->Text = L"Maximum Number";
				 // 
				 // txtMaxCurrent
				 // 
				 this->txtMaxCurrent->Enabled = false;
				 this->txtMaxCurrent->Location = System::Drawing::Point(448, 121);
				 this->txtMaxCurrent->Name = L"txtMaxCurrent";
				 this->txtMaxCurrent->Size = System::Drawing::Size(33, 20);
				 this->txtMaxCurrent->TabIndex = 19;
				 // 
				 // pictureBox1
				 // 
				 this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
				 this->pictureBox1->Location = System::Drawing::Point(487, 121);
				 this->pictureBox1->Name = L"pictureBox1";
				 this->pictureBox1->Size = System::Drawing::Size(27, 24);
				 this->pictureBox1->TabIndex = 20;
				 this->pictureBox1->TabStop = false;
				 // 
				 // D8
				 // 
				 this->D8->Location = System::Drawing::Point(265, 44);
				 this->D8->Name = L"D8";
				 this->D8->Size = System::Drawing::Size(27, 20);
				 this->D8->TabIndex = 21;
				 this->D8->Visible = false;
				 this->D8->TextChanged += gcnew System::EventHandler(this, &MyForm::D8_TextChanged);
				 // 
				 // D9
				 // 
				 this->D9->Location = System::Drawing::Point(298, 44);
				 this->D9->Name = L"D9";
				 this->D9->Size = System::Drawing::Size(27, 20);
				 this->D9->TabIndex = 21;
				 this->D9->Visible = false;
				 this->D9->TextChanged += gcnew System::EventHandler(this, &MyForm::D9_TextChanged);
				 // 
				 // D10
				 // 
				 this->D10->Location = System::Drawing::Point(331, 44);
				 this->D10->Name = L"D10";
				 this->D10->Size = System::Drawing::Size(27, 20);
				 this->D10->TabIndex = 21;
				 this->D10->Visible = false;
				 this->D10->TextChanged += gcnew System::EventHandler(this, &MyForm::D10_TextChanged);
				 // 
				 // D11
				 // 
				 this->D11->Location = System::Drawing::Point(364, 44);
				 this->D11->Name = L"D11";
				 this->D11->Size = System::Drawing::Size(27, 20);
				 this->D11->TabIndex = 21;
				 this->D11->Visible = false;
				 this->D11->TextChanged += gcnew System::EventHandler(this, &MyForm::D11_TextChanged);
				 // 
				 // D12
				 // 
				 this->D12->Location = System::Drawing::Point(397, 44);
				 this->D12->Name = L"D12";
				 this->D12->Size = System::Drawing::Size(27, 20);
				 this->D12->TabIndex = 21;
				 this->D12->Visible = false;
				 this->D12->TextChanged += gcnew System::EventHandler(this, &MyForm::D12_TextChanged);
				 // 
				 // D15
				 // 
				 this->D15->Location = System::Drawing::Point(496, 44);
				 this->D15->Name = L"D15";
				 this->D15->Size = System::Drawing::Size(27, 20);
				 this->D15->TabIndex = 21;
				 this->D15->Visible = false;
				 this->D15->TextChanged += gcnew System::EventHandler(this, &MyForm::D15_TextChanged);
				 // 
				 // D17
				 // 
				 this->D17->Location = System::Drawing::Point(562, 44);
				 this->D17->Name = L"D17";
				 this->D17->Size = System::Drawing::Size(27, 20);
				 this->D17->TabIndex = 21;
				 this->D17->Visible = false;
				 this->D17->TextChanged += gcnew System::EventHandler(this, &MyForm::D17_TextChanged);
				 // 
				 // D16
				 // 
				 this->D16->Location = System::Drawing::Point(529, 44);
				 this->D16->Name = L"D16";
				 this->D16->Size = System::Drawing::Size(27, 20);
				 this->D16->TabIndex = 21;
				 this->D16->Visible = false;
				 this->D16->TextChanged += gcnew System::EventHandler(this, &MyForm::D16_TextChanged);
				 // 
				 // D21
				 // 
				 this->D21->Location = System::Drawing::Point(694, 44);
				 this->D21->Name = L"D21";
				 this->D21->Size = System::Drawing::Size(27, 20);
				 this->D21->TabIndex = 21;
				 this->D21->Visible = false;
				 this->D21->TextChanged += gcnew System::EventHandler(this, &MyForm::D21_TextChanged);
				 // 
				 // D18
				 // 
				 this->D18->Location = System::Drawing::Point(595, 44);
				 this->D18->Name = L"D18";
				 this->D18->Size = System::Drawing::Size(27, 20);
				 this->D18->TabIndex = 21;
				 this->D18->Visible = false;
				 this->D18->TextChanged += gcnew System::EventHandler(this, &MyForm::D18_TextChanged);
				 // 
				 // D19
				 // 
				 this->D19->Location = System::Drawing::Point(628, 44);
				 this->D19->Name = L"D19";
				 this->D19->Size = System::Drawing::Size(27, 20);
				 this->D19->TabIndex = 21;
				 this->D19->Visible = false;
				 this->D19->TextChanged += gcnew System::EventHandler(this, &MyForm::D19_TextChanged);
				 // 
				 // D20
				 // 
				 this->D20->Location = System::Drawing::Point(661, 44);
				 this->D20->Name = L"D20";
				 this->D20->Size = System::Drawing::Size(27, 20);
				 this->D20->TabIndex = 21;
				 this->D20->Visible = false;
				 this->D20->TextChanged += gcnew System::EventHandler(this, &MyForm::D20_TextChanged);
				 // 
				 // D22
				 // 
				 this->D22->Location = System::Drawing::Point(727, 44);
				 this->D22->Name = L"D22";
				 this->D22->Size = System::Drawing::Size(27, 20);
				 this->D22->TabIndex = 21;
				 this->D22->Visible = false;
				 this->D22->TextChanged += gcnew System::EventHandler(this, &MyForm::D22_TextChanged);
				 // 
				 // D23
				 // 
				 this->D23->Location = System::Drawing::Point(760, 44);
				 this->D23->Name = L"D23";
				 this->D23->Size = System::Drawing::Size(27, 20);
				 this->D23->TabIndex = 21;
				 this->D23->Visible = false;
				 this->D23->TextChanged += gcnew System::EventHandler(this, &MyForm::D23_TextChanged);
				 // 
				 // D24
				 // 
				 this->D24->Location = System::Drawing::Point(793, 44);
				 this->D24->Name = L"D24";
				 this->D24->Size = System::Drawing::Size(27, 20);
				 this->D24->TabIndex = 21;
				 this->D24->Visible = false;
				 this->D24->TextChanged += gcnew System::EventHandler(this, &MyForm::D24_TextChanged);
				 // 
				 // D25
				 // 
				 this->D25->Location = System::Drawing::Point(826, 44);
				 this->D25->Name = L"D25";
				 this->D25->Size = System::Drawing::Size(27, 20);
				 this->D25->TabIndex = 21;
				 this->D25->Visible = false;
				 this->D25->TextChanged += gcnew System::EventHandler(this, &MyForm::D25_TextChanged);
				 // 
				 // D26
				 // 
				 this->D26->Location = System::Drawing::Point(859, 44);
				 this->D26->Name = L"D26";
				 this->D26->Size = System::Drawing::Size(27, 20);
				 this->D26->TabIndex = 21;
				 this->D26->Visible = false;
				 this->D26->TextChanged += gcnew System::EventHandler(this, &MyForm::D26_TextChanged_1);
				 // 
				 // D27
				 // 
				 this->D27->Location = System::Drawing::Point(892, 44);
				 this->D27->Name = L"D27";
				 this->D27->Size = System::Drawing::Size(27, 20);
				 this->D27->TabIndex = 21;
				 this->D27->Visible = false;
				 this->D27->TextChanged += gcnew System::EventHandler(this, &MyForm::D27_TextChanged_1);
				 // 
				 // btnAdd
				 // 
				 this->btnAdd->Location = System::Drawing::Point(925, 29);
				 this->btnAdd->Name = L"btnAdd";
				 this->btnAdd->Size = System::Drawing::Size(25, 23);
				 this->btnAdd->TabIndex = 22;
				 this->btnAdd->Text = L"+";
				 this->btnAdd->UseVisualStyleBackColor = true;
				 this->btnAdd->Click += gcnew System::EventHandler(this, &MyForm::btnAdd_Click);
				 // 
				 // btnRemove
				 // 
				 this->btnRemove->Enabled = false;
				 this->btnRemove->Location = System::Drawing::Point(925, 58);
				 this->btnRemove->Name = L"btnRemove";
				 this->btnRemove->Size = System::Drawing::Size(25, 23);
				 this->btnRemove->TabIndex = 22;
				 this->btnRemove->Text = L"-";
				 this->btnRemove->UseVisualStyleBackColor = true;
				 this->btnRemove->Click += gcnew System::EventHandler(this, &MyForm::btnRemove_Click);
				 // 
				 // D13
				 // 
				 this->D13->Location = System::Drawing::Point(430, 44);
				 this->D13->Name = L"D13";
				 this->D13->Size = System::Drawing::Size(27, 20);
				 this->D13->TabIndex = 21;
				 this->D13->Visible = false;
				 this->D13->TextChanged += gcnew System::EventHandler(this, &MyForm::D13_TextChanged);
				 // 
				 // D14
				 // 
				 this->D14->Location = System::Drawing::Point(463, 44);
				 this->D14->Name = L"D14";
				 this->D14->Size = System::Drawing::Size(27, 20);
				 this->D14->TabIndex = 21;
				 this->D14->Visible = false;
				 this->D14->TextChanged += gcnew System::EventHandler(this, &MyForm::D14_TextChanged);
				 // 
				 // btnRandom
				 // 
				 this->btnRandom->Location = System::Drawing::Point(793, 111);
				 this->btnRandom->Name = L"btnRandom";
				 this->btnRandom->Size = System::Drawing::Size(103, 38);
				 this->btnRandom->TabIndex = 23;
				 this->btnRandom->Text = L"Fill Random";
				 this->btnRandom->UseVisualStyleBackColor = true;
				 this->btnRandom->Click += gcnew System::EventHandler(this, &MyForm::btnRandom_Click);
				 // 
				 // lblSearch
				 // 
				 this->lblSearch->AutoSize = true;
				 this->lblSearch->Location = System::Drawing::Point(31, 124);
				 this->lblSearch->Name = L"lblSearch";
				 this->lblSearch->Size = System::Drawing::Size(59, 13);
				 this->lblSearch->TabIndex = 24;
				 this->lblSearch->Text = L"Search For";
				 this->lblSearch->Visible = false;
				 // 
				 // txtSearch
				 // 
				 this->txtSearch->Location = System::Drawing::Point(147, 121);
				 this->txtSearch->Name = L"txtSearch";
				 this->txtSearch->Size = System::Drawing::Size(100, 20);
				 this->txtSearch->TabIndex = 25;
				 this->txtSearch->Visible = false;
				 this->txtSearch->TextChanged += gcnew System::EventHandler(this, &MyForm::txtSearch_TextChanged);
				 // 
				 // txtOperations
				 // 
				 this->txtOperations->Enabled = false;
				 this->txtOperations->Location = System::Drawing::Point(147, 200);
				 this->txtOperations->Name = L"txtOperations";
				 this->txtOperations->Size = System::Drawing::Size(100, 20);
				 this->txtOperations->TabIndex = 26;
				 this->txtOperations->Visible = false;
				 // 
				 // lblOperations
				 // 
				 this->lblOperations->AutoSize = true;
				 this->lblOperations->Location = System::Drawing::Point(31, 203);
				 this->lblOperations->Name = L"lblOperations";
				 this->lblOperations->Size = System::Drawing::Size(110, 13);
				 this->lblOperations->TabIndex = 27;
				 this->lblOperations->Text = L"Number of Operations";
				 this->lblOperations->Visible = false;
				 // 
				 // label3
				 // 
				 this->label3->AutoSize = true;
				 this->label3->Location = System::Drawing::Point(31, 163);
				 this->label3->Name = L"label3";
				 this->label3->Size = System::Drawing::Size(81, 13);
				 this->label3->TabIndex = 28;
				 this->label3->Text = L"Current Number";
				 this->label3->Visible = false;
				 // 
				 // textBox2
				 // 
				 this->textBox2->Enabled = false;
				 this->textBox2->Location = System::Drawing::Point(147, 160);
				 this->textBox2->Name = L"textBox2";
				 this->textBox2->Size = System::Drawing::Size(100, 20);
				 this->textBox2->TabIndex = 29;
				 this->textBox2->Visible = false;
				 // 
				 // Arrow3
				 // 
				 this->Arrow3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Arrow3.Image")));
				 this->Arrow3->Location = System::Drawing::Point(100, 70);
				 this->Arrow3->Name = L"Arrow3";
				 this->Arrow3->Size = System::Drawing::Size(27, 29);
				 this->Arrow3->TabIndex = 11;
				 this->Arrow3->TabStop = false;
				 this->Arrow3->Visible = false;
				 // 
				 // timer1
				 // 
				 this->timer1->Interval = 1000;
				 this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
				 // 
				 // trackBar1
				 // 
				 this->trackBar1->Location = System::Drawing::Point(354, 222);
				 this->trackBar1->Name = L"trackBar1";
				 this->trackBar1->Size = System::Drawing::Size(293, 45);
				 this->trackBar1->TabIndex = 30;
				 this->trackBar1->Value = 5;
				 this->trackBar1->Visible = false;
				 this->trackBar1->Scroll += gcnew System::EventHandler(this, &MyForm::trackBar1_Scroll);
				 // 
				 // lblSlow
				 // 
				 this->lblSlow->AutoSize = true;
				 this->lblSlow->Location = System::Drawing::Point(351, 254);
				 this->lblSlow->Name = L"lblSlow";
				 this->lblSlow->Size = System::Drawing::Size(30, 13);
				 this->lblSlow->TabIndex = 31;
				 this->lblSlow->Text = L"Slow";
				 // 
				 // lblFast
				 // 
				 this->lblFast->AutoSize = true;
				 this->lblFast->Location = System::Drawing::Point(625, 254);
				 this->lblFast->Name = L"lblFast";
				 this->lblFast->Size = System::Drawing::Size(27, 13);
				 this->lblFast->TabIndex = 31;
				 this->lblFast->Text = L"Fast";
				 // 
				 // progressBar1
				 // 
				 this->progressBar1->Location = System::Drawing::Point(354, 176);
				 this->progressBar1->Name = L"progressBar1";
				 this->progressBar1->Size = System::Drawing::Size(293, 23);
				 this->progressBar1->TabIndex = 32;
				 // 
				 // btnPause
				 // 
				 this->btnPause->Location = System::Drawing::Point(841, 382);
				 this->btnPause->Name = L"btnPause";
				 this->btnPause->Size = System::Drawing::Size(103, 38);
				 this->btnPause->TabIndex = 33;
				 this->btnPause->Text = L"Pause";
				 this->btnPause->UseVisualStyleBackColor = true;
				 this->btnPause->Visible = false;
				 this->btnPause->Click += gcnew System::EventHandler(this, &MyForm::btnPause_Click);
				 // 
				 // lblPercentage
				 // 
				 this->lblPercentage->AutoSize = true;
				 this->lblPercentage->Location = System::Drawing::Point(544, 29);
				 this->lblPercentage->Name = L"lblPercentage";
				 this->lblPercentage->Size = System::Drawing::Size(0, 13);
				 this->lblPercentage->TabIndex = 34;
				 // 
				 // MyForm
				 // 
				 this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
				 this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
				 this->ClientSize = System::Drawing::Size(958, 431);
				 this->Controls->Add(this->lblPercentage);
				 this->Controls->Add(this->btnPause);
				 this->Controls->Add(this->progressBar1);
				 this->Controls->Add(this->lblFast);
				 this->Controls->Add(this->lblSlow);
				 this->Controls->Add(this->trackBar1);
				 this->Controls->Add(this->textBox2);
				 this->Controls->Add(this->label3);
				 this->Controls->Add(this->lblOperations);
				 this->Controls->Add(this->txtOperations);
				 this->Controls->Add(this->txtSearch);
				 this->Controls->Add(this->lblSearch);
				 this->Controls->Add(this->btnRandom);
				 this->Controls->Add(this->btnRemove);
				 this->Controls->Add(this->btnAdd);
				 this->Controls->Add(this->D16);
				 this->Controls->Add(this->D18);
				 this->Controls->Add(this->D19);
				 this->Controls->Add(this->D20);
				 this->Controls->Add(this->D27);
				 this->Controls->Add(this->D26);
				 this->Controls->Add(this->D25);
				 this->Controls->Add(this->D24);
				 this->Controls->Add(this->D23);
				 this->Controls->Add(this->D22);
				 this->Controls->Add(this->D21);
				 this->Controls->Add(this->D17);
				 this->Controls->Add(this->D15);
				 this->Controls->Add(this->D14);
				 this->Controls->Add(this->D13);
				 this->Controls->Add(this->D12);
				 this->Controls->Add(this->D11);
				 this->Controls->Add(this->D10);
				 this->Controls->Add(this->D9);
				 this->Controls->Add(this->D8);
				 this->Controls->Add(this->pictureBox1);
				 this->Controls->Add(this->txtMaxCurrent);
				 this->Controls->Add(this->label2);
				 this->Controls->Add(this->label1);
				 this->Controls->Add(this->txtMinNum);
				 this->Controls->Add(this->Minlbl);
				 this->Controls->Add(this->groupBox1);
				 this->Controls->Add(this->btnNext);
				 this->Controls->Add(this->Arrow3);
				 this->Controls->Add(this->Arrow2);
				 this->Controls->Add(this->Arrow1);
				 this->Controls->Add(this->button1);
				 this->Controls->Add(this->D1);
				 this->Controls->Add(this->D4);
				 this->Controls->Add(this->D5);
				 this->Controls->Add(this->D2);
				 this->Controls->Add(this->D6);
				 this->Controls->Add(this->D7);
				 this->Controls->Add(this->D3);
				 this->Controls->Add(this->menuStrip1);
				 this->ForeColor = System::Drawing::SystemColors::ControlText;
				 this->MainMenuStrip = this->menuStrip1;
				 this->MaximizeBox = false;
				 this->MaximumSize = System::Drawing::Size(974, 470);
				 this->MinimumSize = System::Drawing::Size(974, 470);
				 this->Name = L"MyForm";
				 this->Text = L"Algorithm";
				 this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Arrow1))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Arrow2))->EndInit();
				 this->groupBox1->ResumeLayout(false);
				 this->groupBox1->PerformLayout();
				 this->menuStrip1->ResumeLayout(false);
				 this->menuStrip1->PerformLayout();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Arrow3))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->EndInit();
				 this->ResumeLayout(false);
				 this->PerformLayout();

			 }
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		Application::Exit();
	}

	private: System::Void btnNext_Click(System::Object^  sender, System::EventArgs^  e) {
		
			if (MovementType == false) {
				Run();
			}
			else {
				if (pause == 1) {
					pause = 1;
				}
				timer1->Enabled = true;
			}
				
		
		
	}

	private: void disableFields() {
		radioButton1->Enabled = false;
		radioButton2->Enabled = false;
		radioButton3->Enabled = false;
		radioButton4->Enabled = false;
		D1->Enabled = false;
		D2->Enabled = false;
		D3->Enabled = false;
		D4->Enabled = false;
		D5->Enabled = false;
		D6->Enabled = false;
		D7->Enabled = false;
		D8->Enabled = false;
		D9->Enabled = false;
		D10->Enabled = false;
		D11->Enabled = false;
		D12->Enabled = false;
		D13->Enabled = false;
		D14->Enabled = false;
		D15->Enabled = false;
		D16->Enabled = false;
		D17->Enabled = false;
		D18->Enabled = false;
		D19->Enabled = false;
		D20->Enabled = false;
		D21->Enabled = false;
		D22->Enabled = false;
		D23->Enabled = false;
		D24->Enabled = false;
		D25->Enabled = false;
		D26->Enabled = false;
		D27->Enabled = false;
	}

	private: void enableFields() {
		radioButton1->Enabled = true;
		radioButton2->Enabled = true;
		radioButton3->Enabled = true;
		radioButton4->Enabled = true;
		D1->Enabled = true;
		D2->Enabled = true;
		D3->Enabled = true;
		D4->Enabled = true;
		D5->Enabled = true;
		D6->Enabled = true;
		D7->Enabled = true;
		D8->Enabled = true;
		D9->Enabled = true;
		D10->Enabled = true;
		D11->Enabled = true;
		D12->Enabled = true;
		D13->Enabled = true;
		D14->Enabled = true;
		D15->Enabled = true;
		D16->Enabled = true;
		D17->Enabled = true;
		D18->Enabled = true;
		D19->Enabled = true;
		D20->Enabled = true;
		D21->Enabled = true;
		D22->Enabled = true;
		D23->Enabled = true;
		D24->Enabled = true;
		D25->Enabled = true;
		D26->Enabled = true;
		D27->Enabled = true;
	}

	private: void Run() {
		btnRandom->Enabled = false;
		btnAdd->Enabled = false;
		btnRemove->Enabled = false;
		txtSearch->Enabled = false;
		lblPercentage->Visible = true;
		disableFields();
		if (OperationType == 1) {
			if (StepsCalculated == false) {
				CalculateNoOfSteps();
				StepsCalculated = true;
			}
			mySteps++;
			if (((mySteps * 100) / TotalSteps) > 100) {
				progressBar1->Value = 100;
				lblPercentage->Text = "100%";
			}
			else {
				progressBar1->Value = (mySteps * 100) / TotalSteps;
				lblPercentage->Text = Convert::ToString((mySteps * 100) / TotalSteps) + "%";
			}
			
			if (SortEnded() == true) {
				timer1->Enabled = false;
				btnRandom->Enabled = true;
				btnAdd->Enabled = true;
				btnRemove->Enabled = true;
				enableFields();
				MessageBox::Show("Numbers are successfuly sorted", "Done");
				lblPercentage->Visible = false;
				btnNext->Visible = true;
				btnPause->Visible = false;
				pause = 1;
				Arrow1->Location = System::Drawing::Point(34, 70);
				Arrow2->Location = System::Drawing::Point(67, 70);
				btnNext->Enabled = false;
			}
			else
				bubbleSort();
		}
		else if (OperationType == 2) {
			if (StepsCalculated == false) {
				CalculateNoOfSteps();
				StepsCalculated = true;
			}
			mySteps++;
			if (((mySteps * 100) / TotalSteps) > 100) {
				progressBar1->Value = 100;
				lblPercentage->Text = "100%";
			}
			else {
				progressBar1->Value = (mySteps * 100) / TotalSteps;
				lblPercentage->Text = Convert::ToString((mySteps * 100) / TotalSteps) + "%";
			}
				
			if (SortEnded() == true) {
				timer1->Enabled = false;	
				MessageBox::Show("Numbers are successfuly sorted", "Done");
				lblPercentage->Visible = false;
				btnNext->Visible = true;
				btnNext->Enabled = false;
				btnRandom->Enabled = true;
				btnAdd->Enabled = true;
				btnRemove->Enabled = true;
				enableFields();
				btnPause->Visible = false;
				pause = 1;
				Arrow1->Location = System::Drawing::Point(34, 70);
				Arrow2->Location = System::Drawing::Point(67, 70);
			}
			else
				SelectionSort();
		}
		else if (OperationType == 3)
		{
			lblPercentage->Visible = false;
			int wanted = Convert::ToInt32(txtSearch->Text);
			int CurrentNum = GetnumberSelection(Arrow1Location());
			if (wanted == CurrentNum) {
				timer1->Enabled = false;
				MessageBox::Show("The Number You are Searching On is Found", "Found");
				lblPercentage->Visible = false;
				btnNext->Visible = true;
				btnPause->Visible = false;
				pause = 1;
				txtSearch->Enabled = true;
				btnNext->Enabled = false;
				btnRandom->Enabled = true;
				btnAdd->Enabled = true;
				btnRemove->Enabled = true;
				enableFields();
			}
			else if (arrow1X == NumOfFieldsEnabled() * 33 + 1) { // if the arrow stand at the last field
				if (wanted != CurrentNum) {
					timer1->Enabled = false;
					LinearFound = false;
					MessageBox::Show("The Number You are Searching On Dosen't Exist", "Not Found");
					lblPercentage->Visible = false;
					btnNext->Visible = true;
					btnPause->Visible = false;
					pause = 1;
					txtSearch->Enabled = true;
					btnNext->Enabled = false;
					btnRandom->Enabled = true;
					btnAdd->Enabled = true;
					btnRemove->Enabled = true;
					enableFields();
				}
			}
			else {
				NumberOfOperations++;
				txtOperations->Text = Convert::ToString(NumberOfOperations);
				LinearSearch();
			}

		}
		else if (OperationType == 4) {
			lblPercentage->Visible = false;
			if (SortEnded() == false)
				Sort();
			else  if (GetnumberSelection(Arrow1Location()) == Convert::ToInt32(txtSearch->Text)) {
				timer1->Enabled = false;
				MessageBox::Show("The Number You are Searching On is Found in the 1st Field", "Found");
				lblPercentage->Visible = false;
				btnNext->Visible = true;
				btnPause->Visible = false;
				pause = 1;
				btnAdd->Enabled = true;
				btnRemove->Enabled = true;
				txtSearch->Enabled = true;
				btnNext->Enabled = false;
				btnRandom->Enabled = true;
				enableFields();
				Arrow2->Visible = false;
				Arrow3->Visible = false;
			}
			else if (GetnumberSelection(Arrow2Location()) == Convert::ToInt32(txtSearch->Text)) {
				timer1->Enabled = false;
				MessageBox::Show("The Number You are Searching On is Found in the Last Field", "Found");
				lblPercentage->Visible = false;
				btnNext->Visible = true;
				btnPause->Visible = false;
				pause = 1;
				btnNext->Enabled = false;
				btnRandom->Enabled = true;
				txtSearch->Enabled = true;
				enableFields();
				btnAdd->Enabled = true;
				btnRemove->Enabled = true;
				Arrow1->Visible = false;
				Arrow3->Visible = false;
			}
			else if (arrow1X == arrow2X || arrow1X == arrow3X || arrow2X == arrow3X) {
				timer1->Enabled = false;
				MessageBox::Show("The Number You are Searching On Dosen't Exist", "Not Found");
				lblPercentage->Visible = false;
				btnNext->Visible = true;
				btnPause->Visible = false;
				pause = 1;
				btnNext->Enabled = false;
				btnRandom->Enabled = true;
				txtSearch->Enabled = true;
				enableFields();
				btnAdd->Enabled = true;
				btnRemove->Enabled = true;
			}
			else if (GetnumberSelection(Arrow3Location()) == Convert::ToInt32(txtSearch->Text)) {
				timer1->Enabled = false;
				MessageBox::Show("The Number You are Searching On is Found", "Found");
				lblPercentage->Visible = false;
				btnNext->Visible = true;
				btnPause->Visible = false;
				pause = 1;
				enableFields();
				btnNext->Enabled = false;
				btnRandom->Enabled = true;
				txtSearch->Enabled = true;
				btnAdd->Enabled = true;
				btnRemove->Enabled = true;
				Arrow1->Visible = false;
				Arrow2->Visible = false;
			}

			else
				BinarySearch();
		}
	}

	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
		btnNext->Visible = false;
		btnPause->Visible = true;
			Run();
	}

	private: System::Void btnRandom_Click(System::Object^  sender, System::EventArgs^  e) {

		D1->Text = Convert::ToString(rand() % 999);
		D2->Text = Convert::ToString(rand() % 999);
		D3->Text = Convert::ToString(rand() % 999);
		D4->Text = Convert::ToString(rand() % 999);
		D5->Text = Convert::ToString(rand() % 999);
		D6->Text = Convert::ToString(rand() % 999);
		D7->Text = Convert::ToString(rand() % 999);

		if (D27->Visible == true) {
			D27->Text = Convert::ToString(rand() % 999);
		}
		if (D26->Visible == true) {
			D26->Text = Convert::ToString(rand() % 999);
		}
		if (D25->Visible == true) {
			D25->Text = Convert::ToString(rand() % 999);
		}
		if (D24->Visible == true) {
			D24->Text = Convert::ToString(rand() % 999);
		}
		if (D23->Visible == true) {
			D23->Text = Convert::ToString(rand() % 999);
		}
		if (D22->Visible == true) {
			D22->Text = Convert::ToString(rand() % 999);
		}
		if (D21->Visible == true) {
			D21->Text = Convert::ToString(rand() % 999);
		}
		if (D20->Visible == true) {
			D20->Text = Convert::ToString(rand() % 999);
		}
		if (D19->Visible == true) {
			D19->Text = Convert::ToString(rand() % 999);
		}
		if (D18->Visible == true) {
			D18->Text = Convert::ToString(rand() % 999);
		}
		if (D17->Visible == true) {
			D17->Text = Convert::ToString(rand() % 999);
		}
		if (D16->Visible == true) {
			D16->Text = Convert::ToString(rand() % 999);
		}
		if (D15->Visible == true) {
			D15->Text = Convert::ToString(rand() % 999);
		}
		if (D14->Visible == true) {
			D14->Text = Convert::ToString(rand() % 999);
		}
		if (D13->Visible == true) {
			D13->Text = Convert::ToString(rand() % 999);
		}
		if (D12->Visible == true) {
			D12->Text = Convert::ToString(rand() % 999);
		}
		if (D11->Visible == true) {
			D11->Text = Convert::ToString(rand() % 999);
		}
		if (D10->Visible == true) {
			D10->Text = Convert::ToString(rand() % 999);
		}
		if (D9->Visible == true) {
			D9->Text = Convert::ToString(rand() % 999);
		}
		if (D8->Visible == true) {
			D8->Text = Convert::ToString(rand() % 999);
		}
		btnNext->Enabled = true;
		if (OperationType == 1) {
			progressBar1->Visible = true;
			label1->Text = "Bubble Sort";
			label2->Text = "Maximum Number";
			txtMinNum->Text = "";
			progressBar1->Value = 0;
			timer1->Enabled = false;
			txtMinNum->Text = "";
			txtMaxCurrent->Text = "";
			smallestNum = 9999;
			arrow1X = 34;
			arrow2X = 67;
			Arrow1->Location = System::Drawing::Point(34, 70);
			Arrow2->Location = System::Drawing::Point(67, 70);
			btnNext->Enabled = true;
			TestChecker = false;
			mySteps = 0;
			StepsCalculated = false;
		}
		else if (OperationType == 2) {
			arrow1X = 34;
			arrow2X = 67;
			Arrow1->Location = System::Drawing::Point(34, 70);
			Arrow2->Location = System::Drawing::Point(67, 70);
			mySteps = 0;
			TotalSteps = 0;
			progressBar1->Value = 0;
			TestChecker = false;
			StepsCalculated = false;
		}
		else if (OperationType == 3) {
			arrow1X = 34;
			Arrow1->Location = System::Drawing::Point(34, 70);
			textBox2->Text = "";
			NumberOfOperations = 0;
			txtOperations->Text = "0";
		}
		else if (OperationType == 4) {
			textBox2->Text = "";
			NumberOfOperations = 0;
			txtOperations->Text = "0";
			btnNext->Enabled = true;
			arrow1X = 34;
			Arrow1->Location = System::Drawing::Point(34, 70);
			arrow2X = NumOfFieldsEnabled() * 33 + 1;
			this->Arrow2->Location = System::Drawing::Point(arrow2X, 70);
			arrow3X = (((NumOfFieldsEnabled() + 1) / 2) * 33) + 1;
			this->Arrow3->Location = System::Drawing::Point(arrow3X, 70);
			Arrow1->Visible = true;
			Arrow2->Visible = true;
			Arrow3->Visible = true;
		}
	}

	private: bool SortEnded() {
		int Num[27];
		Num[0] = Convert::ToInt32(D1->Text);
		Num[1] = Convert::ToInt32(D2->Text);
		Num[2] = Convert::ToInt32(D3->Text);
		Num[3] = Convert::ToInt32(D4->Text);
		Num[4] = Convert::ToInt32(D5->Text);
		Num[5] = Convert::ToInt32(D6->Text);
		Num[6] = Convert::ToInt32(D7->Text);
		Num[7] = Convert::ToInt32(D8->Text);
		Num[8] = Convert::ToInt32(D9->Text);
		Num[9] = Convert::ToInt32(D10->Text);
		Num[10] = Convert::ToInt32(D11->Text);
		Num[11] = Convert::ToInt32(D12->Text);
		Num[12] = Convert::ToInt32(D13->Text);
		Num[13] = Convert::ToInt32(D14->Text);
		Num[14] = Convert::ToInt32(D15->Text);
		Num[15] = Convert::ToInt32(D16->Text);
		Num[16] = Convert::ToInt32(D17->Text);
		Num[17] = Convert::ToInt32(D18->Text);
		Num[18] = Convert::ToInt32(D19->Text);
		Num[19] = Convert::ToInt32(D20->Text);
		Num[20] = Convert::ToInt32(D21->Text);
		Num[21] = Convert::ToInt32(D22->Text);
		Num[22] = Convert::ToInt32(D23->Text);
		Num[23] = Convert::ToInt32(D24->Text);
		Num[24] = Convert::ToInt32(D25->Text);
		Num[25] = Convert::ToInt32(D26->Text);
		Num[26] = Convert::ToInt32(D27->Text);
		int ctr = 0;
		for (int i = 0; i < 27; i++) {
			if (Num[i] <= Num[i + 1]) {
				ctr++;
			}
			if (i == 25)
				break;
		}

		if (ctr == 26) {
			return true;
		}
		else
			return false;
	}

	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
		lblSlow->Visible = false;
		lblFast->Visible = false;
		Reset();
	}

	private: void CalculateNoOfSteps() {
		TotalSteps = 0;
		int arr[27];
		for (int i = 27; i > NumOfFieldsEnabled(); i--) {
			arr[i - 1] = 99999999;
		}

		for (int i = 0; i < NumOfFieldsEnabled(); i++) {
			arr[i] = GetnumberSelection(i + 1);
		}
		//----------------------------------
		if (OperationType == 1) {
			while (SortEnded() == false) {
				TotalSteps++;
				bubbleSort();
			}
			TestChecker = true;
			smallestNum = 9999;
			txtMinNum->Text = "";
			txtMaxCurrent->Text = "";
			arrow1X = 34;
			arrow2X = 67;
			Arrow1->Location = System::Drawing::Point(34, 70);
			Arrow2->Location = System::Drawing::Point(67, 70);
		}
		else if (OperationType == 2) {
			while (SortEnded() == false)
			{
				TotalSteps++;
				SelectionSort();
			}
			TestChecker = true;
			smallestNum = 9999;
			txtMinNum->Text = "";
			txtMaxCurrent->Text = "";
			arrow1X = 34;
			arrow2X = 67;
			Arrow1->Location = System::Drawing::Point(34, 70);
			Arrow2->Location = System::Drawing::Point(67, 70);
		}
		//-----------------------------------

		D1->Text = Convert::ToString(arr[0]);
		D2->Text = Convert::ToString(arr[1]);
		D3->Text = Convert::ToString(arr[2]);
		D4->Text = Convert::ToString(arr[3]);
		D5->Text = Convert::ToString(arr[4]);
		D6->Text = Convert::ToString(arr[5]);
		D7->Text = Convert::ToString(arr[6]);
		D8->Text = Convert::ToString(arr[7]);
		D9->Text = Convert::ToString(arr[8]);
		D10->Text = Convert::ToString(arr[9]);
		D11->Text = Convert::ToString(arr[10]);
		D12->Text = Convert::ToString(arr[11]);
		D13->Text = Convert::ToString(arr[12]);
		D14->Text = Convert::ToString(arr[13]);
		D15->Text = Convert::ToString(arr[14]);
		D16->Text = Convert::ToString(arr[15]);
		D17->Text = Convert::ToString(arr[16]);
		D18->Text = Convert::ToString(arr[17]);
		D19->Text = Convert::ToString(arr[18]);
		D20->Text = Convert::ToString(arr[19]);
		D21->Text = Convert::ToString(arr[20]);
		D22->Text = Convert::ToString(arr[21]);
		D23->Text = Convert::ToString(arr[22]);
		D24->Text = Convert::ToString(arr[23]);
		D25->Text = Convert::ToString(arr[24]);
		D26->Text = Convert::ToString(arr[25]);
		D27->Text = Convert::ToString(arr[26]);

	}

	private: System::Void D1_Click(System::Object^  sender, System::EventArgs^  e) {
		D1->SelectAll();
	}
	private: System::Void D2_Click(System::Object^  sender, System::EventArgs^  e) {
		D2->SelectAll();
	}
	private: System::Void D3_Click(System::Object^  sender, System::EventArgs^  e) {
		D3->SelectAll();
	}
	private: System::Void D4_Click(System::Object^  sender, System::EventArgs^  e) {
		D4->SelectAll();
	}
	private: System::Void D5_Click(System::Object^  sender, System::EventArgs^  e) {
		D5->SelectAll();
	}
	private: System::Void D6_Click(System::Object^  sender, System::EventArgs^  e) {
		D6->SelectAll();
	}
	private: System::Void D7_Click(System::Object^  sender, System::EventArgs^  e) {
		D7->SelectAll();
	}
	private: System::Void D8_Click(System::Object^  sender, System::EventArgs^  e) {
		D8->SelectAll();
	}
	private: System::Void D9_Click(System::Object^  sender, System::EventArgs^  e) {
		D9->SelectAll();
	}
	private: System::Void D10_Click(System::Object^  sender, System::EventArgs^  e) {
		D10->SelectAll();
	}
	private: System::Void D11_Click(System::Object^  sender, System::EventArgs^  e) {
		D11->SelectAll();
	}
	private: System::Void D12_Click(System::Object^  sender, System::EventArgs^  e) {
		D12->SelectAll();
	}
	private: System::Void D13_Click(System::Object^  sender, System::EventArgs^  e) {
		D13->SelectAll();
	}
	private: System::Void D14_Click(System::Object^  sender, System::EventArgs^  e) {
		D14->SelectAll();
	}
	private: System::Void D15_Click(System::Object^  sender, System::EventArgs^  e) {
		D15->SelectAll();
	}
	private: System::Void D16_Click(System::Object^  sender, System::EventArgs^  e) {
		D16->SelectAll();
	}
	private: System::Void D17_Click(System::Object^  sender, System::EventArgs^  e) {
		D17->SelectAll();
	}
	private: System::Void D18_Click(System::Object^  sender, System::EventArgs^  e) {
		D18->SelectAll();
	}
	private: System::Void D19_Click(System::Object^  sender, System::EventArgs^  e) {
		D19->SelectAll();
	}
	private: System::Void D20_Click(System::Object^  sender, System::EventArgs^  e) {
		D20->SelectAll();
	}
	private: System::Void D21_Click(System::Object^  sender, System::EventArgs^  e) {
		D21->SelectAll();
	}
	private: System::Void D22_Click(System::Object^  sender, System::EventArgs^  e) {
		D22->SelectAll();
	}
	private: System::Void D23_Click(System::Object^  sender, System::EventArgs^  e) {
		D23->SelectAll();
	}
	private: System::Void D24_Click(System::Object^  sender, System::EventArgs^  e) {
		D7->SelectAll();
	}
	private: System::Void D25_Click(System::Object^  sender, System::EventArgs^  e) {
		D7->SelectAll();
	}
	private: System::Void D26_Click(System::Object^  sender, System::EventArgs^  e) {
		D7->SelectAll();
	}
	private: System::Void D27_Click(System::Object^  sender, System::EventArgs^  e) {
		D7->SelectAll();
	}

	private: System::Void D3_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		int iTemp;
		if (!Int32::TryParse(D3->Text, iTemp) == true) {
			D3->Text = "0";
		}
	}

	private: System::Void D2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		int iTemp;
		if (!Int32::TryParse(D2->Text, iTemp) == true) {
			D2->Text = "0";
		}
	}

	private: System::Void D1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		int iTemp;
		if (!Int32::TryParse(D1->Text, iTemp) == true) {
			D1->Text = "0";
		}
	}

	private: System::Void D4_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		int iTemp;
		if (!Int32::TryParse(D4->Text, iTemp) == true) {
			D4->Text = "0";
		}
	}

	private: System::Void D5_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		int iTemp;
		if (!Int32::TryParse(D5->Text, iTemp) == true) {
			D5->Text = "0";
		}
	}

	private: System::Void D6_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		int iTemp;
		if (!Int32::TryParse(D6->Text, iTemp) == true) {
			D6->Text = "0";
		}
	}

	private: System::Void D7_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		int iTemp;
		if (!Int32::TryParse(D7->Text, iTemp) == true) {
			D7->Text = "0";
		}
	}

	private: System::Void D8_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		int iTemp;
		if (!Int32::TryParse(D8->Text, iTemp) == true) {
			D8->Text = "0";
		}
	}

	private: System::Void D9_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		int iTemp;
		if (!Int32::TryParse(D9->Text, iTemp) == true) {
			D9->Text = "0";
		}
	}

	private: System::Void D10_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		int iTemp;
		if (!Int32::TryParse(D10->Text, iTemp) == true) {
			D10->Text = "0";
		}
	}

	private: System::Void D11_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		int iTemp;
		if (!Int32::TryParse(D11->Text, iTemp) == true) {
			D11->Text = "0";
		}
	}

	private: System::Void D12_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		int iTemp;
		if (!Int32::TryParse(D12->Text, iTemp) == true) {
			D12->Text = "0";
		}
	}

	private: System::Void D13_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		int iTemp;
		if (!Int32::TryParse(D13->Text, iTemp) == true) {
			D13->Text = "0";
		}
	}

	private: System::Void D14_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		int iTemp;
		if (!Int32::TryParse(D14->Text, iTemp) == true) {
			D14->Text = "0";
		}
	}

	private: System::Void D15_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		int iTemp;
		if (!Int32::TryParse(D15->Text, iTemp) == true) {
			D15->Text = "0";
		}
	}

	private: System::Void D16_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		int iTemp;
		if (!Int32::TryParse(D16->Text, iTemp) == true) {
			D16->Text = "0";
		}
	}

	private: System::Void D17_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		int iTemp;
		if (!Int32::TryParse(D17->Text, iTemp) == true) {
			D17->Text = "0";
		}
	}

	private: System::Void D18_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		int iTemp;
		if (!Int32::TryParse(D18->Text, iTemp) == true) {
			D18->Text = "0";
		}
	}

	private: System::Void D19_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		int iTemp;
		if (!Int32::TryParse(D19->Text, iTemp) == true) {
			D19->Text = "0";
		}
	}

	private: System::Void D20_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		int iTemp;
		if (!Int32::TryParse(D20->Text, iTemp) == true) {
			D20->Text = "0";
		}
	}

	private: System::Void D21_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		int iTemp;
		if (!Int32::TryParse(D21->Text, iTemp) == true) {
			D21->Text = "0";
		}
	}

	private: System::Void D22_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		int iTemp;
		if (!Int32::TryParse(D22->Text, iTemp) == true) {
			D22->Text = "0";
		}
	}

	private: System::Void D23_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		int iTemp;
		if (!Int32::TryParse(D23->Text, iTemp) == true) {
			D23->Text = "0";
		}
	}

	private: System::Void D24_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		int iTemp;
		if (!Int32::TryParse(D24->Text, iTemp) == true) {
			D24->Text = "0";
		}
	}

	private: System::Void D25_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		int iTemp;
		if (!Int32::TryParse(D25->Text, iTemp) == true) {
			D25->Text = "0";
		}
	}

	private: System::Void D26_TextChanged_1(System::Object^  sender, System::EventArgs^  e) {
		int iTemp;
		if (!Int32::TryParse(D26->Text, iTemp) == true) {
			D26->Text = "0";
		}
	}

	private: System::Void D27_TextChanged_1(System::Object^  sender, System::EventArgs^  e) {
		int iTemp;
		if (!Int32::TryParse(D27->Text, iTemp) == true) {
			D27->Text = "0";
		}
	}

	private: System::Void txtSearch_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		int iTemp;
		if (!Int32::TryParse(txtSearch->Text, iTemp) == true) {
			txtSearch->Text = "0";
		}
		if (OperationType == 3) {
			arrow1X = 34;
			Arrow1->Location = System::Drawing::Point(34, 70);
			textBox2->Text = "";
			NumberOfOperations = 0;
			txtOperations->Text = "0";
			btnNext->Enabled = true;
		}
		else if (OperationType == 4) {
			textBox2->Text = "";
			NumberOfOperations = 0;
			txtOperations->Text = "0";
			btnNext->Enabled = true;
			arrow1X = 34;
			Arrow1->Location = System::Drawing::Point(34, 70);
			arrow2X = NumOfFieldsEnabled() * 33 + 1;
			this->Arrow2->Location = System::Drawing::Point(arrow2X, 70);
			arrow3X = (((NumOfFieldsEnabled() + 1) / 2) * 33) + 1;
			this->Arrow3->Location = System::Drawing::Point(arrow3X, 70);
			Arrow1->Visible = true;
			Arrow2->Visible = true;
			Arrow3->Visible = true;
		}
		
	}

	private: System::Void exitToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		Reset();
		OperationType = 1;
		radioButton1->Checked = true;
		label1->Text = "Bubble Sort";
		label2->Text = "Maximum Number";
	}

	private: System::Void bubbleSortToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		Reset();
		OperationType = 1;
		radioButton1->Checked = true;
		label1->Text = "Bubble Sort";
		label2->Text = "Maximum Number";
		progressBar1->Visible = true;

	}

	private: System::Void selectionSortToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		Reset();
		OperationType = 2;
		smallestNum = 9999;
		btnNext->Enabled = true;
		progressBar1->Visible = true;
		label1->Text = "Selection Sort";
		label2->Text = "Current Number";
		radioButton2->Checked = true;
	}

	private: System::Void linearSearchToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		Reset();
		radioButton3->Checked = true;
		progressBar1->Visible = false;
		OperationType = 3;
		label1->Text = "Linear Search";
		Arrow2->Visible = false;
		pictureBox1->Visible = false;
		txtMinNum->Visible = false;
		Minlbl->Visible = false;
		txtMaxCurrent->Visible = false;
		label2->Visible = false;
		lblSearch->Visible = true;
		lblOperations->Visible = true;
		label3->Visible = true;
		textBox2->Visible = true;
		txtSearch->Visible = true;
		txtOperations->Visible = true;
		txtOperations->Text = "0";
		txtSearch->Text = "0";
		textBox2->Text = "";
		lblOperations->Text = "Number Of Operations";
		label3->Text = "Current Number";
	}

	private: System::Void binarySearchToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		Reset();
		OperationType = 4;
		progressBar1->Visible = false;
		radioButton4->Checked = true;
		label1->Text = "Binary Search";
		pictureBox1->Visible = false;
		txtMinNum->Visible = false;
		Minlbl->Visible = false;
		txtMaxCurrent->Visible = false;
		label2->Visible = false;
		lblSearch->Visible = true;
		lblOperations->Visible = true;
		label3->Visible = true;
		textBox2->Visible = true;
		txtSearch->Visible = true;
		txtOperations->Visible = true;
		txtOperations->Text = "0";
		txtSearch->Text = "0";
		textBox2->Text = "";
		arrow2X = NumOfFieldsEnabled() * 33 + 1;
		this->Arrow2->Location = System::Drawing::Point(arrow2X, 70);
		arrow3X = (((NumOfFieldsEnabled() + 1) / 2) * 33) + 1;
		this->Arrow3->Location = System::Drawing::Point(arrow3X, 70);
		Arrow3->Visible = true;
		lblOperations->Text = "Last Number";
		label3->Text = "First Number";
	}

	private: System::Void radioButton1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		OperationType = 1;
		Reset();
	}

	private: System::Void radioButton2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		OperationType = 2;
		Reset();
		/*progressBar1->Visible = true;
		btnNext->Enabled = true;
		
		smallestNum = 9999;
		label1->Text = "Selection Sort";
		label2->Text = "Current Number";
		txtMinNum->Text = "";
		txtMaxCurrent->Text = "";*/
	}

	private: System::Void radioButton3_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		OperationType = 3;
		Reset();
		txtSearch->Enabled = true;
	}

	private: System::Void radioButton4_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		OperationType = 4;
		Reset();
		txtSearch->Enabled = true;
	}

	private: void Reset() {
				 progressBar1->Value = 0;
				 D1->Text = "0";
				 D2->Text = "0";
				 D3->Text = "0";
				 D4->Text = "0";
				 D5->Text = "0";
				 D6->Text = "0";
				 D7->Text = "0";
				 D8->Text = "9999999";
				 D9->Text = "9999999";
				 D10->Text = "9999999";
				 D11->Text = "9999999";
				 D12->Text = "9999999";
				 D13->Text = "9999999";
				 D14->Text = "9999999";
				 D15->Text = "9999999";
				 D16->Text = "9999999";
				 D17->Text = "9999999";
				 D18->Text = "9999999";
				 D19->Text = "9999999";
				 D20->Text = "9999999";
				 D21->Text = "9999999";
				 D22->Text = "9999999";
				 D23->Text = "9999999";
				 D24->Text = "9999999";
				 D25->Text = "9999999";
				 D26->Text = "9999999";
				 D27->Text = "9999999";
				 D8->Visible = false;
				 D9->Visible = false;
				 D10->Visible = false;
				 D11->Visible = false;
				 D12->Visible = false;
				 D13->Visible = false;
				 D14->Visible = false;
				 D15->Visible = false;
				 D16->Visible = false;
				 D17->Visible = false;
				 D18->Visible = false;
				 D19->Visible = false;
				 D20->Visible = false;
				 D21->Visible = false;
				 D22->Visible = false;
				 D23->Visible = false;
				 D24->Visible = false;
				 D25->Visible = false;
				 D26->Visible = false;
				 D27->Visible = false;
				 btnAdd->Enabled = true;
				 btnRemove->Enabled = false;
				 txtMinNum->Text = "";
				 txtMaxCurrent->Text = "";
				 smallestNum = 9999;
				 arrow1X = 34;
				 arrow2X = 67;
				 Arrow1->Location = System::Drawing::Point(34, 70);
				 Arrow2->Location = System::Drawing::Point(67, 70);
				 btnNext->Enabled = true;
				 Arrow2->Visible = true;
				 Arrow1->Visible = true;
				 pictureBox1->Visible = true;
				 txtMinNum->Visible = true;
				 Minlbl->Visible = true;
				 txtMaxCurrent->Visible = true;
				 label2->Visible = true;
				 lblSearch->Visible = false;
				 lblOperations->Visible = false;
				 label3->Visible = false;
				 textBox2->Visible = false;
				 txtSearch->Visible = false;
				 txtOperations->Visible = false;
				 txtOperations->Text = "0";
				 txtSearch->Text = "0";
				 textBox2->Text = "";
				 Arrow3->Visible = false;
				 TestChecker = false;
				 mySteps = 0;
				 StepsCalculated = false;
				 smallestNum = 999999;
				 MaxNum = -9999;
				 saveLoc = 0;
				 NumberOfOperations = 0;
				 LinearFound = true;
				 TotalSteps = 0;
				 if (OperationType == 1) {
					 progressBar1->Visible = true;
					 label1->Text = "Bubble Sort";
					 label2->Text = "Maximum Number";
					 txtMinNum->Text = "";
					 txtMaxCurrent->Text = "";
				 }
				 else if (OperationType == 2) {
					 progressBar1->Visible = true;
					 btnNext->Enabled = true;
					 label1->Text = "Selection Sort";
					 label2->Text = "Current Number";
					 txtMinNum->Text = "";
					 txtMaxCurrent->Text = "";
				 }
				 else if (OperationType == 3) {
					 progressBar1->Visible = false;
					 label1->Text = "Linear Search";
					 Arrow2->Visible = false;
					 pictureBox1->Visible = false;
					 txtMinNum->Visible = false;
					 Minlbl->Visible = false;
					 txtMaxCurrent->Visible = false;
					 label2->Visible = false;
					 lblSearch->Visible = true;
					 lblOperations->Visible = true;
					 label3->Visible = true;
					 textBox2->Visible = true;
					 txtSearch->Visible = true;
					 txtOperations->Visible = true;
					 txtOperations->Text = "0";
					 txtSearch->Text = "0";
					 textBox2->Text = "";
					 lblOperations->Text = "Number Of Operations";
					 label3->Text = "Current Number";
				 }
				 else if (OperationType == 4) {
					 progressBar1->Visible = false;
					 label1->Text = "Binary Search";
					 pictureBox1->Visible = false;
					 txtMinNum->Visible = false;
					 Minlbl->Visible = false;
					 txtMaxCurrent->Visible = false;
					 label2->Visible = false;
					 lblSearch->Visible = true;
					 lblOperations->Visible = true;
					 label3->Visible = true;
					 textBox2->Visible = true;
					 txtSearch->Visible = true;
					 txtOperations->Visible = true;
					 txtOperations->Text = "0";
					 txtSearch->Text = "0";
					 textBox2->Text = "";
					 arrow2X = NumOfFieldsEnabled() * 33 + 1;
					 this->Arrow2->Location = System::Drawing::Point(arrow2X, 70);
					 arrow3X = (((NumOfFieldsEnabled() + 1) / 2) * 33) + 1;
					 this->Arrow3->Location = System::Drawing::Point(arrow3X, 70);
					 Arrow3->Visible = true;
					 lblOperations->Text = "Last Number";
					 label3->Text = "First Number";
				 }
			 }

	private: System::Void btnAdd_Click(System::Object^  sender, System::EventArgs^  e) {
		if (D8->Visible == false) {
			D8->Visible = true;
			D8->Text = "0";
			btnRemove->Enabled = true;
		}
		else if (D9->Visible == false) {
			D9->Visible = true;
			D9->Text = "0";
		}
		else if (D10->Visible == false) {
			D10->Visible = true;
			D10->Text = "0";
		}
		else if (D11->Visible == false) {
			D11->Visible = true;
			D11->Text = "0";
		}
		else if (D12->Visible == false) {
			D12->Visible = true;
			D12->Text = "0";
		}
		else if (D13->Visible == false) {
			D13->Visible = true;
			D13->Text = "0";
		}
		else if (D14->Visible == false) {
			D14->Visible = true;
			D14->Text = "0";
		}
		else if (D15->Visible == false) {
			D15->Visible = true;
			D15->Text = "0";
		}
		else if (D16->Visible == false) {
			D16->Visible = true;
			D16->Text = "0";
		}
		else if (D17->Visible == false) {
			D17->Visible = true;
			D17->Text = "0";
		}
		else if (D18->Visible == false) {
			D18->Visible = true;
			D18->Text = "0";
		}
		else if (D19->Visible == false) {
			D19->Visible = true;
			D19->Text = "0";
		}
		else if (D20->Visible == false) {
			D20->Visible = true;
			D20->Text = "0";
		}
		else if (D21->Visible == false) {
			D21->Visible = true;
			D21->Text = "0";
		}
		else if (D22->Visible == false) {
			D22->Visible = true;
			D22->Text = "0";
		}
		else if (D23->Visible == false) {
			D23->Visible = true;
			D23->Text = "0";
		}
		else if (D24->Visible == false) {
			D24->Visible = true;
			D24->Text = "0";
		}
		else if (D25->Visible == false) {
			D25->Visible = true;
			D25->Text = "0";
		}
		else if (D26->Visible == false) {
			D26->Visible = true;
			D26->Text = "0";
		}
		else if (D27->Visible == false) {
			D27->Visible = true;
			D27->Text = "0";
			btnAdd->Enabled = false;
		}
		if (OperationType == 4) {
			arrow2X = NumOfFieldsEnabled() * 33 + 1;
			this->Arrow2->Location = System::Drawing::Point(arrow2X, 70);
			arrow3X = (((NumOfFieldsEnabled() + 1) / 2) * 33) + 1;
			this->Arrow3->Location = System::Drawing::Point(arrow3X, 70);
		}
	}

	private: System::Void btnRemove_Click(System::Object^  sender, System::EventArgs^  e) {
		if (D27->Visible == true) {
			D27->Visible = false;
			D27->Text = "9999999";
			btnAdd->Enabled = true;
		}
		else if (D26->Visible == true) {
			D26->Visible = false;
			D26->Text = "9999999";
		}
		else if (D25->Visible == true) {
			D25->Visible = false;
			D25->Text = "9999999";
		}
		else if (D24->Visible == true) {
			D24->Visible = false;
			D24->Text = "9999999";
		}
		else if (D23->Visible == true) {
			D23->Visible = false;
			D23->Text = "9999999";
		}
		else if (D22->Visible == true) {
			D22->Visible = false;
			D22->Text = "9999999";
		}
		else if (D21->Visible == true) {
			D21->Visible = false;
			D21->Text = "9999999";
		}
		else if (D20->Visible == true) {
			D20->Visible = false;
			D20->Text = "9999999";
		}
		else if (D19->Visible == true) {
			D19->Visible = false;
			D19->Text = "9999999";
		}
		else if (D18->Visible == true) {
			D18->Visible = false;
			D18->Text = "9999999";
		}
		else if (D17->Visible == true) {
			D17->Visible = false;
			D17->Text = "9999999";
		}
		else if (D16->Visible == true) {
			D16->Visible = false;
			D16->Text = "9999999";
		}
		else if (D15->Visible == true) {
			D15->Visible = false;
			D15->Text = "9999999";
		}
		else if (D14->Visible == true) {
			D14->Visible = false;
			D14->Text = "9999999";
		}
		else if (D13->Visible == true) {
			D13->Visible = false;
			D13->Text = "9999999";
		}
		else if (D12->Visible == true) {
			D12->Visible = false;
			D12->Text = "9999999";
		}
		else if (D11->Visible == true) {
			D11->Visible = false;
			D11->Text = "9999999";
		}
		else if (D10->Visible == true) {
			D10->Visible = false;
			D10->Text = "9999999";
		}
		else if (D9->Visible == true) {
			D9->Visible = false;
			D9->Text = "9999999";
		}
		else if (D8->Visible == true) {
			D8->Visible = false;
			D8->Text = "9999999";
			btnRemove->Enabled = false;
		}
		if (OperationType == 4) {
			arrow2X = NumOfFieldsEnabled() * 33 + 1;
			this->Arrow2->Location = System::Drawing::Point(arrow2X, 70);
			arrow3X = (((NumOfFieldsEnabled() + 1) / 2) * 33) + 1;
			this->Arrow3->Location = System::Drawing::Point(arrow3X, 70);
		}
	}

	private: System::Void exitToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
		Application::Exit();
	}

	private: System::Void restartToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		Application::Restart();
	}

	private: System::Void aboutToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		MessageBox::Show("Made by: \n Mohamed Ahmed \n Abdelrahman Salah \n Amr Osama \n Mohamed Ehab \n \n Supervised by: Dr. Ashraf Abdelraouf", "About");
	}

			 /* **************************************************** Sharing Functions **************************************************** */

	private: int GetnumberSelection(int num) {
		if (num == 1) {
			return Convert::ToInt32(D1->Text);
		}
		else if (num == 2) {
			return Convert::ToInt32(D2->Text);
		}
		else if (num == 3) {
			return Convert::ToInt32(D3->Text);
		}
		else if (num == 4) {
			return Convert::ToInt32(D4->Text);
		}
		else if (num == 5) {
			return Convert::ToInt32(D5->Text);
		}
		else if (num == 6) {
			return Convert::ToInt32(D6->Text);
		}
		else if (num == 7) {
			return Convert::ToInt32(D7->Text);
		}
		else if (num == 8) {
			return Convert::ToInt32(D8->Text);
		}
		else if (num == 9) {
			return Convert::ToInt32(D9->Text);
		}
		else if (num == 10) {
			return Convert::ToInt32(D10->Text);
		}
		else if (num == 11) {
			return Convert::ToInt32(D11->Text);
		}
		else if (num == 12) {
			return Convert::ToInt32(D12->Text);
		}
		else if (num == 13) {
			return Convert::ToInt32(D13->Text);
		}
		else if (num == 14) {
			return Convert::ToInt32(D14->Text);
		}
		else if (num == 15) {
			return Convert::ToInt32(D15->Text);
		}
		else if (num == 16) {
			return Convert::ToInt32(D16->Text);
		}
		else if (num == 17) {
			return Convert::ToInt32(D17->Text);
		}
		else if (num == 18) {
			return Convert::ToInt32(D18->Text);
		}
		else if (num == 19) {
			return Convert::ToInt32(D19->Text);
		}
		else if (num == 20) {
			return Convert::ToInt32(D20->Text);
		}
		else if (num == 21) {
			return Convert::ToInt32(D21->Text);
		}
		else if (num == 22) {
			return Convert::ToInt32(D22->Text);
		}
		else if (num == 23) {
			return Convert::ToInt32(D23->Text);
		}
		else if (num == 24) {
			return Convert::ToInt32(D24->Text);
		}
		else if (num == 25) {
			return Convert::ToInt32(D25->Text);
		}
		else if (num == 26) {
			return Convert::ToInt32(D26->Text);
		}
		else if (num == 27) {
			return Convert::ToInt32(D27->Text);
		}
	}

	private:int NumOfFieldsEnabled() {
		int ctr = 0;
		if (D27->Visible == true) {
			ctr++;
		}
		if (D26->Visible == true) {
			ctr++;
		}
		if (D25->Visible == true) {
			ctr++;
		}
		if (D24->Visible == true) {
			ctr++;
		}
		if (D23->Visible == true) {
			ctr++;
		}
		if (D22->Visible == true) {
			ctr++;
		}
		if (D21->Visible == true) {
			ctr++;
		}
		if (D20->Visible == true) {
			ctr++;
		}
		if (D19->Visible == true) {
			ctr++;
		}
		if (D18->Visible == true) {
			ctr++;
		}
		if (D17->Visible == true) {
			ctr++;
		}
		if (D16->Visible == true) {
			ctr++;
		}
		if (D15->Visible == true) {
			ctr++;
		}
		if (D14->Visible == true) {
			ctr++;
		}
		if (D13->Visible == true) {
			ctr++;
		}
		if (D12->Visible == true) {
			ctr++;
		}
		if (D11->Visible == true) {
			ctr++;
		}
		if (D10->Visible == true) {
			ctr++;
		}
		if (D9->Visible == true) {
			ctr++;
		}
		if (D8->Visible == true) {
			ctr++;
		}
		return ctr + 7;
	}

	private: int Arrow1Location() {
		return (arrow1X - 1) / 33;
	}

	private: int Arrow2Location() {
		return (arrow2X - 1) / 33;
	}

	private: int Arrow3Location() {
		return (arrow3X - 1) / 33;
	}

			 /* **************************************************** Bubble Sort **************************************************** */

	private: void bubbleSort() {
		int num1 = GetnumberSelection(Arrow1Location());
		int num2 = GetnumberSelection(Arrow2Location());
		Exchange(num1, num2, Arrow1Location());
	}

	private: void Exchange(int num1, int num2, int arrow1) {
		if (num1 > num2) {
			txtMaxCurrent->Text = Convert::ToString(num1);
			txtMinNum->Text = Convert::ToString(num2);
			int temp;
			temp = num1;
			num1 = num2;
			num2 = temp;
			if (arrow1 == 1) {
				D1->Text = Convert::ToString(num1);
				D2->Text = Convert::ToString(num2);
			}
			else if (arrow1 == 2) {
				D2->Text = Convert::ToString(num1);
				D3->Text = Convert::ToString(num2);
			}
			else if (arrow1 == 3) {
				D3->Text = Convert::ToString(num1);
				D4->Text = Convert::ToString(num2);
			}
			else if (arrow1 == 4) {
				D4->Text = Convert::ToString(num1);
				D5->Text = Convert::ToString(num2);
			}
			else if (arrow1 == 5) {
				D5->Text = Convert::ToString(num1);
				D6->Text = Convert::ToString(num2);
			}
			else if (arrow1 == 6) {
				D6->Text = Convert::ToString(num1);
				D7->Text = Convert::ToString(num2);
			}
			else if (arrow1 == 7) {
				D7->Text = Convert::ToString(num1);
				D8->Text = Convert::ToString(num2);
			}
			else if (arrow1 == 8) {
				D8->Text = Convert::ToString(num1);
				D9->Text = Convert::ToString(num2);
			}
			else if (arrow1 == 9) {
				D9->Text = Convert::ToString(num1);
				D10->Text = Convert::ToString(num2);
			}
			else if (arrow1 == 10) {
				D10->Text = Convert::ToString(num1);
				D11->Text = Convert::ToString(num2);
			}
			else if (arrow1 == 11) {
				D11->Text = Convert::ToString(num1);
				D12->Text = Convert::ToString(num2);
			}
			else if (arrow1 == 12) {
				D12->Text = Convert::ToString(num1);
				D13->Text = Convert::ToString(num2);
			}
			else if (arrow1 == 13) {
				D13->Text = Convert::ToString(num1);
				D14->Text = Convert::ToString(num2);
			}
			else if (arrow1 == 14) {
				D14->Text = Convert::ToString(num1);
				D15->Text = Convert::ToString(num2);
			}
			else if (arrow1 == 15) {
				D15->Text = Convert::ToString(num1);
				D16->Text = Convert::ToString(num2);
			}
			else if (arrow1 == 16) {
				D16->Text = Convert::ToString(num1);
				D17->Text = Convert::ToString(num2);
			}
			else if (arrow1 == 17) {
				D17->Text = Convert::ToString(num1);
				D18->Text = Convert::ToString(num2);
			}
			else if (arrow1 == 18) {
				D18->Text = Convert::ToString(num1);
				D19->Text = Convert::ToString(num2);
			}
			else if (arrow1 == 19) {
				D19->Text = Convert::ToString(num1);
				D20->Text = Convert::ToString(num2);
			}
			else if (arrow1 == 20) {
				D20->Text = Convert::ToString(num1);
				D21->Text = Convert::ToString(num2);
			}
			else if (arrow1 == 21) {
				D21->Text = Convert::ToString(num1);
				D22->Text = Convert::ToString(num2);
			}
			else if (arrow1 == 22) {
				D22->Text = Convert::ToString(num1);
				D23->Text = Convert::ToString(num2);
			}
			else if (arrow1 == 23) {
				D23->Text = Convert::ToString(num1);
				D24->Text = Convert::ToString(num2);
			}
			else if (arrow1 == 24) {
				D24->Text = Convert::ToString(num1);
				D25->Text = Convert::ToString(num2);
			}
			else if (arrow1 == 25) {
				D25->Text = Convert::ToString(num1);
				D26->Text = Convert::ToString(num2);
			}
			else if (arrow1 == 26) {
				D26->Text = Convert::ToString(num1);
				D27->Text = Convert::ToString(num2);
			}
		}
		else {
			txtMaxCurrent->Text = "";
			txtMinNum->Text = "";
			MoveArrows();
		}
	}

	private: void MoveArrows() {
		if (arrow2X < NumOfFieldsEnabled() * 33 + 1) {
			arrow1X = arrow1X + 33;
			arrow2X = arrow2X + 33;
			Arrow1->Location = System::Drawing::Point(arrow1X, 70);
			Arrow2->Location = System::Drawing::Point(arrow2X, 70);
		}
		else if (arrow2X == NumOfFieldsEnabled() * 33 + 1) {
			arrow1X = 34;
			arrow2X = 67;
			Arrow1->Location = System::Drawing::Point(arrow1X, 70);
			Arrow2->Location = System::Drawing::Point(arrow2X, 70);
		}
	}

			 /* **************************************************** Selection Sort **************************************************** */

	private: void SelectionSort() {
		int arrow1 = Arrow1Location();
		int arrow2 = Arrow2Location();
		int LastFieald = NumOfFieldsEnabled();
		int currentNum = GetnumberSelection(arrow1); //Bysagel 2lrakem 2lsabet

		if (arrow2X == LastFieald * 33 + 1) {
			if (GetnumberSelection(arrow2) < smallestNum) {
				smallestNum = GetnumberSelection(arrow2);
				txtMinNum->Text = "";
				txtMaxCurrent->Text = "";
				saveLoc = arrow2;
			}
			if (currentNum > smallestNum) {
				ExchangeSelection(saveLoc, arrow1, currentNum, smallestNum);
			}
			smallestNum = 999999;
			moveArrowSelection();
		}
		else if (GetnumberSelection(arrow2) < smallestNum) {
			smallestNum = GetnumberSelection(arrow2);
			txtMinNum->Text = "";
			txtMaxCurrent->Text = "";
			saveLoc = arrow2;
			moveArrowSelection();
		}
		else if (arrow2X != LastFieald * 33 + 1 && GetnumberSelection(arrow2) >= smallestNum) {
			moveArrowSelection();
		}
	}

	private: void ExchangeSelection(int savedLoc, int arrow1, int currentNum, int SmallestNum) {
		txtMaxCurrent->Text = Convert::ToString(currentNum);
		txtMinNum->Text = Convert::ToString(SmallestNum);
		if (arrow1 == 1) {
			D1->Text = Convert::ToString(SmallestNum);
		}
		else if (arrow1 == 2) {
			D2->Text = Convert::ToString(SmallestNum);
		}
		else if (arrow1 == 3) {
			D3->Text = Convert::ToString(SmallestNum);
		}
		else if (arrow1 == 4) {
			D4->Text = Convert::ToString(SmallestNum);
		}
		else if (arrow1 == 5) {
			D5->Text = Convert::ToString(SmallestNum);
		}
		else if (arrow1 == 6) {
			D6->Text = Convert::ToString(SmallestNum);
		}
		else if (arrow1 == 7) {
			D7->Text = Convert::ToString(SmallestNum);
		}
		else if (arrow1 == 8) {
			D8->Text = Convert::ToString(SmallestNum);
		}
		else if (arrow1 == 9) {
			D9->Text = Convert::ToString(SmallestNum);
		}
		else if (arrow1 == 10) {
			D10->Text = Convert::ToString(SmallestNum);
		}
		else if (arrow1 == 11) {
			D11->Text = Convert::ToString(SmallestNum);
		}
		else if (arrow1 == 12) {
			D12->Text = Convert::ToString(SmallestNum);
		}
		else if (arrow1 == 13) {
			D13->Text = Convert::ToString(SmallestNum);
		}
		else if (arrow1 == 14) {
			D14->Text = Convert::ToString(SmallestNum);
		}
		else if (arrow1 == 15) {
			D15->Text = Convert::ToString(SmallestNum);
		}
		else if (arrow1 == 16) {
			D16->Text = Convert::ToString(SmallestNum);
		}
		else if (arrow1 == 17) {
			D17->Text = Convert::ToString(SmallestNum);
		}
		else if (arrow1 == 18) {
			D18->Text = Convert::ToString(SmallestNum);
		}
		else if (arrow1 == 19) {
			D19->Text = Convert::ToString(SmallestNum);
		}
		else if (arrow1 == 20) {
			D20->Text = Convert::ToString(SmallestNum);
		}
		else if (arrow1 == 21) {
			D21->Text = Convert::ToString(SmallestNum);
		}
		else if (arrow1 == 22) {
			D22->Text = Convert::ToString(SmallestNum);
		}
		else if (arrow1 == 23) {
			D23->Text = Convert::ToString(SmallestNum);
		}
		else if (arrow1 == 24) {
			D24->Text = Convert::ToString(SmallestNum);
		}
		else if (arrow1 == 25) {
			D25->Text = Convert::ToString(SmallestNum);
		}
		else if (arrow1 == 26) {
			D26->Text = Convert::ToString(SmallestNum);
		}


		if (savedLoc == 1) {
			D1->Text = Convert::ToString(currentNum);
		}
		else if (savedLoc == 2) {
			D2->Text = Convert::ToString(currentNum);
		}
		else if (savedLoc == 3) {
			D3->Text = Convert::ToString(currentNum);
		}
		else if (savedLoc == 4) {
			D4->Text = Convert::ToString(currentNum);
		}
		else if (savedLoc == 5) {
			D5->Text = Convert::ToString(currentNum);
		}
		else if (savedLoc == 6) {
			D6->Text = Convert::ToString(currentNum);
		}
		else if (savedLoc == 7) {
			D7->Text = Convert::ToString(currentNum);
		}
		else if (savedLoc == 8) {
			D8->Text = Convert::ToString(currentNum);
		}
		else if (savedLoc == 9) {
			D9->Text = Convert::ToString(currentNum);
		}
		else if (savedLoc == 10) {
			D10->Text = Convert::ToString(currentNum);
		}
		else if (savedLoc == 11) {
			D11->Text = Convert::ToString(currentNum);
		}
		else if (savedLoc == 12) {
			D12->Text = Convert::ToString(currentNum);
		}
		else if (savedLoc == 13) {
			D13->Text = Convert::ToString(currentNum);
		}
		else if (savedLoc == 14) {
			D14->Text = Convert::ToString(currentNum);
		}
		else if (savedLoc == 15) {
			D15->Text = Convert::ToString(currentNum);
		}
		else if (savedLoc == 16) {
			D16->Text = Convert::ToString(currentNum);
		}
		else if (savedLoc == 17) {
			D17->Text = Convert::ToString(currentNum);
		}
		else if (savedLoc == 18) {
			D18->Text = Convert::ToString(currentNum);
		}
		else if (savedLoc == 19) {
			D19->Text = Convert::ToString(currentNum);
		}
		else if (savedLoc == 20) {
			D20->Text = Convert::ToString(currentNum);
		}
		else if (savedLoc == 21) {
			D21->Text = Convert::ToString(currentNum);
		}
		else if (savedLoc == 22) {
			D22->Text = Convert::ToString(currentNum);
		}
		else if (savedLoc == 23) {
			D23->Text = Convert::ToString(currentNum);
		}
		else if (savedLoc == 24) {
			D24->Text = Convert::ToString(currentNum);
		}
		else if (savedLoc == 25) {
			D25->Text = Convert::ToString(currentNum);
		}
		else if (savedLoc == 26) {
			D26->Text = Convert::ToString(currentNum);
		}
		else if (savedLoc == 27) {
			D27->Text = Convert::ToString(currentNum);
		}
	}

	private:void moveArrowSelection() {
		int LastFieldPos = NumOfFieldsEnabled() * 33 + 1;
		if (arrow1X != LastFieldPos - 33 && arrow2X != LastFieldPos) {
			arrow2X = arrow2X + 33;
			Arrow2->Location = System::Drawing::Point(arrow2X, 70);
		}
		else if (arrow1X == LastFieldPos - 33) {
			if (TestChecker == true) {
				timer1->Enabled = false;
				MessageBox::Show("Numbers are successfuly sorted", "Done");
				lblPercentage->Visible = false;
				btnNext->Enabled = false;
				btnNext->Visible = true;
				btnRandom->Enabled = true;
				btnAdd->Enabled = true;
				btnRemove->Enabled = true;
				enableFields();
				btnPause->Visible = false;
				pause = 1;
				Arrow1->Location = System::Drawing::Point(34, 70);
				Arrow2->Location = System::Drawing::Point(67, 70);
			}

			arrow1X = 34;
			arrow2X = 67;
			Arrow1->Location = System::Drawing::Point(34, 70);
			Arrow2->Location = System::Drawing::Point(67, 70);

		}
		else if (arrow2X == LastFieldPos) {
			arrow2X = arrow1X + 66;
			arrow1X = arrow1X + 33;
			Arrow1->Location = System::Drawing::Point(arrow1X, 70);
			Arrow2->Location = System::Drawing::Point(arrow2X, 70);
		}
	}

			/* **************************************************** Linear Search **************************************************** */

	private: void LinearSearch() {
		textBox2->Text = Convert::ToString(GetnumberSelection(Arrow1Location()));
		LinearArrowMove();
		textBox2->Text = Convert::ToString(GetnumberSelection(Arrow1Location()));
	}

	private: void LinearArrowMove() {
		int LastFieldPos = NumOfFieldsEnabled() * 33 + 1;
		if (arrow1X == LastFieldPos) {
			LinearFound = false;
			MessageBox::Show("The Number You are Searching On Dosen't Exist", "Not Found");
			timer1->Enabled = false;
			btnNext->Enabled = false;
			btnRandom->Enabled = true;
			btnAdd->Enabled = true;
			btnRemove->Enabled = true;
			enableFields();
		}
		else {
			arrow1X += 33;
			this->Arrow1->Location = System::Drawing::Point(arrow1X, 70);
		}

	}

			 /* **************************************************** Binary Search **************************************************** */

	private: void Sort() {
		int arr[27];
		for (int i = 27; i > NumOfFieldsEnabled(); i--) {
			arr[i - 1] = 99999999;
		}

		for (int i = 0; i < NumOfFieldsEnabled(); i++) {
			arr[i] = GetnumberSelection(i + 1);
		}
		for (int i = 0; i < NumOfFieldsEnabled(); ++i)
			for (int j = 0; j < NumOfFieldsEnabled() - i - 1; ++j)
				if (arr[j] > arr[j + 1])
				{
					int temp = arr[j];
					arr[j] = arr[j + 1];
					arr[j + 1] = temp;
				}

		D1->Text = Convert::ToString(arr[0]);
		D2->Text = Convert::ToString(arr[1]);
		D3->Text = Convert::ToString(arr[2]);
		D4->Text = Convert::ToString(arr[3]);
		D5->Text = Convert::ToString(arr[4]);
		D6->Text = Convert::ToString(arr[5]);
		D7->Text = Convert::ToString(arr[6]);
		D8->Text = Convert::ToString(arr[7]);
		D9->Text = Convert::ToString(arr[8]);
		D10->Text = Convert::ToString(arr[9]);
		D11->Text = Convert::ToString(arr[10]);
		D12->Text = Convert::ToString(arr[11]);
		D13->Text = Convert::ToString(arr[12]);
		D14->Text = Convert::ToString(arr[13]);
		D15->Text = Convert::ToString(arr[14]);
		D16->Text = Convert::ToString(arr[15]);
		D17->Text = Convert::ToString(arr[16]);
		D18->Text = Convert::ToString(arr[17]);
		D19->Text = Convert::ToString(arr[18]);
		D20->Text = Convert::ToString(arr[19]);
		D21->Text = Convert::ToString(arr[20]);
		D22->Text = Convert::ToString(arr[21]);
		D23->Text = Convert::ToString(arr[22]);
		D24->Text = Convert::ToString(arr[23]);
		D25->Text = Convert::ToString(arr[24]);
		D26->Text = Convert::ToString(arr[25]);
		D27->Text = Convert::ToString(arr[26]);

	}

	private: void BinarySearch() {
		bool Greater;
		int Low = GetnumberSelection(Arrow1Location());
		int High = GetnumberSelection(Arrow2Location());
		int Medium = GetnumberSelection(Arrow3Location());
		int wanted = Convert::ToInt32(txtSearch->Text);
		if (wanted > Medium) {
			Greater = true;
		}
		else
			Greater = false;
		BinaryMoveArrows(Greater);
		txtOperations->Text = Convert::ToString(GetnumberSelection(Arrow2Location()));
		textBox2->Text = Convert::ToString(GetnumberSelection(Arrow1Location()));
	}

	private: void BinaryMoveArrows(bool Greater) {
		if (Greater == true) {
			arrow1X = arrow3X;
			arrow3X = (((((arrow1X - 1) / 33) + ((arrow2X - 1) / 33)) / 2) * 33) + 1;
			this->Arrow1->Location = System::Drawing::Point(arrow1X, 70);
			this->Arrow3->Location = System::Drawing::Point(arrow3X, 70);
		}
		else if (Greater == false) {
			arrow2X = arrow3X;
			arrow3X = (((((arrow1X - 1) / 33) + ((arrow2X - 1) / 33)) / 2) * 33) + 1;
			this->Arrow2->Location = System::Drawing::Point(arrow2X, 70);
			this->Arrow3->Location = System::Drawing::Point(arrow3X, 70);
		}
	}

	private: System::Void stepbyStepToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		MovementType = false;
		trackBar1->Visible = false;
		lblSlow->Visible = false;
		lblFast->Visible = false;
		btnNext->Text = "Next";
	}

	private: System::Void animationToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		MovementType = true;
		trackBar1->Visible = true;
		lblSlow->Visible = true;
		lblFast->Visible = true;
		btnNext->Text = "Start";
	}

	private: System::Void trackBar1_Scroll(System::Object^  sender, System::EventArgs^  e) {

		if (trackBar1->Value == 0) {
			timeInterval = 1800;
			timer1->Interval = timeInterval;
		}
		else if (trackBar1->Value == 1) {
			timeInterval = 1600;
			timer1->Interval = timeInterval;
		}
		else if (trackBar1->Value == 2) {
			timeInterval = 1400;
			timer1->Interval = timeInterval;
		}
		else if (trackBar1->Value == 3) {
			timeInterval = 1300;
			timer1->Interval = timeInterval;
		}
		else if (trackBar1->Value == 4) {
			timeInterval = 1200;
			timer1->Interval = timeInterval;
		}
		else if (trackBar1->Value == 5) {
			timeInterval = 1000;
			timer1->Interval = timeInterval;
		}
		else if (trackBar1->Value == 6) {
			timeInterval = 800;
			timer1->Interval = timeInterval;
		}
		else if (trackBar1->Value == 7) {
			timeInterval = 700;
			timer1->Interval = timeInterval;
		}
		else if (trackBar1->Value == 8) {
			timeInterval = 600;
			timer1->Interval = timeInterval;
		}
		else if (trackBar1->Value == 9) {
			timeInterval = 500;
			timer1->Interval = timeInterval;
		}
		else if (trackBar1->Value == 10) {
			timeInterval = 100;
			timer1->Interval = timeInterval;
		}

	}

	private: System::Void btnPause_Click(System::Object^  sender, System::EventArgs^  e) {
	if (pause == 1) {
		timer1->Enabled = false;
		btnPause->Text = "Resume";
		pause = 2;
	}
	else if (pause == 2) {
		timer1->Enabled = true;
		btnPause->Text = "Pause";
		pause = 1;
	}

}
};
}