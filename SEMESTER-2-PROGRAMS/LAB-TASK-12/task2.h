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
    friend complextype operator+(const complextype,const complextype);
    friend complextype operator++(complextype &c);
    void display();    
    // ~complextype();
};
