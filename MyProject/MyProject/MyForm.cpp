#include "MyForm.h"
#include "ExamForm.h"
#include "PracticeForm.h"
#include "ConvertFuncs.h"
#include "AboutProgramm.h"
#include <locale.h>

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void main(array<String^>^ args) {
	setlocale(LC_ALL, "ru-RU");
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	MyProject::MyForm form;
	Application::Run(% form);
}

System::Void MyProject::MyForm::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	ExamForm^ form = gcnew ExamForm();
	this->Hide();
	form->Show();

	return System::Void();
}

System::Void MyProject::MyForm::âûéòèToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	Application::Exit();
	return System::Void();
}

System::Void MyProject::MyForm::button2_Click(System::Object^ sender, System::EventArgs^ e)
{
	PracticeForm^ form = gcnew PracticeForm();
	this->Hide();
	form->Show();

	return System::Void();
}

System::Void MyProject::MyForm::îÏðîãðàììåToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	AboutProgramm^ form = gcnew AboutProgramm();
	form->Show();

	return System::Void();
}
