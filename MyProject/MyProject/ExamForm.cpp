#include "ExamForm.h"
#include "ExamFormResults.h"
#include "ConvertFuncs.h"
#include "QuestClass.h"
#include "MyForm.h"

using namespace std;

array<int, 10> random{ 0,1,2,3,4,5,6,7,8,9 };
Questions quests[10];
int iExam;

System::Void MyProject::ExamForm::ExamForm_Load(System::Object^ sender, System::EventArgs^ e)
{
	iExam = 0;

	srand(time(NULL));

	if (readFromFile(quests) == false) {
		MessageBox::Show("Не удается найти файл", "Ошибка!");
		MyForm^ form = gcnew MyForm();
		this->Close();
		form->Show();
		return System::Void();
	}
	else {
		random_shuffle(random.begin(), random.end());

		String^ question = Convert_string_to_String(quests[random[iExam]].Quest, question);
		String^ answer1 = Convert_string_to_String(quests[random[iExam]].Answers[0], answer1);
		String^ answer2 = Convert_string_to_String(quests[random[iExam]].Answers[1], answer2);
		String^ answer3 = Convert_string_to_String(quests[random[iExam]].Answers[2], answer3);
		String^ answer4 = Convert_string_to_String(quests[random[iExam]].Answers[3], answer4);


		this->label1->Text = question;
		this->radioButton1->Text = answer1;
		this->radioButton2->Text = answer2;
		this->radioButton3->Text = answer3;
		this->radioButton4->Text = answer4;

		this->label2->Text = "Вопрос " + (iExam+1).ToString();
	}
	return System::Void();
}

System::Void MyProject::ExamForm::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	switch (atoi(quests[random[iExam]].CorrectAnswer.c_str())) {
	case 1: {
		if (radioButton1->Checked == true) {
			//label2->Text = "Верно";
			quests[random[iExam]].givenAnswer = "Верно";
			quests[random[iExam]].answer += 1;
		}
		else {
			//label2->Text = "Неверно";
			quests[random[iExam]].givenAnswer = "Неверно";
		}
	}; break;
	case 2: {
		if (radioButton2->Checked == true) {
			//label2->Text = "Верно";
			quests[random[iExam]].givenAnswer = "Верно";
			quests[random[iExam]].answer += 1;
		}
		else {
			//label2->Text = "Неверно";
			quests[random[iExam]].givenAnswer = "Неверно";
		}
	}; break;
	case 3: {
		if (radioButton3->Checked == true) {
			//label2->Text = "Верно";
			quests[random[iExam]].givenAnswer = "Верно";
			quests[random[iExam]].answer += 1;
		}
		else {
			//label2->Text = "Неверно";
			quests[random[iExam]].givenAnswer = "Неверно";
		}
	}; break;
	case 4: {
		if (radioButton4->Checked == true) {
			//label2->Text = "Верно";
			quests[random[iExam]].givenAnswer = "Верно";
			quests[random[iExam]].answer += 1;
		}
		else {
			//label2->Text = "Неверно";
			quests[random[iExam]].givenAnswer = "Неверно";
		}
	}; break;
	default: break;
	}
	iExam++;
	this->label2->Text = "Вопрос " + (iExam+1).ToString();
	if (iExam == 10) {
		ExamFormResults^ form = gcnew ExamFormResults();
		this->Close();
		form->Show();
		return System::Void();
	}
	else {
		String^ question = Convert_string_to_String(quests[random[iExam]].Quest, question);
		String^ answer1 = Convert_string_to_String(quests[random[iExam]].Answers[0], answer1);
		String^ answer2 = Convert_string_to_String(quests[random[iExam]].Answers[1], answer2);
		String^ answer3 = Convert_string_to_String(quests[random[iExam]].Answers[2], answer3);
		String^ answer4 = Convert_string_to_String(quests[random[iExam]].Answers[3], answer4);

		this->label1->Text = question;
		this->radioButton1->Text = answer1;
		this->radioButton2->Text = answer2;
		this->radioButton3->Text = answer3;
		this->radioButton4->Text = answer4;
		}
	}

System::Void MyProject::ExamForm::выйтиToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	Application::Exit();
	return System::Void();
}

