#pragma once

namespace projGUI1 {

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
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  lblMensagem;
	private: System::Windows::Forms::RadioButton^  rbtopção03;
	protected: 


	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::ComboBox^  cmbSelecao;

	private: System::Windows::Forms::CheckBox^  chkNome;



	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::GroupBox^  Tipo;
	private: System::Windows::Forms::RadioButton^  rbtopção02;


	private: System::Windows::Forms::RadioButton^  rbtopção01;
	private: System::Windows::Forms::CheckBox^  chkIdade;
	private: System::Windows::Forms::Label^  label1;


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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->lblMensagem = (gcnew System::Windows::Forms::Label());
			this->rbtopção03 = (gcnew System::Windows::Forms::RadioButton());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->cmbSelecao = (gcnew System::Windows::Forms::ComboBox());
			this->chkNome = (gcnew System::Windows::Forms::CheckBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->Tipo = (gcnew System::Windows::Forms::GroupBox());
			this->rbtopção02 = (gcnew System::Windows::Forms::RadioButton());
			this->rbtopção01 = (gcnew System::Windows::Forms::RadioButton());
			this->chkIdade = (gcnew System::Windows::Forms::CheckBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->Tipo->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Purple;
			this->button1->Location = System::Drawing::Point(672, 567);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(129, 30);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Vai Planeta";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::abacate);
			this->button1->MouseHover += gcnew System::EventHandler(this, &Form1::banana);
			// 
			// lblMensagem
			// 
			this->lblMensagem->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblMensagem->Location = System::Drawing::Point(1, 48);
			this->lblMensagem->Name = L"lblMensagem";
			this->lblMensagem->Size = System::Drawing::Size(377, 176);
			this->lblMensagem->TabIndex = 1;
			this->lblMensagem->Text = L"Mensagem";
			this->lblMensagem->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->lblMensagem->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
			// 
			// rbtopção03
			// 
			this->rbtopção03->AutoSize = true;
			this->rbtopção03->BackColor = System::Drawing::Color::Cyan;
			this->rbtopção03->Location = System::Drawing::Point(33, 100);
			this->rbtopção03->Name = L"rbtopção03";
			this->rbtopção03->Size = System::Drawing::Size(72, 17);
			this->rbtopção03->TabIndex = 2;
			this->rbtopção03->TabStop = true;
			this->rbtopção03->Text = L"Opção 03";
			this->rbtopção03->UseVisualStyleBackColor = false;
			this->rbtopção03->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton1_CheckedChanged);
			// 
			// textBox1
			// 
			this->textBox1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->textBox1->Location = System::Drawing::Point(56, 227);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 3;
			this->textBox1->Text = L"Escolha:";
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged);
			// 
			// cmbSelecao
			// 
			this->cmbSelecao->BackColor = System::Drawing::Color::White;
			this->cmbSelecao->FormattingEnabled = true;
			this->cmbSelecao->Items->AddRange(gcnew cli::array< System::Object^  >(10) {L"0", L"1", L"2", L"3", L"4", L"5", L"6", L"7", 
				L"8", L"9"});
			this->cmbSelecao->Location = System::Drawing::Point(66, 362);
			this->cmbSelecao->Name = L"cmbSelecao";
			this->cmbSelecao->Size = System::Drawing::Size(121, 21);
			this->cmbSelecao->TabIndex = 4;
			this->cmbSelecao->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::comboBox1_SelectedIndexChanged);
			// 
			// chkNome
			// 
			this->chkNome->AutoSize = true;
			this->chkNome->BackColor = System::Drawing::Color::White;
			this->chkNome->Checked = true;
			this->chkNome->CheckState = System::Windows::Forms::CheckState::Checked;
			this->chkNome->ForeColor = System::Drawing::Color::Purple;
			this->chkNome->Location = System::Drawing::Point(56, 276);
			this->chkNome->Name = L"chkNome";
			this->chkNome->Size = System::Drawing::Size(65, 17);
			this->chkNome->TabIndex = 5;
			this->chkNome->Text = L"Destino:";
			this->chkNome->UseVisualStyleBackColor = false;
			this->chkNome->CheckedChanged += gcnew System::EventHandler(this, &Form1::chkNome_CheckedChanged);
			// 
			// pictureBox1
			// 
			this->pictureBox1->ErrorImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.ErrorImage")));
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(384, 101);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(405, 438);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 6;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &Form1::pictureBox1_Click);
			// 
			// Tipo
			// 
			this->Tipo->Controls->Add(this->rbtopção02);
			this->Tipo->Controls->Add(this->rbtopção01);
			this->Tipo->Controls->Add(this->rbtopção03);
			this->Tipo->Location = System::Drawing::Point(56, 442);
			this->Tipo->Name = L"Tipo";
			this->Tipo->Size = System::Drawing::Size(244, 133);
			this->Tipo->TabIndex = 7;
			this->Tipo->TabStop = false;
			// 
			// rbtopção02
			// 
			this->rbtopção02->AutoSize = true;
			this->rbtopção02->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->rbtopção02->Location = System::Drawing::Point(33, 62);
			this->rbtopção02->Name = L"rbtopção02";
			this->rbtopção02->Size = System::Drawing::Size(72, 17);
			this->rbtopção02->TabIndex = 1;
			this->rbtopção02->TabStop = true;
			this->rbtopção02->Text = L"Opção 02";
			this->rbtopção02->UseVisualStyleBackColor = false;
			this->rbtopção02->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton3_CheckedChanged);
			// 
			// rbtopção01
			// 
			this->rbtopção01->AutoSize = true;
			this->rbtopção01->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->rbtopção01->Location = System::Drawing::Point(33, 24);
			this->rbtopção01->Name = L"rbtopção01";
			this->rbtopção01->Size = System::Drawing::Size(72, 17);
			this->rbtopção01->TabIndex = 0;
			this->rbtopção01->TabStop = true;
			this->rbtopção01->Text = L"Opção 01";
			this->rbtopção01->UseVisualStyleBackColor = false;
			this->rbtopção01->CheckedChanged += gcnew System::EventHandler(this, &Form1::rbtopção01_CheckedChanged);
			// 
			// chkIdade
			// 
			this->chkIdade->AutoSize = true;
			this->chkIdade->BackColor = System::Drawing::Color::White;
			this->chkIdade->ForeColor = System::Drawing::SystemColors::Highlight;
			this->chkIdade->Location = System::Drawing::Point(56, 310);
			this->chkIdade->Name = L"chkIdade";
			this->chkIdade->Size = System::Drawing::Size(82, 17);
			this->chkIdade->TabIndex = 8;
			this->chkIdade->Text = L"Velocidade:";
			this->chkIdade->UseVisualStyleBackColor = false;
			this->chkIdade->CheckedChanged += gcnew System::EventHandler(this, &Form1::chkIdade_CheckedChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(130, 417);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(57, 22);
			this->label1->TabIndex = 9;
			this->label1->Text = L"Opções";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(826, 609);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->chkIdade);
			this->Controls->Add(this->Tipo);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->chkNome);
			this->Controls->Add(this->cmbSelecao);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->lblMensagem);
			this->Controls->Add(this->button1);
			this->Name = L"Form1";
			this->Text = L"Programa";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->Tipo->ResumeLayout(false);
			this->Tipo->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void radioButton1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 lblMensagem->Text = " ";
			 if (rbtopção03->Checked)
				 lblMensagem->ForeColor = System::Drawing::Color::Purple;
				 lblMensagem->Text = "::Retornando para a base::";
		 }
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void rbtopção01_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 lblMensagem->Text = " ";
			 if (rbtopção01->Checked)
				 lblMensagem->ForeColor = System::Drawing::Color::White;
				 lblMensagem->Text = "::Planeta Júpiter avistado::";

		 }
private: System::Void abacate(System::Object^  sender, System::EventArgs^  e) {
			
		 }
private: System::Void chkNome_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			  lblMensagem->Text = " ";
				 if (chkNome->Checked)
					 lblMensagem->Text = lblMensagem->Text + ":: Algum lugar do Universo ::";
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void banana(System::Object^  sender, System::EventArgs^  e) {
			 lblMensagem->ForeColor = System::Drawing::Color::Black;
			 lblMensagem->Text = "::LALALA::\n::Em busca de outro Universo::";

		 }
private: System::Void chkIdade_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 lblMensagem->Text = " ";
			 if (chkIdade->Checked)
				 lblMensagem -> Text = lblMensagem->Text + " :: Estamos a 1 ano-luz ::";
		 }
private: System::Void radioButton3_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 lblMensagem->Text = " ";
			 if (rbtopção02->Checked)
				 lblMensagem->ForeColor = System::Drawing::Color::Red;
				 lblMensagem->Text = "::PERIGO!!!::\n :: Meteoritos a vista::";

		 }
private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			  
		 }
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}

