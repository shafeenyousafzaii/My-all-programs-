#include<iostream>
#include<string>
#include<fstream>
using namespace std;
class Class
{
private:
    string hello;
public:
    Class();
    Class(string);
    void inputFileHandling();
    void outputFileHandling();
    ~Class();
};

Class::Class()
{
    hello=" ";
}

Class::Class(string x)
{
    hello=x;
}
Class::~Class()
{
    cout<<"Hello BYe!"<<endl;
}
void Class::inputFileHandling()
{
  ofstream hellooo;
  hellooo.open("newtext.txt");
  
//   ofstream hellooo;
  getline(cin>>ws,hello);
  if (hellooo.fail())
  {
    cout<<"Unable to open file"<<endl;
    
  }
  hellooo.close();
//  hellooo.close(); 
}

void Class::outputFileHandling()
{
    ifstream helloo;
    helloo.open("newtext.txt");
    while (getline(cin,hello))
    {
        cout<<hello<<endl;
    }
    
}
int main()
{
    Class one("One\ntwo\nthree\nfour\nfive\n-1 ");
    one.inputFileHandling();
    one.outputFileHandling();
}
