    #include<iostream>  
using namespace std;
class ZodiacType;
class DateOfBirthType;
class Person;
class ZodiacType
{
private:
    string zodiac;
    string Zodiac_description;
public:
    ZodiacType(string,string);
    // void setZodiac();
   
    void GenerateZodiacData(int ,int);
    void Personality(   );

    // ~ZodiacType();
};
class DateOfBirthType
{
private:
    int day ;
    int month;
    int year;   
    ZodiacType Object1;
public:
    DateOfBirthType(string zodiac="",string zodiac_desc="", int day=0,int month=0,int year=0);
    void SetDOB();
    void GetDOB();
    void setZodiac();
    void getzodiac();
    /*int getDay();             
    int getMonth();
    int getYear();*/
    // ~DateOfBirthType();
    
};
class Person 
{
private:
   string name;
   DateOfBirthType date_of_birth;
public:
    Person(string z="" , string zd="",int d=0 ,int m=0 , int y=0,string name=" ");
    void SetInfo();
    // void SetName();
    void DisplayZodiacInfo();
    // ~Person();
};

