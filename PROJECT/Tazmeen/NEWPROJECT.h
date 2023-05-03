#include <iostream>
#include <iomanip>
#include <fstream>
#include <sstream>
#include <vector>
using namespace std;
const int MAX_NO_OF_STUDENTS = 10;
class personType
{
public:
  void print() const;
  void setName(string first, string last);
  string getFirstName() const;
  string getLastName() const;
  personType(string first = "", string last = "");

private:
  string firstName;
  string lastName;
};
//--------------------------------------------
class courseType
{
public:
  void setCourseInfo(string cName, string cNo, int credits);
  void print(ostream &outF);
  int getCredits();
  string getCourseNumber();
  string getCourseName();
  courseType(string cName = "", string cNo = "", int credits = 0);

private:
  // courseCredits    =    credits;
  string courseName;
  string courseNo;
  int courseCredits; //
};
//-------------------------------------------------------------------------------------------------------------------
class studentType : public personType
{
public:
  void setInfo(string fname, string lName, int ID,
               int nOfCourses, bool isTPaid,
               vector<courseType> courses, vector<char> courseGrades);
  void print(ostream &outF, double tuitionRate);
  studentType();
  int getHoursEnrolled();
  double getGpa();
  double billingAmount(double tuitionRate);

private:
  void sortCourses();
  int sId;
  int numberOfCourses;
  bool isTuitionPaid;
  courseType coursesEnrolled[6];
  char coursesGrade[6];
};
//----------------------------------------------------------------------------------------------------------------------

