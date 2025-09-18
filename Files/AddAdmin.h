#ifndef ADDADMIN_H
#define ADDADMIN_H
#include<iostream>
#include<fstream>
#include<string>
#include<msclr\marshal_cppstd.h>
namespace SMS {

	using namespace System;
	public ref class AddAdmin
	{
	public:
		bool AddStudent(System::String^ name, System::String^ gender, System::String^ cnic, System::String^ dob,
			System::String^ mobileNumber, System::String^ rollNumber, System::String^ section, System::String^ campus, System::String^ batch)
		{
			if (String::IsNullOrWhiteSpace(name) || String::IsNullOrWhiteSpace(gender) || String::IsNullOrWhiteSpace(cnic) ||
				String::IsNullOrWhiteSpace(dob) || String::IsNullOrWhiteSpace(mobileNumber) || String::IsNullOrWhiteSpace(rollNumber) ||
				String::IsNullOrWhiteSpace(section) || String::IsNullOrWhiteSpace(campus) || String::IsNullOrWhiteSpace(batch)) {
				return false;
			}
			System::IO::StreamWriter^ add_student = gcnew System::IO::StreamWriter("admin_student.txt", true);
			System::IO::StreamWriter^ student = gcnew System::IO::StreamWriter("students.txt", true);
			System::IO::StreamWriter^ studentt = gcnew System::IO::StreamWriter("student.txt", true);
			System::IO::StreamWriter^ studentAtten = gcnew System::IO::StreamWriter("stdAtten.txt", true);
			System::IO::StreamWriter^ user = gcnew System::IO::StreamWriter("userPwd.txt", true);



			std::string roll_temp = msclr::interop::marshal_as<std::string>(rollNumber);
			std::string roll_temp1 = "l";

			int i = 0;
			for (; i < 2; ++i) {
				roll_temp1 += roll_temp[i];
			}
			i += 2;
			for (; roll_temp[i] != '\0'; ++i) {
				roll_temp1 += roll_temp[i];
			}
			String^ rolll = gcnew String(roll_temp1.c_str());
			user->WriteLine(rolll + "@lhr.nu.edu.pk" + " " + "123");
			studentAtten->WriteLine(rollNumber+","+name+","+gender+","+cnic+","+mobileNumber+","+section+","+campus+" Campus"+","+batch+","+dob);

			add_student->WriteLine("Name," + name);
			student->WriteLine("Name," + name);
			add_student->WriteLine("Gender," + gender);
			add_student->WriteLine("CNIC," + cnic);
			add_student->WriteLine("Date of Birth," + dob);
			add_student->WriteLine("Mobile Number," + mobileNumber);
			add_student->WriteLine("Roll Number," + rollNumber);
			studentt->WriteLine(rollNumber+" "+name);
			student->WriteLine("Roll Number," + rollNumber);
			add_student->WriteLine("Section," + section);
			add_student->WriteLine("Campus," + campus);
			add_student->WriteLine("Batch," + batch);
			add_student->WriteLine(); 
			add_student->Close(); 
			student->Close(); 
			user->Close();
			studentAtten->Close();
			studentt->Close();
			return true; 
		}
	
		bool addTeacher(System::String^ name, System::String^ gender, System::String^ cnic, System::String^ dob,
			System::String^ mobileNumber, System::String^ userID, System::String^ degree, System::String^ campus, System::String^ depart)
		{
			if (String::IsNullOrWhiteSpace(name) || String::IsNullOrWhiteSpace(gender) || String::IsNullOrWhiteSpace(cnic) ||
				String::IsNullOrWhiteSpace(dob) || String::IsNullOrWhiteSpace(mobileNumber) || String::IsNullOrWhiteSpace(userID) ||
				String::IsNullOrWhiteSpace(degree) || String::IsNullOrWhiteSpace(campus) || String::IsNullOrWhiteSpace(depart)) {
				return false;
			}
			System::IO::StreamWriter^ sw = gcnew System::IO::StreamWriter("admin_teacher.txt", true);
			System::IO::StreamWriter^ swr = gcnew System::IO::StreamWriter("teachersDetail.txt", true);
			
			swr->WriteLine(userID+"," + name+","+gender+","+cnic+","+mobileNumber+","+degree+","+campus+","+depart+","+dob);
			

			std::string userid_temp2 = msclr::interop::marshal_as<std::string>(userID);
			std::string userid_temp3 = "l";

			int j = 0;
			for (; j < 2; ++j) {
				userid_temp3 += userid_temp2[j];
			}
			++j;
			for (; userid_temp2[j] != '\0'; ++j) {
				userid_temp3 += userid_temp2[j];
			}

			std::string name_temp = msclr::interop::marshal_as<std::string>(name);
			for (int i = 0; name_temp[i] != '\0'; ++i) {
				if(name_temp[i]==' ')
					name_temp[i] = '.';
			}
			String^ name_temp1= gcnew String(name_temp.c_str());
			String^ useriid1 = gcnew String(userid_temp3.c_str());
			System::IO::StreamWriter^ tuser = gcnew System::IO::StreamWriter("tuserPwd.txt", true);
			tuser->WriteLine(name_temp1 + "@lhr.nu.edu.pk" +" "+"123");
			sw->WriteLine("Name," + name);
			
			sw->WriteLine("Gender," + gender);
			sw->WriteLine("CNIC," + cnic);
			sw->WriteLine("Date of Birth," + dob);
			sw->WriteLine("Mobile Number," + mobileNumber);
			sw->WriteLine("User ID," + userID);
			sw->WriteLine("Degree," + degree);
			sw->WriteLine("Campus," + campus);
			sw->WriteLine("Department," + depart);
			sw->WriteLine(); 
			sw->Close(); 
			swr->Close(); 
			tuser->Close();
			return true; 
		}
	};
	
}
#endif 