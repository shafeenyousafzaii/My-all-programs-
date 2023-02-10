#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int BMI,meter2,kgs; float meter;
    cout<<"enter KG's and meter to calculate the BMI"<<endl;
    cin>>kgs;
    cout<<"Meter"<<endl;
    cin>> meter;
    meter2=meter*meter;
    BMI=kgs/meter2;
    cout<<"BMI value is "<<setprecision(3)<<(float)BMI<<endl;
    return 0;
}
