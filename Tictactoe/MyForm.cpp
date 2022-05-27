#include "MyForm.h"
using namespace System;
using namespace System::Windows::Forms;
[STAThread]
void main(array<String^>^ args) //Eksekusi program awal
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Tictactoe::MyForm form;
    Application::Run(% form);
}