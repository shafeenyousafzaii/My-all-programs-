#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
void dataa(string &x,int &y, int &z , int &q);
int main()
{
    string M_status; int gross_salary,children , pension;
    dataa(M_status , gross_salary , children , pension );
    return 0;
}
void data(string &x, int &y,int &z, int &q)
{
   cout<<"Enter your Maritual Status"<<endl;
   getline(cin,x);
   if (x=="married" || x=="Married")
   {
     cout<<"How many chicldren do you have under the age of 14?"<<endl;
     cin>>z;
     cout<<"Combined salary of both spouses : "<<endl;
     cin>>y;
     cout<<"Enter the percentage you want to contribute to pension fund"<<endl;
     cin>>q;
   }
   else
   {
     cout<<"Enter your gross salary : "<<endl;
     cin>>y;
     cout<<"Enter the percentage you want to contribute to pension fund "<<endl;
     cin>>q;
   }
   
}
