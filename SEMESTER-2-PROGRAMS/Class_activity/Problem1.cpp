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
void enterdata(Student x[]);
Student grade(Student x[]);
int highestscore(Student *s);
void name_h_score(Student *s,int x);
int main()
{
    int h_c;
    Student x[3];
    enterdata(x);
    grade(x);
    h_c=highestscore(x);
    name_h_score(x,h_c);
    
    
    
    
    
    return 0;
}
void enterdata(Student x[])
{
      for (int i = 0; i < 3; i++)
      {
        cout<<"Enter Your first name"<<endl;
        cin>>x[i].StudentFname;
        cout<<"Enter your last name "<<endl;
        cin>>x[i].StudentLname;
        cout<<"Enter Your test score"<<endl;
        cin>>x[i].testscore;
      }     
}
Student grade(Student x[])
{
    cout<<"\nGrades: \n85-100 = A\n75-85 = B\n65-75 = C\n50-65= D\nLess than 50 = F"<<endl;
    for (int i = 0; i < 3; i++)
    {
        if (x[i].testscore>84 && x[i].testscore < 101)
        {
            x[i].grade=='A';
        }
        else if (x[i].testscore<85 && x[i].testscore >= 75)
        {
            x[i].grade=='B';
        }
        else if (x[i].testscore<75 && x[i].testscore > 65)
        {
            x[i].grade=='C';
        }
        else if (x[i].testscore<=65 && x[i].testscore >=50)
        {
            x[i].grade=='D';
        }
        else if (x[i].testscore < 50)
        {
            x[i].grade=='F';
        }
    
    }
    for (int i = 0; i < 3; i++)
    {
        cout<<endl;
        cout<<""<<x[i].StudentFname+x[i].StudentLname<<"  "<<x[i].grade<<"  "<<x[i].testscore;
    }
    
}
int  highestscore(Student *s)
{
    int max=s[0].testscore;
    int count=0;
    for (int i = 0; i < 3; i++)
    {
        if (s[i].testscore>max)
        {
            count++;
            max=s[i].testscore;
        }
        
    }
    cout<<"\n"<<count<<" is the highest test scorer"<<endl;
    
    
}
void name_h_score(Student *s, int x)
{
    for (int i = 0; i < 3; i++)
    {
        if (s[i].testscore==x)
        {
            cout<<" "<<s[i].StudentFname+s[i].StudentLname<<" scored the highest score"<<endl;
        }
        
    }
    
}