#pragma once
#include<iostream>
#include<string>
namespace ckalckulitor {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
    using namespace std;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ close;
    private: System::Windows::Forms::Button^ button_minus_plus;

    private: System::Windows::Forms::Button^ button_del;
    private: System::Windows::Forms::Button^ button_persent;

    private: System::Windows::Forms::Button^ button5;
    private: System::Windows::Forms::Button^ button_umno;
    private: System::Windows::Forms::Button^ button9;
    private: System::Windows::Forms::Button^ button_minus;
    private: System::Windows::Forms::Button^ button11;
    private: System::Windows::Forms::Button^ button12;
    private: System::Windows::Forms::Button^ button13;
    private: System::Windows::Forms::Button^ button_plus;
    private: System::Windows::Forms::Button^ button15;
    private: System::Windows::Forms::Button^ button16;
    private: System::Windows::Forms::Button^ button_ac;


    private: System::Windows::Forms::Button^ button24;
    private: System::Windows::Forms::Button^ button_ravno;
    private: System::Windows::Forms::Button^ button_toch;

    private: System::Windows::Forms::Button^ button27;
    private: System::Windows::Forms::Label^ chet;
    private: float first_num;
    private: char action=' ';
    private: bool is_equal = false;
    private: System::Windows::Forms::Button^ button1;

