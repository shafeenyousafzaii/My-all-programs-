#include <iostream>
using namespace std;

struct studentType
{
  string firstName;
  string lastName;
  int test_score;
  int programming_score;
  double CGPA;

};

enum Weekday {Sun, Mon, Tue, Wed, Thu, Fri, Sat};
int main()
{
 //studentType s2{"ali","khan",40,80,3.8};
 Weekday day = Tue;
 cout << sizeof(day) << endl;
 studentType s2;
 studentType s1;
 cout << s1.firstName << endl;
 cout << s2.firstName << endl;

 //string str="hellooooooooooo";
 cout << sizeof(s2) << endl;

 //cout << sizeof(s1) << endl;
 //cout << sizeof(s2) << endl;

 //cout << s2.firstName << endl;
 //cout << s2.lastName << endl;

 return 0;
}
