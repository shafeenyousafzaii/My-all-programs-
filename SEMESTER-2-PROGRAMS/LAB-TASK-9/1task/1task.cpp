#include<iostream>
#include<string>
#include<iomanip>
#include"1task.h"
using namespace std;
AnimalTyoe::AnimalTyoe()
{
    name=" ";
    age=0;
}
AnimalTyoe::AnimalTyoe(string namee,int agee)
{
    name=namee;
    age=agee;
}
// void AnimalTyoe::display()
// {
//     cout<<"Name : "<<name<<endl;
//     cout<<"Age  : "<<age<<endl;
// }
void AnimalTyoe::speak()const
{
    // cout<<"Name : "<<name<<endl;
    // cout<<"Age  : "<<age<<endl;
    // cout<<"I am a "<<name<<" and i can sing"<<endl;
}
BirdType::BirdType()
{
    winglength=0;
}
BirdType::BirdType(string s , int a ,int winglengthh):AnimalTyoe(s,a)
{
    // name=s;
    // age=a;
    winglength=winglengthh;
}
void BirdType::speak()const
{
    cout<<"Name : "<<name<<endl;
    cout<<"Age  : "<<age<<endl;
    cout<<"WingLength : "<<winglength<<endl;
    cout<<"I am a "<<name<<" and i can sing"<<endl;   
}
ReptileType::ReptileType()
{
    habitat= " ";
}
ReptileType::ReptileType(string s,int a,string ss):AnimalTyoe(s,a)
{
    habitat=ss;
}
void ReptileType::speak()const
{
    cout<<"Name : "<<name<<endl;
    cout<<"Age  : "<<age<<  endl;
    // cout<<"WingLength : "<<winglength<<endl;
    cout<<"I am a "<<name<<" and i can sing"<<endl;
}
