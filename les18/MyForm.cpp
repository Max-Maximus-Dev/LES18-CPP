#include "MyForm.h"

using namespace System;
using namespace les18;
using namespace System::Windows::Forms;


[STAThreadAttribute]
int main()
{
    Application::EnableVisualStyles;
    Application::SetCompatibleTextRenderingDefault;
    Application::Run(gcnew MyForm());

}
