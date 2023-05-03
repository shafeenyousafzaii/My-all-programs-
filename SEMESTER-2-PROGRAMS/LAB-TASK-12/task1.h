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
     complextype operator+(const complextype&);
     complextype operator++();
    void display();    
    // ~complextype();
};
