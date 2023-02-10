#include <bits/stdc++.h>
using namespace std;
bool find_vowel(char p)
{
   string vowel="aeiou";
   int n;
   n=vowel.length();
   for(int i=0;i<n;i++)
   {
       if(p==vowel[i])
       return true;
   }
   return false;
}
void remove_vowel(string s)
{
 string temp="";
 int n=s.length();
 for(int i=0;i<n;i++)
 {
     if(find_vowel(s[i])==false)
     {
         temp = temp+s.substr(i,1);
     }
 }
 cout<<temp;
}
int main()
{
    cout<<"Enter a string"<<endl;
    string inp="There";
    getline(cin,inp);    
    remove_vowel(inp);
    
}