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
void grade(Student *z);
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
void grade(Student *z)
{
    cout<<"\nGrades: \n85-100 = A\n75-85 = B\n65-75 = C\n50-65= D\nLess than 50 = F"<<endl;
    for (int i = 0; i < 3; i++)
    {
        if (z[i].testscore>=85 && z[i].testscore <= 100)
        {

            z[i].grade='A';
            
        }
        else if(z[i].testscore>=75 && z[i].testscore < 85)
        {
            z[i].grade='B';
            
        }
        else if(z[i].testscore>=65 && z[i].testscore < 75)
        {
            z[i].grade='C';
            
        }
        else if(z[i].testscore>=50 &&z[i].testscore < 65)
        {
            z[i].grade='D';
            
        }
        else if(z[i].testscore < 50)
        {
            z[i].grade='F';
            
        }   
    
    }
    cout<<"Students List"<<endl;
    for (int
     i = 0; i < 3; i++)
      {
        cout<<z[i].StudentLname<<",\t"<<z[i].StudentFname<<"\t"<<z[i].testscore<<"\t"<<z[i].grade<<endl;
      }
    for (int i = 0; i < 3; i++)
    {
        cout<<endl;
        cout<<"\n"<<z[i].StudentLname<<",\t "<<z[i].StudentFname<<"  "<<z[i].grade<<"  "<<z[i].testscore<<left;
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
    cout<<"\n"<<max<<" is the highest test score"<<endl;
    return count;
    
}
void name_h_score(Student *s, int x)
{
    for (int i = 0; i < 3; i++)
    {
        if (s[i].testscore==s[x].testscore)
        {
            cout<<"\n"<<s[i].StudentLname<<","<<s[i].StudentFname<<" scored the highest score"<<endl;
        }
        
    }
    
}