#include <iostream>
#include "clockType.h"

using namespace std;




int main()
{
clockType myClock;
clockType yourClock(3,5,32);
clockType thirdClock(yourClock);



int hours;
int minutes;
int seconds;
//Set the time of myClock
myClock.setTime(5, 4, 30);
cout << "myClock: ";
myClock.printTime();
cout << endl;
cout << "yourClock: ";
yourClock.printTime();
cout << endl;

cout << "thirdClock: ";
thirdClock.printTime();
cout << endl;
//Set the time of yourClock
yourClock.setTime(5, 45, 16);
cout << "After setting, yourClock: ";
yourClock.printTime();
cout << endl;

if (myClock.equalTime(yourClock))
  cout << "Both times are equal."<< endl;

else
  cout << "The two times are not equal." << endl;
cout << "Enter the hours, minutes, and seconds: ";
cin >> hours >> minutes >> seconds;
cout << endl;

myClock.setTime(hours, minutes, seconds);
cout << "New myClock: ";
myClock.printTime();
cout << endl;

myClock.incrementSeconds();
cout << "After incrementing myClock by one second, myClock: ";
myClock.printTime();
cout << endl;

myClock.getTime(hours, minutes, seconds); //Line 27
  //Output the value of hours, minutes, and seconds
cout << "    hours = " << hours << ", minutes = " << minutes << ", seconds = " << seconds << endl; //Line 28

clockType arrivalTimeEmp[100];

for (int j = 0; j < 100; j++)
{
cout << "Employee " << (j + 1)
<< " arrival time: ";
arrivalTimeEmp[j].setTime(8,0,0);
cout << endl;
}


return 0;
}//end main
