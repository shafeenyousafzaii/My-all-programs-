#include<iostream>
using namespace std;
int sum(int x,int y);
int sum(int x,int y,int z);
int main()
{
    //we can make many functions with the same function name called as function overloading.
    int x=6,y=7,z=1;
    sum(x,y);
    sum(x,y,z);
    return 0;
}
 int sum(int x,int y)
{
    cout<<"Function 1";
}
int sum(int x,int y,int z)
{
    cout<<"Functio 2";
}