#include "PracticeForm.h"
#include "ConvertFuncs.h"
#include "QuestClass.h"
#include "MyForm.h"

Questions questsPractice[10];
array<int, 10> randomPractice{ 0,1,2,3,4,5,6,7,8,9 };
int i;

System::Void MyProject::PracticeForm::PracticeForm_Load(System::Object^ sender, System::EventArgs^ e)
{
	i = 0;

	srand(time(NULL));

	if (readFromFile(questsPractice) == false) {
		MessageBox::Show("Не удается найти файл", "Ошибка!");
		MyForm^ form = gcnew MyForm();
		this->Close();
		form->Show();
		return System::Void();
	}
	else {
		random_shuffle(randomPractice.begin(), randomPractice.end());

		String^ question = Convert_string_to_String(questsPractice[randomPractice[i]].Quest, question);
		String^ answer1 = Convert_string_to_String(questsPractice[randomPractice[i]].Answers[0], answer1);
		String^ answer2 = Convert_string_to_String(questsPractice[randomPractice[i]].Answers[1], answer2);
		String^ answer3 = Convert_string_to_String(questsPractice[randomPractice[i]].Answers[2], answer3);
		String^ answer4 = Convert_string_to_String(questsPractice[randomPractice[i]].Answers[3], answer4);


		this->label1->Text = question;
		this->radioButton1->Text = answer1;
		this->radioButton2->Text = answer2;
		this->radioButton3->Text = answer3;
		this->radioButton4->Text = answer4;
	}

	return System::Void();
}

System::Void MyProject::PracticeForm::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	switch (atoi(questsPractice[randomPractice[i]].CorrectAnswer.c_str())) {
	case 1: {
		if (radioButton1->Checked == true) {
			i++;
			label2->Visible = false;

			if (i == 10) {
				random_shuffle(randomPractice.begin(), randomPractice.end());
				i = 0;
			}

			String^ question = Convert_string_to_String(questsPractice[randomPractice[i]].Quest, question);
			String^ answer1 = Convert_string_to_String(questsPractice[randomPractice[i]].Answers[0], answer1);
			String^ answer2 = Convert_string_to_String(questsPractice[randomPractice[i]].Answers[1], answer2);
			String^ answer3 = Convert_string_to_String(questsPractice[randomPractice[i]].Answers[2], answer3);
			String^ answer4 = Convert_string_to_String(questsPractice[randomPractice[i]].Answers[3], answer4);


			this->label1->Text = question;
			this->radioButton1->Text = answer1;
			this->radioButton2->Text = answer2;
			this->radioButton3->Text = answer3;
			this->radioButton4->Text = answer4;
		}
		else {
			label2->Visible = true;
			label2->Text = "Неверно";
		}
	}; break;
	case 2: {
		if (radioButton2->Checked == true) {
			i++;
			label2->Visible = false;

			if (i == 10) {
				random_shuffle(randomPractice.begin(), randomPractice.end());
				i = 0;
			}

			String^ question = Convert_string_to_String(questsPractice[randomPractice[i]].Quest, question);
			String^ answer1 = Convert_string_to_String(questsPractice[randomPractice[i]].Answers[0], answer1);
			String^ answer2 = Convert_string_to_String(questsPractice[randomPractice[i]].Answers[1], answer2);
			String^ answer3 = Convert_string_to_String(questsPractice[randomPractice[i]].Answers[2], answer3);
			String^ answer4 = Convert_string_to_String(questsPractice[randomPractice[i]].Answers[3], answer4);


			this->label1->Text = question;
			this->radioButton1->Text = answer1;
			this->radioButton2->Text = answer2;
			this->radioButton3->Text = answer3;
			this->radioButton4->Text = answer4;
		}
		else {
			label2->Visible = true;
			label2->Text = "Неверно";
		}
	}; break;
	case 3: {
		if (radioButton3->Checked == true) {
			i++;
			label2->Visible = false;

			if (i == 10) {
				random_shuffle(randomPractice.begin(), randomPractice.end());
				i = 0;
			}

			String^ question = Convert_string_to_String(questsPractice[randomPractice[i]].Quest, question);
			String^ answer1 = Convert_string_to_String(questsPractice[randomPractice[i]].Answers[0], answer1);
			String^ answer2 = Convert_string_to_String(questsPractice[randomPractice[i]].Answers[1], answer2);
			String^ answer3 = Convert_string_to_String(questsPractice[randomPractice[i]].Answers[2], answer3);
			String^ answer4 = Convert_string_to_String(questsPractice[randomPractice[i]].Answers[3], answer4);


			this->label1->Text = question;
			this->radioButton1->Text = answer1;
			this->radioButton2->Text = answer2;
			this->radioButton3->Text = answer3;
			this->radioButton4->Text = answer4;
		}
		else {
			label2->Visible = true;
			label2->Text = "Неверно";
		}
	}; break;
	case 4: {
		if (radioButton4->Checked == true) {
			i++;
			label2->Visible = false;

			if (i == 10) {
				random_shuffle(randomPractice.begin(), randomPractice.end());
				i = 0;
			}

			String^ question = Convert_string_to_String(questsPractice[randomPractice[i]].Quest, question);
			String^ answer1 = Convert_string_to_String(questsPractice[randomPractice[i]].Answers[0], answer1);
			String^ answer2 = Convert_string_to_String(questsPractice[randomPractice[i]].Answers[1], answer2);
			String^ answer3 = Convert_string_to_String(questsPractice[randomPractice[i]].Answers[2], answer3);
			String^ answer4 = Convert_string_to_String(questsPractice[randomPractice[i]].Answers[3], answer4);


			this->label1->Text = question;
			this->radioButton1->Text = answer1;
			this->radioButton2->Text = answer2;
			this->radioButton3->Text = answer3;
			this->radioButton4->Text = answer4;
		}
		else {
			label2->Visible = true;
			label2->Text = "Неверно";
		}
	}; break;
	default: break;
	}

		/*ExamFormResults^ form = gcnew ExamFormResults();
		this->Close();
		form->Show();
		return System::Void();*/
	/*else {
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
		}*/
	return System::Void();
}

System::Void MyProject::PracticeForm::вГлавноеМенюToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	MyForm^ form = gcnew MyForm();
	this->Close();
	form->Show();

	return System::Void();
}

System::Void MyProject::PracticeForm::изПрограммыToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	Application::Exit();
	return System::Void();
}
