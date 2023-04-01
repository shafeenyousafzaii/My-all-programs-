#include<iostream>
#include<string>
#include"task.h"
using namespace std;
DOB::DOB(int month=0 , int day=0 , int year=0)
{
    this->month=month;
    this->day=day;
    this->year=year;
}
// DOB::DOB(int month , int day , int year)
// {
//     this->month=month;
//     this->day=day;
//     this->year=year;
// }
void DOB::setDOB(int month,int day , int year)
{
  this->month=month;
  this->day=day;
  this->year=year;
}
NameType::NameType(string FN=" ",string LN=" ")
{
    firstName=FN;
    Lastname=LN;
}
void NameType::setname(string FN,string LN)
{
    firstName=FN;
    Lastname=LN;
}
void NameType::getname()const
{
    string name;
    name=firstName+Lastname;
    cout<<"Name is : "<<name<<endl;
}
contacts::contacts(string FN=" ", string LN=" " , int month=0 , int day=0 , int year=0 , string emailaddress=" " , long  double phonenumber=0 ):name(FN,LN),dob(day , month , year)
{
      this->emailaddress=emailaddress;
      this->phonenumber=phonenumber;
      NameType(FN,LN);
      DOB(month,day,year );
}
void contacts::setName(string fN, string LN)
{
    name.setname(fN,LN);
}
void contacts::setDOB(int month , int day , int year)
{
    dob.setDOB(month,day,year);
}
void contacts::set_email_num(string email,double num)
{
    emailaddress=email;
    phonenumber=num;
}
void contacts::get_email_num()const
{
    cout << "Email : "<<emailaddress<<endl;
    cout << "Phone : "<<phonenumber<<endl;
}
void DOB::getDOB()const
{
    cout<<"DOB :"<<endl;
    cout<<day<<":"<<month<<":"<<year<<endl;
}
void contacts::getDOB()const
{
   dob.getDOB();
}
// contactBookType::contactBookType(string FN = " ", string LN= " " , int day=0 , int month=0 , int year =0, string email=" " , double number=0 ):c(FN,LN,day,month,year,email,number)
// {
  
// }
contactBookType::contactBookType()
{
  string FN=" ",LN=" ";
  int day=00,month=00,year=0000;
  string email=" ";
  double number=000000;
  for(int i = 0 ; i<3 ; i++)
  {
  c[i].setName(FN,LN);
  c[i].setDOB(day,month , year);
  c[i].set_email_num(email,number);
  }
}    
void contacts::getName()const
{
    
    name.getname();
}
void contactBookType::addcontact()
{
   string FN,LN;
   int day,month,year;
   string emaill;
   double numm;
   for(int i = 0 ; i < 3 ; i++ )
   {
   cout<<"Enter First Name and last name "<<endl;
   cin>>FN;
   cout<<endl;
   cout<<"Enter last name"<<endl;
   cin>>LN;
   cout<<endl;
   c[i].setName(FN,LN);
   cout<<"Enter Your DOB : first enter your day"<<endl;
   cin>>day;
   cout<<"Month"<<endl;
   cin>>month;
   cout<<"year"<<endl;
   cin>>year;
   c[i].setDOB(day,month,year);
   cout<<"Enter your email"<<endl;
   cin>>emaill;
   cout<<"Enter number "<<endl;
   cin>>numm;
   c[i].set_email_num(emaill,numm);
   }
}
void contactBookType::printdetails()const
{ 
    for( int i = 0 ; i < 3 ; i++)
    {
    c[i].getName();
    c[i].getDOB();
    c[i].get_email_num();
    }
}