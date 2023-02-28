#include<iostream>
#include<string>
#include<string.h>
#include<vector>
using namespace std;
struct Student
{
    string StudentFname , StudentLname;
    int testscore;
    char grade;
};
void enterdata(Student *x);
void grade(Student *x);
int highestscore(Student &s);
int main()
{
    Student x[20];
    enterdata(x);
    grade(x);
    highestscore(x);
    
    
    
    
    
    return 0;
}
void enterdata(Student *x)
{
      for (int i = 0; i < 20; i++)
      {
        cout<<"Enter Your first name"<<endl;
        cin>>x[i].StudentFname;
        cout<<"Enter your last name "<<endl;
        cin>>x[i].StudentLname;
        cout<<"Enter Your test score"<<endl;
        cin>>x[i].testscore;
      }     
}
void grade(Student *x)
{
    cout<<"\nGrades: \n 85-100 = A\n75-85 = B\n65-75 = C\n50-65= D\nLess than 50 = F"<<endl;
    for (int i = 0; i < 20; i++)
    {
        if (x[i].testscore>84 && x[i].testscore < 101)
        {
            x[i].grade=='A';
        }
        else if (x[i].testscore<85 && x[i].testscore > 75)
        {
            x[i].grade=='B';
        }
        else if (x[i].testscore<75 && x[i].testscore > 65)
        {
            x[i].grade=='C';
        }
        else if (x[i].testscore<65 && x[i].testscore > 50)
        {
            x[i].grade=='D';
        }
        else if (x[i].testscore < 50)
        {
            x[i].grade=='F';
        }
    
    }
    
}
int highestscore(Student &s)
{
    for (int i = 0; i < 20; i++)
    {
        /* code */
    }
    
    
    
}
