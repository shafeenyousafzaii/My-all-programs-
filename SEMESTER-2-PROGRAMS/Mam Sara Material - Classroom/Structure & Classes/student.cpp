#include <iostream>
using namespace std;

struct studentType
{
  string firstName;
  string lastName;
  int testScore;
  int programmingScore;
  char courseGrade;
  double CGPA;


};

studentType calculateGrade(studentType);
void calculateGrade(studentType&);

int main()
{
 studentType newStudent,s;
 studentType s1;

 cin >> newStudent.firstName;
 cin >> newStudent.testScore >> newStudent.programmingScore;

 //newStudent = calculateGrade(newStudent);
  s = calculateGrade(newStudent);

 //cout << "The grade is " << newStudent.courseGrade << endl;
 cout << "The grade is " << s.courseGrade << endl;

 //calculateGrade2(newStudent);
 cout << "The grade is " << newStudent.courseGrade << endl;



 return 0;


}

studentType calculateGrade(studentType s)
{

int score = (s.testScore + s.programmingScore) / 2;
if (score >= 90)
  s.courseGrade = 'A';
else if (score >= 80)
  s.courseGrade = 'B';
else if (score >= 70)
  s.courseGrade = 'C';
else if (score >= 60)
  s.courseGrade = 'D';
else
  s.courseGrade = 'F';

return s;
}

void calculateGrade2(studentType& s)
{
  int score = (s.testScore + s.programmingScore) / 2;
  if (score >= 90)
    s.courseGrade = 'A';
  else if (score >= 80)
    s.courseGrade = 'B';
  else if (score >= 70)
    s.courseGrade = 'C';
  else if (score >= 60)
    s.courseGrade = 'D';
  else
    s.courseGrade = 'F';


}
