#include<iostream>
#include<string>
#include<fstream>
#include<msclr/marshal_cppstd.h>
namespace SMS {
using namespace System;
using namespace System::IO;


using namespace System;
using namespace System::Data;
using namespace System::Data::SqlClient;

	public ref class Transcript
	{
	private:
		String^ connectionString = "Data Source=LAPTOP-7E9PK6M6\\SQLEXPRESS;Initial Catalog=Flex;Integrated Security=True;";
		String^ rollNumber;

		// totals per subject
		double OOP_Total, ISE_Total, DS_Total, MVC_Total, DLD_Total;

		void ReadSubjectTotals(String^ subjName, double% outTotal)
		{
			try {
				SqlConnection^ conn = gcnew SqlConnection(connectionString);
				conn->Open();

				// 1) find SubjectID
				SqlCommand^ cmdSub = gcnew SqlCommand(
					"SELECT SubjectID FROM Subject WHERE Name = @nm", conn);
				cmdSub->Parameters->AddWithValue("@nm", subjName);
				int sid = safe_cast<int>(cmdSub->ExecuteScalar());

				// 2) sum all scores for this student + subject
				SqlCommand^ cmdSum = gcnew SqlCommand(
					"SELECT " +
					"  (SELECT ISNULL(SUM(qs.MarksObtained),0) FROM QuizScore qs " +
					"     JOIN Quiz q ON qs.QuizID=q.QuizID " +
					"     WHERE qs.StudentID=(SELECT StudentID FROM Student WHERE RollNO=@roll) " +
					"       AND q.SubjectID=@sid) " +
					" + (SELECT ISNULL(SUM(asg.MarksObtained),0) FROM AssignmentScore asg " +
					"     JOIN Assignment a ON asg.AssignmentID=a.AssignmentID " +
					"     WHERE asg.StudentID=(SELECT StudentID FROM Student WHERE RollNO=@roll) " +
					"       AND a.SubjectID=@sid) " +
					" + (SELECT ISNULL(SUM(es.MarksObtained),0) FROM ExamScore es " +
					"     JOIN Exam e ON es.ExamID=e.ExamID " +
					"     WHERE es.StudentID=(SELECT StudentID FROM Student WHERE RollNO=@roll) " +
					"       AND e.SubjectID=@sid AND e.Type='Midterm') " +
					" + (SELECT ISNULL(SUM(es.MarksObtained),0) FROM ExamScore es " +
					"     JOIN Exam e ON es.ExamID=e.ExamID " +
					"     WHERE es.StudentID=(SELECT StudentID FROM Student WHERE RollNO=@roll) " +
					"       AND e.SubjectID=@sid AND e.Type='Final') "
					, conn);

				cmdSum->Parameters->AddWithValue("@roll", rollNumber);
				cmdSum->Parameters->AddWithValue("@sid", sid);

				Object^ res = cmdSum->ExecuteScalar();
				outTotal = (res == nullptr || res == DBNull::Value)
					? 0.0
					: safe_cast<double>(res);

				conn->Close();
			}
			catch (Exception^ ex) {
				outTotal = 0.0;
			}
		}


	public:
		Transcript(String^ connStr, String^ roll)
			: connectionString(connStr), rollNumber(roll),
			OOP_Total(0), ISE_Total(0), DS_Total(0), MVC_Total(0), DLD_Total(0)
		{
		}

		void CalculateAllTotals()
		{
			ReadSubjectTotals("OOP", OOP_Total);
			ReadSubjectTotals("ISE", ISE_Total);
			ReadSubjectTotals("DS", DS_Total);
			ReadSubjectTotals("MVC", MVC_Total);
			ReadSubjectTotals("DLD", DLD_Total);
		}


		double GetOOP_TotalMarks() { return OOP_Total; }
		double GetISE_TotalMarks() { return ISE_Total; }
		double GetDS_TotalMarks() { return DS_Total; }
		double GetMVC_TotalMarks() { return MVC_Total; }
		double GetDLD_TotalMarks() { return DLD_Total; }

	};
}