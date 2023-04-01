#include<iostream>
#include<string>
using namespace std;

class DOB
{
private:
    int month;
    int day;
    int year;
public:
    DOB(int month,int day , int year);
    void setDOB(int month  , int day  , int year );
    void getDOB()const;
    // ~DOB();
};

class NameType
{
private:
    string firstName,Lastname;
public:
    NameType();
    NameType(string first,string last);
    void setname(string first , string last );
    void getname()const;
    // ~NameType();
};

class contacts
{
private:
    NameType name;
    DOB dob;
    string emailaddress;
    long double  phonenumber;
public:
    contacts(string FN, string LN ,int day , int month , int year,string emailaddress ,  long double phonenumber);
    void setName(string firstname,string lastname);
    void getName()const;
    void getDOB()const;
    void setDOB(int day , int month , int year);
    void set_email_num(string email,double num);
    void get_email_num()const;
    // ~contacts();
};


class contactBookType
{
private:
    contacts c[3];
    
public:
    contactBookType(string firstName,string lastName , int day , int month , int year ,string email , double number );
    contactBookType();
    void addcontact();
    void printdetails()const;
    // ~contactBookType();
};
