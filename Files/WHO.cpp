#include <Windows.h>
#include "WHO.h"
#include "Login_Student.h"
#include "Login_Admin.h"
#include "Login_Teacher.h"
#include "Attendance_Student.h"
#include "Attendance_Studentt.h"
#include "Teacher_Attendance.h"
#include "Edit_Student.h"
#include "Edit_Teacher.h"
#include "FeaturesAdmin.h"
#include "Info_Student.h"
#include "Info_Teacher.h"
#include "Remove_Student.h"
#include "Search_Student.h"
#include "Student_Home.h"
#include "Teacher_Home.h"
#include "Teacher_Marks.h"
#include "Teacher_Marks2.h"
#include "Transcript_User.h"
#include "User_Admin.h"
#include "User_Student_Admin.h"
#include "User_Teacher_Admin.h"
#include <iostream>

using namespace SMS;
using namespace System;
using namespace System::Windows::Forms;
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::Data::SqlClient;
using namespace msclr::interop;

[STAThread]
int main(array<System::String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    WHO^ who = gcnew WHO();

    Application::Run(who);

    return 0;
}
