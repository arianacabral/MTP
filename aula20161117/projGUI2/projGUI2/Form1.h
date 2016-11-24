#pragma once

namespace projGUI2 {

    #define MAXCHARDISP 20

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
	private: System::Windows::Forms::Button^  btn7;
	private: System::Windows::Forms::Button^  btn8;
	protected: 


	private: System::Windows::Forms::Button^  btn2;
	private: System::Windows::Forms::Button^  btn5;
	private: System::Windows::Forms::Button^  btnSeparador;




	private: System::Windows::Forms::Button^  btn0;
	private: System::Windows::Forms::Button^  btn1;
	private: System::Windows::Forms::Button^  btn4;
	private: System::Windows::Forms::Button^  btn6;




	private: System::Windows::Forms::Button^  btn9;

	private: System::Windows::Forms::Button^  btn3;
	private: System::Windows::Forms::Button^  btnMultiplicacao;



	private: System::Windows::Forms::Button^  btnMenos;

	private: System::Windows::Forms::Button^  btnMais;

	private: System::Windows::Forms::Button^  btnPosNeg;
	private: System::Windows::Forms::Button^  btnDivisao;
	private: System::Windows::Forms::Button^  btnExpoente;



	private: System::Windows::Forms::Button^  btnRaiz;

	private: System::Windows::Forms::Button^  btnIgual;
	private: System::Windows::Forms::Button^  btnFatorial;


	private: System::Windows::Forms::Button^  btnApaga;


