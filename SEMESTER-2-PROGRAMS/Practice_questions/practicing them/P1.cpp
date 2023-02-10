#include<iostream>
#include<string>
#include<string.h>
#include<strings.h>
using namespace std;
string removevowels(string x);
int main()
{
    string practice,y,q="";
    cout<<"Enter a string to extract it make another sub string"<<endl;
    cin>>practice;
    y=removevowels(practice);
    for (int i = 0; i < y.length(); i++)
    {
        if (practice[i]==y[i])
        {
            q=practice.erase(i,1);
        }
        
    }
    
    cout<<""<<q;
    return 0;
}
string removevowels(string x)
{ 
    string z="";
    for (int i = 0; i < x.length(); i++)
    {
      if (x[i]=='a' || x[i]=='A')
      {
         z=x.substr(i,1);
      }
      else if (x[i]=='e' || x[i]=='E')
      {
        z=x.substr(i,1);
      }
      else if (x[i]=='i' || x[i]=='I')
      {
        z=x.substr(i,1);
      }
      else if (x[i]=='o' || x[i]=='O')
      {
        z=x.substr(i,1);
      }
      else if (x[i]=='U' || x[i]=='u')
      {
        z=x.substr(i,1);
      } 
    }
    return z;
        

}
