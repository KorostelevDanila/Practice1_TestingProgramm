#pragma once

namespace MyProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ AboutProgramm
	/// </summary>
	public ref class AboutProgramm : public System::Windows::Forms::Form
	{
	public:
		AboutProgramm(void)
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
		~AboutProgramm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AboutProgramm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(16, 24);
			this->label1->MaximumSize = System::Drawing::Size(550, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(550, 34);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Ёта программа предназначена дл€ тестировани€ по программированию и имеет два режи"
				L"ма работы:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(62, 110);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(64, 17);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Ёкзамен";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(132, 110);
			this->label3->MaximumSize = System::Drawing::Size(400, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(393, 51);
			this->label3->TabIndex = 2;
			this->label3->Text = L"- на каждый вопрос даетс€ одна попытка ответить, по окончанию теста выводитс€ экр"
				L"ан со списком правильно и неправильно отвеченных вопросов.";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(62, 192);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(82, 17);
			this->label4->TabIndex = 3;
			this->label4->Text = L"“ренировка";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(150, 192);
			this->label5->MaximumSize = System::Drawing::Size(400, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(400, 85);
			this->label5->TabIndex = 4;
			this->label5->Text = resources->GetString(L"label5.Text");
			// 
			// AboutProgramm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(578, 315);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"AboutProgramm";
			this->Text = L"AboutProgramm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
