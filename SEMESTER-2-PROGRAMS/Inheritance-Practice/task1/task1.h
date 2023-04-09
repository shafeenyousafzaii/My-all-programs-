#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
class personType
{
private:
   string firstname;
   string lastname;
   string namee;
public:
    // personType(string firstname=" ",string lastname=" ");
    //  personType(string , string );
    personType();   
    void setname();
    void getname()const;
    string name()const;
    void getfirstname()const;
    void getlastname()const;
    // ~personType();
};
class doctorType : public personType
{
private:
      string DOC_SPECIALITY;
public:
    doctorType();
    doctorType(string);
    void getName()const;
    void setName();
    void setDOCSPEC();
    void getDOCSPEC()const;


    // ~doctorType();

};
class BillType 
{
private:
    int PatientID;
    int pharmacy,doctorfee,roomcharges;
    int total;   

public:
    BillType();
    void setPatientID();
    void getPatientID()const;
    void setPHcharges();
    void getPHcharges(int)const;
    void setTotalCharges();
    void getTotalCharges()const;
    // ~BillType();
};

class dateType
{
public:
void setDate(int month, int day, int year);
//Function to set the date.
//The member variables dMonth, dDay, and dYear are set
//according to the parameters.
//Postcondition: dMonth = month; dDay = day;
// dYear = year
int getDay() const;
//Function to return the day.       
//Postcondition: The value of dDay is returned.
int getMonth() const;
//Function to return the month.
//Postcondition: The value of dMonth is returned.4
int getYear() const;
//Function to return the year.
//Postcondition: The value of dYear is returned.
void printDate() const;
//Function to output the date in the form mm-dd-yyyy.
// dateType(int month = 1, int day = 1, int year = 1900);
dateType();
//Constructor to set the date
//The member variables dMonth, dDay, and dYear are set
//according to the parameters.
//Postcondition: dMonth = month; dDay = day; dYear = year;
// If no values are specified, the default
// values are used to initialize the member
// variables.
void setAdmitDate(int );
void setDischargeDate(int );
void getAdmitDate()const;
void getDischargeDate()const;
private:
int dMonth; //variable to store the month
int dDay; //variable to store the day
int dYear; //variable to store the year
// int DOB[3]; // [0] = Day ; [1] = Month ; [2] = Year 
int patientAdmitDate;
int patientDischargeDate;

};
class patientType : public personType
{
private:
    int P_ID;
    int age;
    dateType patient;
    // doctorType DocName;

    

    

public:
    patientType();
    patientType(int,int,int,int,int);
    void setP_ID(int );
    void getP_ID()const;
    void setAGE();
    void getAGE()const;
    void setPATIENTNAME();
    void getPATIENTNAME()const;
    // ~patientType();
};