	private: System::Windows::Forms::Label^  lblDisplay;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->btn7 = (gcnew System::Windows::Forms::Button());
			this->btn8 = (gcnew System::Windows::Forms::Button());
			this->btn2 = (gcnew System::Windows::Forms::Button());
			this->btn5 = (gcnew System::Windows::Forms::Button());
			this->btnSeparador = (gcnew System::Windows::Forms::Button());
			this->btn0 = (gcnew System::Windows::Forms::Button());
			this->btn1 = (gcnew System::Windows::Forms::Button());
			this->btn4 = (gcnew System::Windows::Forms::Button());
			this->btn6 = (gcnew System::Windows::Forms::Button());
			this->btn9 = (gcnew System::Windows::Forms::Button());
			this->btn3 = (gcnew System::Windows::Forms::Button());
			this->btnMultiplicacao = (gcnew System::Windows::Forms::Button());
			this->btnMenos = (gcnew System::Windows::Forms::Button());
			this->btnMais = (gcnew System::Windows::Forms::Button());
			this->btnPosNeg = (gcnew System::Windows::Forms::Button());
			this->btnDivisao = (gcnew System::Windows::Forms::Button());
			this->btnExpoente = (gcnew System::Windows::Forms::Button());
			this->btnRaiz = (gcnew System::Windows::Forms::Button());
			this->btnIgual = (gcnew System::Windows::Forms::Button());
			this->btnFatorial = (gcnew System::Windows::Forms::Button());
			this->btnApaga = (gcnew System::Windows::Forms::Button());
			this->lblDisplay = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// btn7
			// 
			this->btn7->BackColor = System::Drawing::Color::White;
			this->btn7->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn7->Location = System::Drawing::Point(20, 119);
			this->btn7->Name = L"btn7";
			this->btn7->Size = System::Drawing::Size(45, 42);
			this->btn7->TabIndex = 0;
			this->btn7->Text = L"7";
			this->btn7->UseVisualStyleBackColor = false;
			this->btn7->Click += gcnew System::EventHandler(this, &Form1::btn7_Click);
			// 
			// btn8
			// 
			this->btn8->BackColor = System::Drawing::Color::White;
			this->btn8->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn8->Location = System::Drawing::Point(71, 119);
			this->btn8->Name = L"btn8";
			this->btn8->Size = System::Drawing::Size(45, 42);
			this->btn8->TabIndex = 1;
			this->btn8->Text = L"8";
			this->btn8->UseVisualStyleBackColor = false;
			this->btn8->Click += gcnew System::EventHandler(this, &Form1::btn8_Click);
			// 
			// btn2
			// 
			this->btn2->BackColor = System::Drawing::Color::White;
			this->btn2->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn2->Location = System::Drawing::Point(71, 215);
			this->btn2->Name = L"btn2";
			this->btn2->Size = System::Drawing::Size(45, 42);
			this->btn2->TabIndex = 3;
			this->btn2->Text = L"2";
			this->btn2->UseVisualStyleBackColor = false;
			this->btn2->Click += gcnew System::EventHandler(this, &Form1::btn2_Click);
			// 
			// btn5
			// 
			this->btn5->BackColor = System::Drawing::Color::White;
			this->btn5->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn5->Location = System::Drawing::Point(71, 167);
			this->btn5->Name = L"btn5";
			this->btn5->Size = System::Drawing::Size(45, 42);
			this->btn5->TabIndex = 4;
			this->btn5->Text = L"5";
			this->btn5->UseVisualStyleBackColor = false;
			this->btn5->Click += gcnew System::EventHandler(this, &Form1::btn5_Click);
			// 
			// btnSeparador
			// 
			this->btnSeparador->BackColor = System::Drawing::Color::White;
			this->btnSeparador->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnSeparador->Location = System::Drawing::Point(71, 263);
			this->btnSeparador->Name = L"btnSeparador";
			this->btnSeparador->Size = System::Drawing::Size(45, 42);
			this->btnSeparador->TabIndex = 5;
			this->btnSeparador->Text = L",";
			this->btnSeparador->UseVisualStyleBackColor = false;
			this->btnSeparador->Click += gcnew System::EventHandler(this, &Form1::btnSeparador_Click);
			// 
			// btn0
			// 
			this->btn0->BackColor = System::Drawing::Color::White;
			this->btn0->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn0->Location = System::Drawing::Point(20, 263);
			this->btn0->Name = L"btn0";
			this->btn0->Size = System::Drawing::Size(45, 42);
			this->btn0->TabIndex = 7;
			this->btn0->Text = L"0";
			this->btn0->UseVisualStyleBackColor = false;
			this->btn0->Click += gcnew System::EventHandler(this, &Form1::button8_Click);
			// 
			// btn1
			// 
			this->btn1->BackColor = System::Drawing::Color::White;
			this->btn1->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn1->Location = System::Drawing::Point(20, 215);
			this->btn1->Name = L"btn1";
			this->btn1->Size = System::Drawing::Size(45, 42);
			this->btn1->TabIndex = 8;
			this->btn1->Text = L"1";
			this->btn1->UseVisualStyleBackColor = false;
			this->btn1->Click += gcnew System::EventHandler(this, &Form1::btn1_Click);
			// 
			// btn4
			// 
			this->btn4->BackColor = System::Drawing::Color::White;
			this->btn4->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn4->Location = System::Drawing::Point(20, 167);
			this->btn4->Name = L"btn4";
			this->btn4->Size = System::Drawing::Size(45, 42);
			this->btn4->TabIndex = 9;
			this->btn4->Text = L"4";
			this->btn4->UseVisualStyleBackColor = false;
			this->btn4->Click += gcnew System::EventHandler(this, &Form1::btn4_Click);
			// 
			// btn6
			// 
			this->btn6->BackColor = System::Drawing::Color::White;
			this->btn6->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn6->Location = System::Drawing::Point(122, 167);
			this->btn6->Name = L"btn6";
			this->btn6->Size = System::Drawing::Size(45, 42);
			this->btn6->TabIndex = 10;
			this->btn6->Text = L"6";
			this->btn6->UseVisualStyleBackColor = false;
			this->btn6->Click += gcnew System::EventHandler(this, &Form1::btn6_Click);
			// 
			// btn9
			// 
			this->btn9->BackColor = System::Drawing::Color::White;
			this->btn9->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn9->Location = System::Drawing::Point(122, 119);
			this->btn9->Name = L"btn9";
			this->btn9->Size = System::Drawing::Size(45, 42);
			this->btn9->TabIndex = 11;
			this->btn9->Text = L"9";
			this->btn9->UseVisualStyleBackColor = false;
			this->btn9->Click += gcnew System::EventHandler(this, &Form1::btn9_Click);
			// 
			// btn3
			// 
			this->btn3->BackColor = System::Drawing::Color::White;
			this->btn3->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn3->Location = System::Drawing::Point(122, 215);
			this->btn3->Name = L"btn3";
			this->btn3->Size = System::Drawing::Size(45, 42);
			this->btn3->TabIndex = 14;
			this->btn3->Text = L"3";
			this->btn3->UseVisualStyleBackColor = false;
			this->btn3->Click += gcnew System::EventHandler(this, &Form1::btn3_Click);
			// 
			// btnMultiplicacao
			// 
			this->btnMultiplicacao->BackColor = System::Drawing::Color::White;
			this->btnMultiplicacao->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnMultiplicacao->Location = System::Drawing::Point(173, 215);
			this->btnMultiplicacao->Name = L"btnMultiplicacao";
			this->btnMultiplicacao->Size = System::Drawing::Size(45, 42);
			this->btnMultiplicacao->TabIndex = 15;
			this->btnMultiplicacao->Text = L"×";
			this->btnMultiplicacao->UseVisualStyleBackColor = false;
			this->btnMultiplicacao->Click += gcnew System::EventHandler(this, &Form1::btnMultiplicacao_Click);
			// 
			// btnMenos
			// 
			this->btnMenos->BackColor = System::Drawing::Color::White;
			this->btnMenos->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnMenos->Location = System::Drawing::Point(173, 167);
			this->btnMenos->Name = L"btnMenos";
			this->btnMenos->Size = System::Drawing::Size(45, 42);
			this->btnMenos->TabIndex = 16;
			this->btnMenos->Text = L"-";
			this->btnMenos->UseVisualStyleBackColor = false;
			this->btnMenos->Click += gcnew System::EventHandler(this, &Form1::btnMenos_Click);
			// 
			// btnMais
			// 
			this->btnMais->BackColor = System::Drawing::Color::White;
			this->btnMais->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnMais->Location = System::Drawing::Point(173, 119);
			this->btnMais->Name = L"btnMais";
			this->btnMais->Size = System::Drawing::Size(45, 42);
			this->btnMais->TabIndex = 17;
			this->btnMais->Text = L"+";
			this->btnMais->UseVisualStyleBackColor = false;
			this->btnMais->Click += gcnew System::EventHandler(this, &Form1::btnMais_Click);
			// 
			// btnPosNeg
			// 
			this->btnPosNeg->BackColor = System::Drawing::Color::White;
			this->btnPosNeg->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnPosNeg->Location = System::Drawing::Point(122, 262);
			this->btnPosNeg->Name = L"btnPosNeg";
			this->btnPosNeg->Size = System::Drawing::Size(45, 42);
			this->btnPosNeg->TabIndex = 18;
			this->btnPosNeg->Text = L"±";
			this->btnPosNeg->UseVisualStyleBackColor = false;
			this->btnPosNeg->Click += gcnew System::EventHandler(this, &Form1::btnPosNeg_Click);
			// 
			// btnDivisao
			// 
			this->btnDivisao->BackColor = System::Drawing::Color::White;
			this->btnDivisao->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnDivisao->Location = System::Drawing::Point(173, 263);
			this->btnDivisao->Name = L"btnDivisao";
			this->btnDivisao->Size = System::Drawing::Size(45, 42);
			this->btnDivisao->TabIndex = 22;
			this->btnDivisao->Text = L" ÷";
			this->btnDivisao->UseVisualStyleBackColor = false;
			this->btnDivisao->Click += gcnew System::EventHandler(this, &Form1::btnDivisao_Click);
			// 
			// btnExpoente
			// 
			this->btnExpoente->BackColor = System::Drawing::Color::White;
			this->btnExpoente->Font = (gcnew System::Drawing::Font(L"Verdana", 9.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnExpoente->Location = System::Drawing::Point(224, 215);
			this->btnExpoente->Name = L"btnExpoente";
			this->btnExpoente->Size = System::Drawing::Size(45, 42);
			this->btnExpoente->TabIndex = 25;
			this->btnExpoente->Tag = L"";
			this->btnExpoente->Text = L" xʸ";
			this->btnExpoente->UseVisualStyleBackColor = false;
			this->btnExpoente->Click += gcnew System::EventHandler(this, &Form1::btnExpoente_Click);
			// 
			// btnRaiz
			// 
			this->btnRaiz->BackColor = System::Drawing::Color::White;
			this->btnRaiz->Font = (gcnew System::Drawing::Font(L"Verdana", 9.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnRaiz->Location = System::Drawing::Point(224, 263);
			this->btnRaiz->Name = L"btnRaiz";
			this->btnRaiz->Size = System::Drawing::Size(45, 42);
			this->btnRaiz->TabIndex = 26;
			this->btnRaiz->Text = L" √¯";
			this->btnRaiz->UseVisualStyleBackColor = false;
			this->btnRaiz->Click += gcnew System::EventHandler(this, &Form1::btnRaiz_Click);
			// 
			// btnIgual
			// 
			this->btnIgual->BackColor = System::Drawing::Color::White;
			this->btnIgual->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnIgual->Location = System::Drawing::Point(63, 335);
			this->btnIgual->Name = L"btnIgual";
			this->btnIgual->Size = System::Drawing::Size(147, 42);
			this->btnIgual->TabIndex = 27;
			this->btnIgual->Text = L"=";
			this->btnIgual->UseVisualStyleBackColor = false;
			this->btnIgual->Click += gcnew System::EventHandler(this, &Form1::button28_Click);
			// 
			// btnFatorial
			// 
			this->btnFatorial->BackColor = System::Drawing::Color::White;
			this->btnFatorial->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnFatorial->Location = System::Drawing::Point(224, 167);
			this->btnFatorial->Name = L"btnFatorial";
			this->btnFatorial->Size = System::Drawing::Size(45, 42);
			this->btnFatorial->TabIndex = 28;
			this->btnFatorial->Text = L"n!";
			this->btnFatorial->UseVisualStyleBackColor = false;
			this->btnFatorial->Click += gcnew System::EventHandler(this, &Form1::button29_Click);
			// 
			// btnApaga
			// 
			this->btnApaga->BackColor = System::Drawing::Color::White;
			this->btnApaga->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnApaga->Location = System::Drawing::Point(224, 119);
			this->btnApaga->Name = L"btnApaga";
			this->btnApaga->Size = System::Drawing::Size(45, 42);
			this->btnApaga->TabIndex = 29;
			this->btnApaga->Text = L"CE";
			this->btnApaga->UseVisualStyleBackColor = false;
			this->btnApaga->Click += gcnew System::EventHandler(this, &Form1::btnApaga_Click);
			// 
			// lblDisplay
			// 
			this->lblDisplay->BackColor = System::Drawing::Color::White;
			this->lblDisplay->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lblDisplay->Location = System::Drawing::Point(17, 33);
			this->lblDisplay->Name = L"lblDisplay";
			this->lblDisplay->Size = System::Drawing::Size(249, 28);
			this->lblDisplay->TabIndex = 31;
			this->lblDisplay->Text = L"0";
			this->lblDisplay->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(283, 399);
			this->Controls->Add(this->lblDisplay);
			this->Controls->Add(this->btnApaga);
			this->Controls->Add(this->btnFatorial);
			this->Controls->Add(this->btnIgual);
			this->Controls->Add(this->btnRaiz);
			this->Controls->Add(this->btnExpoente);
			this->Controls->Add(this->btnDivisao);
			this->Controls->Add(this->btnPosNeg);
			this->Controls->Add(this->btnMais);
			this->Controls->Add(this->btnMenos);
			this->Controls->Add(this->btnMultiplicacao);
			this->Controls->Add(this->btn3);
			this->Controls->Add(this->btn9);
			this->Controls->Add(this->btn6);
			this->Controls->Add(this->btn4);
			this->Controls->Add(this->btn1);
			this->Controls->Add(this->btn0);
			this->Controls->Add(this->btnSeparador);
			this->Controls->Add(this->btn5);
			this->Controls->Add(this->btn2);
			this->Controls->Add(this->btn8);
			this->Controls->Add(this->btn7);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Name = L"Form1";
			this->Text = L"Calculadora";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);

		}

		bool separado;
		double numero, numero2;
		char op;

		void LimpaDisplay(){
			separado = false;
			lblDisplay->Text = "0";
		}
		void LimpaTudo(){
			LimpaDisplay();
			numero = 0.0;
			op='\0';
		}

#pragma endregion

private: System::Void btnMais_Click(System::Object^  sender, System::EventArgs^  e) {
			 numero = System::Convert::ToDouble(lblDisplay->Text);
			 op = '+';
			 LimpaDisplay();

		 }
private: System::Void btnMenos_Click(System::Object^  sender, System::EventArgs^  e) {
			 numero = System::Convert::ToDouble(lblDisplay->Text);
			 op = '-';
			 LimpaDisplay();

		 }
private: System::Void btnMultiplicacao_Click(System::Object^  sender, System::EventArgs^  e) {
			 numero = System::Convert::ToDouble(lblDisplay->Text);
			 op = '*';
			 LimpaDisplay();

		 }
private: System::Void btnDivisao_Click(System::Object^  sender, System::EventArgs^  e) {
			 numero = System::Convert::ToDouble(lblDisplay->Text);
			 op = '/';
			 LimpaDisplay();
		 }
private: System::Void button28_Click(System::Object^  sender, System::EventArgs^  e) {
			double numero2 = System::Convert::ToDouble(lblDisplay->Text); 
			switch(op){
			case'+':
				lblDisplay->Text = System::Convert::ToString(numero+numero2);
				break;
			case'-':
				lblDisplay->Text = System::Convert::ToString(numero-numero2);
				break;
		    case'*':
				lblDisplay->Text = System::Convert::ToString(numero*numero2);
				break;
			case'/':
				lblDisplay->Text = System::Convert::ToString(numero/numero2);
				break;
			}
		 }
private: System::Void radioButton1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void groupBox1_Enter(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
			 separado = false;		 }

private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (lblDisplay->Text->Length<MAXCHARDISP)
				 if (lblDisplay->Text != "0")
					 lblDisplay->Text = lblDisplay->Text + "0";
		 }
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button29_Click(System::Object^  sender, System::EventArgs^  e) {

		 }
private: System::Void btn1_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (lblDisplay->Text->Length<MAXCHARDISP)
				 if (lblDisplay->Text == "0")
					 lblDisplay->Text = "1";
				 else 
					 lblDisplay->Text = lblDisplay->Text + "1";
		 }
private: System::Void btn2_Click(System::Object^  sender, System::EventArgs^  e) {
			  if (lblDisplay->Text->Length<MAXCHARDISP)
				 if (lblDisplay->Text == "0")
					 lblDisplay->Text = "2";
				 else 
					 lblDisplay->Text = lblDisplay->Text + "2";

		 }
private: System::Void btn3_Click(System::Object^  sender, System::EventArgs^  e) {
			  if (lblDisplay->Text->Length<MAXCHARDISP)
				 if (lblDisplay->Text == "0")
					 lblDisplay->Text = "3";
				 else 
					 lblDisplay->Text = lblDisplay->Text + "3";
		 }
private: System::Void btn6_Click(System::Object^  sender, System::EventArgs^  e) {
			  if (lblDisplay->Text->Length<MAXCHARDISP)
				 if (lblDisplay->Text == "0")
					 lblDisplay->Text = "6";
				 else 
					 lblDisplay->Text = lblDisplay->Text + "6";
		 }
private: System::Void btn5_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (lblDisplay->Text->Length<MAXCHARDISP)
				 if (lblDisplay->Text == "0")
					 lblDisplay->Text = "5";
				 else 
					 lblDisplay->Text = lblDisplay->Text + "5";
		 }