    protected:

	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
            this->close = (gcnew System::Windows::Forms::Button());
            this->button_minus_plus = (gcnew System::Windows::Forms::Button());
            this->button_del = (gcnew System::Windows::Forms::Button());
            this->button_persent = (gcnew System::Windows::Forms::Button());
            this->button5 = (gcnew System::Windows::Forms::Button());
            this->button_umno = (gcnew System::Windows::Forms::Button());
            this->button9 = (gcnew System::Windows::Forms::Button());
            this->button_minus = (gcnew System::Windows::Forms::Button());
            this->button11 = (gcnew System::Windows::Forms::Button());
            this->button12 = (gcnew System::Windows::Forms::Button());
            this->button13 = (gcnew System::Windows::Forms::Button());
            this->button_plus = (gcnew System::Windows::Forms::Button());
            this->button15 = (gcnew System::Windows::Forms::Button());
            this->button16 = (gcnew System::Windows::Forms::Button());
            this->button_ac = (gcnew System::Windows::Forms::Button());
            this->button24 = (gcnew System::Windows::Forms::Button());
            this->button_ravno = (gcnew System::Windows::Forms::Button());
            this->button_toch = (gcnew System::Windows::Forms::Button());
            this->button27 = (gcnew System::Windows::Forms::Button());
            this->chet = (gcnew System::Windows::Forms::Label());
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->SuspendLayout();
            // 
            // close
            // 
            this->close->BackColor = System::Drawing::Color::Red;
            this->close->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->close->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->close->ForeColor = System::Drawing::SystemColors::ButtonFace;
            this->close->Location = System::Drawing::Point(2, 2);
            this->close->Name = L"close";
            this->close->Size = System::Drawing::Size(24, 24);
            this->close->TabIndex = 0;
            this->close->Text = L"X";
            this->close->UseVisualStyleBackColor = false;
            this->close->Click += gcnew System::EventHandler(this, &MyForm::close_Click);
            // 
            // button_minus_plus
            // 
            this->button_minus_plus->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(125)),
                static_cast<System::Int32>(static_cast<System::Byte>(103)), static_cast<System::Int32>(static_cast<System::Byte>(135)));
            this->button_minus_plus->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
            this->button_minus_plus->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->button_minus_plus->ForeColor = System::Drawing::SystemColors::ControlLight;
            this->button_minus_plus->Location = System::Drawing::Point(77, 99);
            this->button_minus_plus->Name = L"button_minus_plus";
            this->button_minus_plus->Size = System::Drawing::Size(60, 60);
            this->button_minus_plus->TabIndex = 3;
            this->button_minus_plus->Text = L"+/-";
            this->button_minus_plus->UseVisualStyleBackColor = false;
            this->button_minus_plus->Click += gcnew System::EventHandler(this, &MyForm::button_minus_plus_Click);
            // 
            // button_del
            // 
            this->button_del->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(226)), static_cast<System::Int32>(static_cast<System::Byte>(153)),
                static_cast<System::Int32>(static_cast<System::Byte>(93)));
            this->button_del->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
            this->button_del->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->button_del->ForeColor = System::Drawing::SystemColors::ControlLight;
            this->button_del->Location = System::Drawing::Point(207, 99);
            this->button_del->Name = L"button_del";
            this->button_del->Size = System::Drawing::Size(60, 60);
            this->button_del->TabIndex = 4;
            this->button_del->Text = L"/";
            this->button_del->UseVisualStyleBackColor = false;
            this->button_del->Click += gcnew System::EventHandler(this, &MyForm::button_del_Click);
            // 
            // button_persent
            // 
            this->button_persent->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(125)), static_cast<System::Int32>(static_cast<System::Byte>(103)),
                static_cast<System::Int32>(static_cast<System::Byte>(135)));
            this->button_persent->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
            this->button_persent->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->button_persent->ForeColor = System::Drawing::SystemColors::ControlLight;
            this->button_persent->Location = System::Drawing::Point(141, 99);
            this->button_persent->Name = L"button_persent";
            this->button_persent->Size = System::Drawing::Size(60, 60);
            this->button_persent->TabIndex = 5;
            this->button_persent->Text = L"%";
            this->button_persent->UseVisualStyleBackColor = false;
            this->button_persent->Click += gcnew System::EventHandler(this, &MyForm::button_persent_Click);
            // 
            // button5
            // 
            this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(207)), static_cast<System::Int32>(static_cast<System::Byte>(160)),
                static_cast<System::Int32>(static_cast<System::Byte>(212)));
            this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
            this->button5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->button5->ForeColor = System::Drawing::SystemColors::ControlLight;
            this->button5->Location = System::Drawing::Point(141, 163);
            this->button5->Name = L"button5";
            this->button5->Size = System::Drawing::Size(60, 60);
            this->button5->TabIndex = 9;
            this->button5->Text = L"9";
            this->button5->UseVisualStyleBackColor = false;
            this->button5->Click += gcnew System::EventHandler(this, &MyForm::num_Click);
            // 
            // button_umno
            // 
            this->button_umno->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(226)), static_cast<System::Int32>(static_cast<System::Byte>(153)),
                static_cast<System::Int32>(static_cast<System::Byte>(93)));
            this->button_umno->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
            this->button_umno->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->button_umno->ForeColor = System::Drawing::SystemColors::ControlLight;
            this->button_umno->Location = System::Drawing::Point(207, 163);
            this->button_umno->Name = L"button_umno";
            this->button_umno->Size = System::Drawing::Size(60, 60);
            this->button_umno->TabIndex = 8;
            this->button_umno->Text = L"*";
            this->button_umno->UseVisualStyleBackColor = false;
            this->button_umno->Click += gcnew System::EventHandler(this, &MyForm::button_umno_Click);
            // 
            // button9
            // 
            this->button9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(207)), static_cast<System::Int32>(static_cast<System::Byte>(160)),
                static_cast<System::Int32>(static_cast<System::Byte>(212)));
            this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
            this->button9->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->button9->ForeColor = System::Drawing::SystemColors::ControlLight;
            this->button9->Location = System::Drawing::Point(141, 229);
            this->button9->Name = L"button9";
            this->button9->Size = System::Drawing::Size(60, 60);
            this->button9->TabIndex = 13;
            this->button9->Text = L"6";
            this->button9->UseVisualStyleBackColor = false;
            this->button9->Click += gcnew System::EventHandler(this, &MyForm::num_Click);
            // 
            // button_minus
            // 
            this->button_minus->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(226)), static_cast<System::Int32>(static_cast<System::Byte>(153)),
                static_cast<System::Int32>(static_cast<System::Byte>(93)));
            this->button_minus->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
            this->button_minus->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->button_minus->ForeColor = System::Drawing::SystemColors::ControlLight;
            this->button_minus->Location = System::Drawing::Point(207, 229);
            this->button_minus->Name = L"button_minus";
            this->button_minus->Size = System::Drawing::Size(60, 60);
            this->button_minus->TabIndex = 12;
            this->button_minus->Text = L"-";
            this->button_minus->TextAlign = System::Drawing::ContentAlignment::TopCenter;
            this->button_minus->UseVisualStyleBackColor = false;
            this->button_minus->Click += gcnew System::EventHandler(this, &MyForm::button_minus_Click);
            // 
            // button11
            // 
            this->button11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(207)), static_cast<System::Int32>(static_cast<System::Byte>(160)),
                static_cast<System::Int32>(static_cast<System::Byte>(212)));
            this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
            this->button11->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->button11->ForeColor = System::Drawing::SystemColors::ControlLight;
            this->button11->Location = System::Drawing::Point(77, 229);
            this->button11->Name = L"button11";
            this->button11->Size = System::Drawing::Size(60, 60);
            this->button11->TabIndex = 11;
            this->button11->Text = L"5";
            this->button11->UseVisualStyleBackColor = false;
            this->button11->Click += gcnew System::EventHandler(this, &MyForm::num_Click);
            // 
            // button12
            // 
            this->button12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(207)), static_cast<System::Int32>(static_cast<System::Byte>(160)),
                static_cast<System::Int32>(static_cast<System::Byte>(212)));
            this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
            this->button12->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->button12->ForeColor = System::Drawing::SystemColors::ControlLight;
            this->button12->Location = System::Drawing::Point(12, 229);
            this->button12->Name = L"button12";
            this->button12->Size = System::Drawing::Size(60, 60);
            this->button12->TabIndex = 10;
            this->button12->Text = L"4";
            this->button12->UseVisualStyleBackColor = false;
            this->button12->Click += gcnew System::EventHandler(this, &MyForm::num_Click);
            // 
            // button13
            // 
            this->button13->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(207)), static_cast<System::Int32>(static_cast<System::Byte>(160)),
                static_cast<System::Int32>(static_cast<System::Byte>(212)));
            this->button13->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
            this->button13->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->button13->ForeColor = System::Drawing::SystemColors::ControlLight;
            this->button13->Location = System::Drawing::Point(141, 295);
            this->button13->Name = L"button13";
            this->button13->Size = System::Drawing::Size(60, 60);
            this->button13->TabIndex = 17;
            this->button13->Text = L"3";
            this->button13->UseVisualStyleBackColor = false;
            this->button13->Click += gcnew System::EventHandler(this, &MyForm::num_Click);
            // 
            // button_plus
            // 
            this->button_plus->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(226)), static_cast<System::Int32>(static_cast<System::Byte>(153)),
                static_cast<System::Int32>(static_cast<System::Byte>(93)));
            this->button_plus->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
            this->button_plus->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->button_plus->ForeColor = System::Drawing::SystemColors::ControlLight;
            this->button_plus->Location = System::Drawing::Point(207, 294);
            this->button_plus->Name = L"button_plus";
            this->button_plus->Size = System::Drawing::Size(60, 60);
            this->button_plus->TabIndex = 16;
            this->button_plus->Text = L"+";
            this->button_plus->UseVisualStyleBackColor = false;
            this->button_plus->Click += gcnew System::EventHandler(this, &MyForm::button_plus_Click);
            // 
            // button15
            // 
            this->button15->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(207)), static_cast<System::Int32>(static_cast<System::Byte>(160)),
                static_cast<System::Int32>(static_cast<System::Byte>(212)));
            this->button15->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
            this->button15->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->button15->ForeColor = System::Drawing::SystemColors::ControlLight;
            this->button15->Location = System::Drawing::Point(77, 294);
            this->button15->Name = L"button15";
            this->button15->Size = System::Drawing::Size(60, 60);
            this->button15->TabIndex = 15;
            this->button15->Text = L"2";
            this->button15->UseVisualStyleBackColor = false;
            this->button15->Click += gcnew System::EventHandler(this, &MyForm::num_Click);
            // 
            // button16
            // 
            this->button16->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(207)), static_cast<System::Int32>(static_cast<System::Byte>(160)),
                static_cast<System::Int32>(static_cast<System::Byte>(212)));
            this->button16->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
            this->button16->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->button16->ForeColor = System::Drawing::SystemColors::ControlLight;
            this->button16->Location = System::Drawing::Point(11, 295);
            this->button16->Name = L"button16";
            this->button16->Size = System::Drawing::Size(60, 60);
            this->button16->TabIndex = 14;
            this->button16->Text = L"1";
            this->button16->UseVisualStyleBackColor = false;
            this->button16->Click += gcnew System::EventHandler(this, &MyForm::num_Click);
            // 
            // button_ac
            // 
            this->button_ac->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(125)), static_cast<System::Int32>(static_cast<System::Byte>(103)),
                static_cast<System::Int32>(static_cast<System::Byte>(135)));
            this->button_ac->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
            this->button_ac->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->button_ac->ForeColor = System::Drawing::SystemColors::ControlLight;
            this->button_ac->Location = System::Drawing::Point(11, 99);
            this->button_ac->Name = L"button_ac";
            this->button_ac->Size = System::Drawing::Size(60, 60);
            this->button_ac->TabIndex = 2;
            this->button_ac->Text = L"AC";
            this->button_ac->UseVisualStyleBackColor = false;
            this->button_ac->Click += gcnew System::EventHandler(this, &MyForm::button_ac_Click);
            // 
            // button24
            // 
            this->button24->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(207)), static_cast<System::Int32>(static_cast<System::Byte>(160)),
                static_cast<System::Int32>(static_cast<System::Byte>(212)));
            this->button24->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
            this->button24->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->button24->ForeColor = System::Drawing::SystemColors::ControlLight;
            this->button24->Location = System::Drawing::Point(11, 360);
            this->button24->Name = L"button24";
            this->button24->Size = System::Drawing::Size(126, 60);
            this->button24->TabIndex = 19;
            this->button24->Text = L"0";
            this->button24->UseVisualStyleBackColor = false;
            this->button24->Click += gcnew System::EventHandler(this, &MyForm::num_Click);
            // 
            // button_ravno
            // 
            this->button_ravno->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(226)), static_cast<System::Int32>(static_cast<System::Byte>(153)),
                static_cast<System::Int32>(static_cast<System::Byte>(93)));
            this->button_ravno->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
            this->button_ravno->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->button_ravno->ForeColor = System::Drawing::SystemColors::ControlLight;
            this->button_ravno->Location = System::Drawing::Point(207, 360);
            this->button_ravno->Name = L"button_ravno";
            this->button_ravno->Size = System::Drawing::Size(60, 60);
            this->button_ravno->TabIndex = 20;
            this->button_ravno->Text = L"=";
            this->button_ravno->UseVisualStyleBackColor = false;
            this->button_ravno->Click += gcnew System::EventHandler(this, &MyForm::button_ravno_Click);
            // 
            // button_toch
            // 
            this->button_toch->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(125)), static_cast<System::Int32>(static_cast<System::Byte>(103)),
                static_cast<System::Int32>(static_cast<System::Byte>(135)));
            this->button_toch->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
            this->button_toch->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->button_toch->ForeColor = System::Drawing::SystemColors::ControlLight;
            this->button_toch->Location = System::Drawing::Point(141, 360);
            this->button_toch->Name = L"button_toch";
            this->button_toch->Size = System::Drawing::Size(60, 60);
            this->button_toch->TabIndex = 21;
            this->button_toch->Text = L".";
            this->button_toch->TextAlign = System::Drawing::ContentAlignment::TopCenter;
            this->button_toch->UseVisualStyleBackColor = false;
            this->button_toch->Click += gcnew System::EventHandler(this, &MyForm::button_toch_Click);
            // 
            // button27
            // 
            this->button27->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(207)), static_cast<System::Int32>(static_cast<System::Byte>(160)),
                static_cast<System::Int32>(static_cast<System::Byte>(212)));
            this->button27->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
            this->button27->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->button27->ForeColor = System::Drawing::SystemColors::ControlLight;
            this->button27->Location = System::Drawing::Point(77, 163);
            this->button27->Name = L"button27";
            this->button27->Size = System::Drawing::Size(60, 60);
            this->button27->TabIndex = 7;
            this->button27->Text = L"8";
            this->button27->UseVisualStyleBackColor = false;
            this->button27->Click += gcnew System::EventHandler(this, &MyForm::num_Click);
            // 
            // chet
            // 
            this->chet->Font = (gcnew System::Drawing::Font(L"Times New Roman", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->chet->ForeColor = System::Drawing::SystemColors::ButtonFace;
            this->chet->Location = System::Drawing::Point(4, 29);
            this->chet->Name = L"chet";
            this->chet->Size = System::Drawing::Size(263, 55);
            this->chet->TabIndex = 1;
            this->chet->Text = L"0";
            this->chet->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
            // 
            // button1
            // 
            this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(207)), static_cast<System::Int32>(static_cast<System::Byte>(160)),
                static_cast<System::Int32>(static_cast<System::Byte>(212)));
            this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
            this->button1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->button1->ForeColor = System::Drawing::SystemColors::ControlLight;
            this->button1->Location = System::Drawing::Point(11, 163);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(60, 60);
            this->button1->TabIndex = 6;
            this->button1->Text = L"7";
            this->button1->UseVisualStyleBackColor = false;
            this->button1->Click += gcnew System::EventHandler(this, &MyForm::num_Click);
            // 
            // MyForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(167)), static_cast<System::Int32>(static_cast<System::Byte>(70)),
                static_cast<System::Int32>(static_cast<System::Byte>(250)));
            this->ClientSize = System::Drawing::Size(295, 453);
            this->Controls->Add(this->button_toch);
            this->Controls->Add(this->button_ravno);
            this->Controls->Add(this->button24);
            this->Controls->Add(this->button13);
            this->Controls->Add(this->button_plus);
            this->Controls->Add(this->button15);
            this->Controls->Add(this->button16);
            this->Controls->Add(this->button9);
            this->Controls->Add(this->button_minus);
            this->Controls->Add(this->button11);
            this->Controls->Add(this->button12);
            this->Controls->Add(this->button5);
            this->Controls->Add(this->button_umno);
            this->Controls->Add(this->button1);
            this->Controls->Add(this->button27);
            this->Controls->Add(this->button_persent);
            this->Controls->Add(this->button_del);
            this->Controls->Add(this->button_ac);
            this->Controls->Add(this->button_minus_plus);
            this->Controls->Add(this->close);
            this->Controls->Add(this->chet);
            this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
            this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
            this->Name = L"MyForm";
            this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
            this->Text = L"Калькулятор";
            this->Click += gcnew System::EventHandler(this, &MyForm::num_Click);
            this->ResumeLayout(false);

        }
