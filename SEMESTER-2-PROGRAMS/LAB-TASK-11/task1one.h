#include<iostream>
#include<string>
using namespace std;
class complextype
{
private:
     int real;
     int imaginary;    
public:
    complextype(int x=0,int y=0);
    friend complextype addComlex(complextype,complextype);
    void display();    
    // ~complextype();
};