private: System::Void btn4_Click(System::Object^  sender, System::EventArgs^  e) {
			  if (lblDisplay->Text->Length<MAXCHARDISP)
				 if (lblDisplay->Text == "0")
					 lblDisplay->Text = "4";
				 else 
					 lblDisplay->Text = lblDisplay->Text + "4";
		 }
private: System::Void btn7_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (lblDisplay->Text->Length<MAXCHARDISP)
				 if (lblDisplay->Text == "0")
					 lblDisplay->Text = "7";
				 else 
					 lblDisplay->Text = lblDisplay->Text + "7";
		 }
private: System::Void btnRaiz_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void btnExpoente_Click(System::Object^  sender, System::EventArgs^  e) {
		 }

private: System::Void btnPosNeg_Click(System::Object^  sender, System::EventArgs^  e) {
		 }


private: System::Void btn9_Click(System::Object^  sender, System::EventArgs^  e) {
			  if (lblDisplay->Text->Length<MAXCHARDISP)
				 if (lblDisplay->Text == "0")
					 lblDisplay->Text = "9";
				 else 
					 lblDisplay->Text = lblDisplay->Text + "9";	 }
private: System::Void btnSeparador_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (lblDisplay->Text->Length<MAXCHARDISP && !separado)
				 lblDisplay->Text = lblDisplay->Text + ",";
		         separado = true;
		 }
private: System::Void btn8_Click(System::Object^  sender, System::EventArgs^  e) {
			  if (lblDisplay->Text->Length<MAXCHARDISP)
				 if (lblDisplay->Text == "0")
					 lblDisplay->Text = "8";
				 else 
					 lblDisplay->Text = lblDisplay->Text + "8";	 }
private: System::Void btnApaga_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}

