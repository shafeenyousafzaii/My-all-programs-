#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
class personType
{
protected:
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
      string DOC_SPECIALITY;
public:
    doctorType();
    ~doctorType();
};
