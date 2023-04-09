#include<iostream>
#include<string>
#include<iomanip>
#include"practice.h"
using namespace std;
int main()
{
  practice *students[]=
{  
  new practice (15,20),
  // new practice (30,60), 
  // new practice (10,20),
  new poly_rect(10,20,30),
  new morphism_volume(10,20,30,40)
};
for (int i = 0; i < 3; i++)
{
   students[i]->getdata();
}
for (int i = 0; i < 3; i++)
{
    delete students[i];
}
// delete students;



}