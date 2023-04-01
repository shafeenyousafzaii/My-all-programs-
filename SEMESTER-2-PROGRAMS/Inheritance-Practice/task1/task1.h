#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
class personType
{
private:
   string firstname;
   string lastname;
public:
    personType();
    void setname(string , string );
    void getname()const;
    void getfirstname()const;
    void getlastname()const;
    ~personType();
};
class doctorType : public personType
{
private:
     
public:
    doctorType();
    ~doctorType();
};
