#include<iostream>
#include<string>
#include"Question2.h"
#include<iomanip>
using namespace std;
romanType::romanType()
{
   RomanNumerals='x';
   RomanDecimals=0;
}
romanType::~romanType()
{
    cout<<"Destroyed"<<endl;
}
void romanType::setter()
{
    cout<<"Enter Decimal of these Roman numerals : \
     'M' : 1000\
     'D' : 500\
     'C' : 100\
     'L' : 50\
     'X' : 10\
     'V' : 5\
     'I' : 1\
       "<<endl;
    cin>>RomanNumerals;
}
void romanType::getter()
{
    cout<<"The roman Numeral You entered is : "<<RomanNumerals<<endl;
    cout<<"In decimanl : "<<endl;
}