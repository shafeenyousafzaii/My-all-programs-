#include<iostream>
using namespace std;
void displayy(student s);
struct student
{
     string name;
     int marks;
};

int main()
{
    student s[3];
    
    for (int i = 0; i < 3; i++)
    {
        cout<<"Enter your name : "<<endl;
        cin>>s[i].name;
        cout<<"Enter your marks : "<<endl;
        cin>>s[i].marks;
    }
    for (int i = 0; i < 3; i++)
    {
       displayy(s[i]); 
    }
    
     
    
    return 0;
}
void displayy(student s[])
{
    for (int i = 0; i < 3; i++)
    {
        cout<<"Name : "<<s[i].name<<endl;
        cout<<"Marks : "<<s[i].marks<<endl;
    }
    
}