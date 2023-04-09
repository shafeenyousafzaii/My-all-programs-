#include<iostream>
#include<string>
#include"2task.h"
using namespace std;
BoatType::BoatType()
{
    boatLength=0;
}
BoatType::BoatType(int x)
{
    boatLength=x;
}
planeType::planeType()
{
    Maxaltitude=0;
}
planeType::planeType(int x)
{
   Maxaltitude=x;
}
void BoatType::swim()
{
    cout<<endl;
    cout<<"I am swimming"<<endl;
}
void planeType::fly()
{
    cout<<endl;
    cout<<"I am flying"<<endl;
}
skimmer::skimmer()
{
    name=" ";
    numPASSENGERS=0;
}
skimmer::skimmer(int x,int y,string s,int n):BoatType(x),planeType(y)
{
    name=s;
    numPASSENGERS=n;
}
void skimmer::SWIMANDFLY()
{
    cout<<"Skimmer Name : "<<name<<"Length : "<<BoatType::length()<<" Max Altitude"<<planeType::altitude()<<" Passengers : "<<numPASSENGERS<<endl;
    BoatType::swim();
    planeType::fly();
}
void skimmer::display()
{
    SWIMANDFLY();
}
void skimmer::input()
{

}
int  BoatType::length()
{
   return boatLength;
}
int planeType::altitude()
{
    return Maxaltitude;
}