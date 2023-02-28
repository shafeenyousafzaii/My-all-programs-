#include<iostream>
#include<iomanip>
#include<string>
#include<string.h>
using namespace std;
string removevowel(string x);
int checkvowel(char x);
int main()
{
    string x,z,q;
    string y="aeiou";
    cout<<"Enter a string to remove vowels"<<endl;
    cout<<endl;
    cin>>x;
    z=removevowel(x);
    
    cout<<z;
    return 0;
}
int checkvowel(char x)
{
    string vowel="aeiou";
    int z;
    for (int i = 0; i < vowel.length(); i++)
    {
        if (x==vowel[i])
        {
          return 1;
        }
        
        
    }
    return 0;
    
    
    
}
string removevowel(string x)
{
    string s="";
    for (int i = 0; i < x.length(); i++)
    {
        if (checkvowel(x[i])==0)
        {
            s+=x.substr(i,1);
        }
        
    }
    x=s;
    return x;
}