#pragma endregion
	private: System::Void close_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
           private: System::Void num_Click(System::Object^ sender, System::EventArgs^ e)
           {
               this->chet->ForeColor = Color::White;
               Button^ num = safe_cast<Button^>(sender);
               if (this->chet->Text == "0"|| is_equal)
               {
                   this->chet->Text = num->Text;
                   is_equal = false;
               }
               else
               {
                   this->chet->Text = this->chet->Text + num->Text;
               }
           }
    private: System::Void button_plus_Click(System::Object^ sender, System::EventArgs^ e)
    {
        obsh('+');
    }
    private: System::Void button_minus_Click(System::Object^ sender, System::EventArgs^ e)
    {
        obsh('-');
    }
    private: System::Void button_umno_Click(System::Object^ sender, System::EventArgs^ e) 
    {
        obsh('*');
    }
    private: System::Void button_del_Click(System::Object^ sender, System::EventArgs^ e)
    {
        obsh('/');
    }
    private: System::Void obsh(char obsh)
    {
        this->first_num = System::Convert::ToDouble( this->chet->Text);
        this->action =obsh ;
        this->chet->Text = "0";
    }
private: System::Void button_ravno_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (action == ' ')
        return;
    float res;
    float second =System::Convert::ToDouble(this->chet->Text);
    switch (this->action)
    {
    case '+':res = System::Convert::ToDouble(this->first_num) + (second); break;
    case '%':res = System::Convert::ToDouble(this->first_num) * (second)/100; break;
    case '-':res = System::Convert::ToDouble(this->first_num) - second; break;
    case '/':
        if (second == 0)
        {
            this->chet->ForeColor = Color::Red;
            res = 0;
            MessageBox::Show(this, "Ты ТУПОЙ что ли", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }
        else
        {
            res = System::Convert::ToDouble(this->first_num) / second; break;
        }
    case '*':res = System::Convert::ToDouble(this->first_num) * second;
    }
    this->is_equal = true;
    this->chet->Text = System::Convert::ToString(res);

}
private: System::Void button_ac_Click(System::Object^ sender, System::EventArgs^ e)
{
    this->chet->Text = "0";
    this->chet->ForeColor = Color::White;
    this->first_num = 0;
    this->action = ' ';
    is_equal = false;
    {

    };
}
private: System::Void button_minus_plus_Click(System::Object^ sender, System::EventArgs^ e) 
{
    float num = System::Convert::ToDouble(this->chet->Text);
    num *= -1;
    this->chet->Text = System::Convert::ToString(num);

}
private: System::Void button_persent_Click(System::Object^ sender, System::EventArgs^ e)
{
    obsh('%');
}
private: System::Void button_toch_Click(System::Object^ sender, System::EventArgs^ e)
{
    if(!this->chet->Text->Contains(","))
      this->chet->Text = this->chet->Text + ",";
}
};
}
