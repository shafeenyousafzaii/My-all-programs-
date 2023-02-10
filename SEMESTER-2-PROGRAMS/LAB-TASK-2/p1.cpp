#include<iostream>
#include<string>
#include<string.h>
using namespace std;
string check_password(string x);
int main()
{
    string name,password;
    cout<<"Enter your name"<<endl;
    getline(cin,name);
    cout<<"Enter your password"<<endl;
    getline(cin,password);
    check_password(password);
    return 0;
}
string check_password(string y)
{
    string password;
    string pass_check;
    int count=0;
    password=y;
    if(password.length()==8)
    {
    //    for (int i = 0; i < ; i++)
    //    {
    //     /* code */
    //    }
      for (int i = 0; i < password.length(); i++)
      {
          if(password[i]=='!')
          {
            count++;
          }
          else if (password[i]=='@')
          {
             count++;
          }
          else if (password[i]=='#')
          {
             count++;
          }
          else if (password[i]=='$')
          {
             count++;
          }
          else if (password[i]=='%')
          {
             count++;
          }
          else if (password[i]=='^')
          {
             count++;
          }
          else if (password[i]=='&')
          {
             count++;
          }
          else if (password[i]=='*')
          {
             count++;
          }
          else if (password[i]=='(')
          {
             count++;
          }
          else if (password[i]==')')
          {
             count++;
          }
        //   else
        //   {
        //     cout<<"Enter a valid code";
        //   }
      }
      if (count==1)
      {
        cout<<"Enter password again"<<endl;

        getline(cin,pass_check);

        if ( pass_check != password )
            {
                cout<<"\nEnter the correct password"<<endl;
                getline(cin,pass_check);
            }

        if ( pass_check == password)
        { 
            
            cout<<"\n“You know what? You can be a great programmer. Keep Coding!” "<<endl;
        }
        
      }
      else
      {
        cout<<"Enter a valid password"<<endl;
      }
      
       
    }
}