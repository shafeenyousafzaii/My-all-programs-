#include<iostream>
#include<string>
#include<iomanip>
#include"NEWPROJECT.h"
using namespace std;
void personType::print() const
{
  cout << firstName << "    " << lastName;
}
void personType::setName(string first, string last)
{
  firstName = first;
  lastName = last;
}
string personType::getFirstName() const
{
  return firstName;
}
string personType::getLastName() const
{
  return lastName;
}

personType::personType(string first, string last)
{
  firstName = first;
  lastName = last;
}
void courseType::setCourseInfo(string cName, string cNo,
                               int credits)
{
  courseName = cName;
  courseNo = cNo;
  courseCredits = credits;
} //

void courseType::print(ostream &outF)
{
  outF << left;
  outF << setw(8) << courseNo << "              ";
  outF << setw(15) << courseName;
  outF << right;
  outF << setw(3) << courseCredits << "              ";
} //

courseType::courseType(string cName, string cNo, int credits)
{
  courseName = cName;
  courseNo = cNo;
  courseCredits = credits;
} //
int courseType::getCredits()
{
  return courseCredits;
} //
string courseType::getCourseNumber()
{
  return courseNo;
} //
string courseType::getCourseName()
{
  return courseName;
} //

void studentType::setInfo(string fName, string lName, int ID,
                          int nOfCourses, bool isTPaid,
                          vector<courseType> courses, vector<char> cGrades)
{
  int i;
  setName(fName, lName);
  sId = ID;
  isTuitionPaid = isTPaid;
  numberOfCourses = nOfCourses;
  for (i = 0; i < numberOfCourses; i++)
  {
    coursesEnrolled[i] = courses[i];
    coursesGrade[i] = cGrades[i];
  }
  sortCourses();
}

studentType::studentType()
{
  numberOfCourses = 0;
  sId = 0;
  isTuitionPaid = false;
  for (int i = 0; i < 6; i++)
    coursesGrade[i] = '*';
}

void studentType::print(ostream &outF, double tuitionRate)
{
  int i;
  outF << "Student Name: " << getFirstName() << "    " << getLastName() << endl;
  outF << "Student    ID:    " << sId << endl;
  outF << "Number    of    courses    enrolled:    " << numberOfCourses << endl;
  outF << endl;
  outF << left;
  outF << "Course    No" << setw(15) << "         Course    Name" << setw(8) << "Credits" << setw(6) << "Grade" << endl;
  outF << right;
  for (i = 0; i < numberOfCourses; i++)
  {
    coursesEnrolled[i].print(outF);
    if (isTuitionPaid)
    {
      outF << setw(4) << coursesGrade[i] << endl;
    }
    else
    {
      outF << setw(4) << "***" << endl;
    }
  }
  outF << endl;
  outF << "Total number of credit hours: " << getHoursEnrolled() << endl;
  outF << setw(4) << coursesGrade[i] << endl;
  outF << setw(4) << "***" << endl;
  outF << fixed << showpoint << setprecision(2);
  if (isTuitionPaid)
    outF << "Mid-Semester    GPA:    " << getGpa() << endl;
  else
  {
    outF << "***    Grades    are    being    held    for    not    paying    "
         << "the    tuition.    ***" << endl;
    outF << "Amount    Due:    $" << billingAmount(tuitionRate) << endl;
  }

  outF << "-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*"
       << "-*-*-*-*-" << endl
       << endl;
}

int studentType::getHoursEnrolled()
{
  int totalCredits = 0;
  int i;
  for (i = 0; i < numberOfCourses; i++)
    totalCredits += coursesEnrolled[i].getCredits();
  return totalCredits;
}
double studentType::billingAmount(double tuitionRate)
{
  return tuitionRate * getHoursEnrolled();
}
double studentType::getGpa()
{
  int i;
  double sum = 0.0;
  for (i = 0; i < numberOfCourses; i++)
  {
    switch (coursesGrade[i])
    {
    case 'A':
      sum += coursesEnrolled[i].getCredits() * 4;
      break;
    case 'B':
      sum += coursesEnrolled[i].getCredits() * 3;
      break;
    case 'C':
      sum += coursesEnrolled[i].getCredits() * 2;
      break;
    case 'D':
      sum += coursesEnrolled[i].getCredits() * 1;
      break;
    case 'F':
      break;
    default:
      cout << "Invalid    Course    Grade." << endl;
    }
  }
  return sum / getHoursEnrolled();
}
void studentType::sortCourses()
{
  int i, j;
  int minIndex;
  courseType temp;
  char tempGrade;
  string course1;
  string course2;
  for (i = 0; i < numberOfCourses - 1; i++)
  {
    minIndex = i;
    for (j = i + 1; j < numberOfCourses; j++)
    {
      // get    the    course    numbers
      course1 =
          coursesEnrolled[minIndex].getCourseNumber();
      course2 = coursesEnrolled[j].getCourseNumber();
      if (course1 > course2)
        minIndex = j;
    }
    temp = coursesEnrolled[minIndex];
    coursesEnrolled[minIndex] = coursesEnrolled[i];
    coursesEnrolled[i] = temp;
    tempGrade = coursesGrade[minIndex];
    coursesGrade[minIndex] = coursesGrade[i];
    coursesGrade[i] = tempGrade;
  }
}
