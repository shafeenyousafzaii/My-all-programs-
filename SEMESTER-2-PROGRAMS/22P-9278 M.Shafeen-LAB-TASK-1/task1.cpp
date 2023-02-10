#include<iostream>
using namespace std;
int main()
{
    int seconds,minutes,hours,leftover_seconds,new_seconds;
    cout<<"Enter Time in seconds to convert into HH:MM:SS format"<<endl;
    cin>>seconds;
    cout<<endl;
    
    hours=seconds/3600;

    leftover_seconds=seconds%3600;

    minutes=leftover_seconds/60;

    seconds=leftover_seconds%60;
    
    // leftover_seconds=minutes;
    
    // new_seconds=hours-minutes;
    
    // leftover_seconds=new_seconds;
    
    cout<<""<<hours<<":"<<""<<minutes<<":"<<""<<seconds;

    return 0;
}
