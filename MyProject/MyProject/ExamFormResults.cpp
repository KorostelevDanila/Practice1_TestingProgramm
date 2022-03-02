#include "ExamFormResults.h"
#include "QuestClass.h"
#include "MyForm.h"
#include "ConvertFuncs.h"

extern array<int, 10> random;
extern Questions quests[10];

System::Void MyProject::ExamFormResults::ExamFormResults_Load(System::Object^ sender, System::EventArgs^ e)
{
	int score = 0;
	for (int k = 0; k < 10; k++) {
		score += quests[random[k]].answer;
	}

	if (score <= 4) {
		this->label12->Text = "ќценка: 2";
	
	}
	else {
		if (score <= 6) {
			this->label12->Text = "ќценка: 3";
		}
		else {
			if (score <= 8) {
				this->label12->Text = "ќценка: 4";
			}
			else this->label12->Text = "ќценка: 5";
		}
	}

	String^ question = Convert_string_to_String(quests[random[0]].givenAnswer, question);
	this->textBox1->Text = question;
		
	question = Convert_string_to_String(quests[random[1]].givenAnswer, question);
	this->textBox2->Text = question;

	question = Convert_string_to_String(quests[random[2]].givenAnswer, question);
	this->textBox3->Text = question;

	question = Convert_string_to_String(quests[random[3]].givenAnswer, question);
	this->textBox4->Text = question;

	question = Convert_string_to_String(quests[random[4]].givenAnswer, question);
	this->textBox5->Text = question;

	question = Convert_string_to_String(quests[random[5]].givenAnswer, question);
	this->textBox6->Text = question;

	question = Convert_string_to_String(quests[random[6]].givenAnswer, question);
	this->textBox7->Text = question;

	question = Convert_string_to_String(quests[random[7]].givenAnswer, question);
	this->textBox8->Text = question;

	question = Convert_string_to_String(quests[random[8]].givenAnswer, question);
	this->textBox9->Text = question;

	question = Convert_string_to_String(quests[random[9]].givenAnswer, question);
	this->textBox10->Text = question;

	return System::Void();
}

System::Void MyProject::ExamFormResults::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	MyForm^ form = gcnew MyForm();
	this->Close();
	form->Show();
	return System::Void();
}

System::Void MyProject::ExamFormResults::выйтиToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	Application::Exit();
	return System::Void();
}
