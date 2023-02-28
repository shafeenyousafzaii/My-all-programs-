#include <iostream>
using namespace std;

class clockType
{
public:
  int hr;
  int min;
  int sec;

void setTime(int hours, int mins, int secs)
{
 hr = hours;
 min = mins;
 sec = secs;


}


void printTime()
{

cout << hr << ":" << min << ":" << sec << endl;

}

};

int main()
{
 clockType c1;

 c1.setTime(2,4,50);
 c1.printTime();

 return 0;


}
