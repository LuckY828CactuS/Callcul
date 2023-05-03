#include "MyForm.h"
#include<string>
using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
int main(array<String^>^ args)
{
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	ckalckulitor::MyForm form;
	Application::Run(% form);
}

