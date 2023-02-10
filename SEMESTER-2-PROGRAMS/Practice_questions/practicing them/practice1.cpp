#include<string>
#include<string.h>
#include<iostream>
using namespace std;
string removechar(string x);
int main()
{
    string s;
    cout<<"Enter a string"<<endl;
    cin>>s;
    s=removechar(s);
    cout<<s<<endl;
    return 0;
}
string removechar(string x)
{
   string y=x,q,z="aeiouAEIOU";
   for (int i = 0; i < y.length(); i++)
   {
      for (int  j = 0; j < z.length(); j++)
      {
        if (y[i]!=z[i])
        {
            q=q+y.substr(i,1);
        }
        
       }
     
   }
   return q;
}
