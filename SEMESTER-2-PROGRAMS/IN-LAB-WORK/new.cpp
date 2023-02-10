#include<iostream>

int  disp(int &x);
using namespace std;
int main()
{
    int x;
    cout<<"Enter a number ";
    cin>>x;
    disp(x);
    cout<<x;
    return 0;
}
int  disp(int &a)
{
  a++;
  return a;
}