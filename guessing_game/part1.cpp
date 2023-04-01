#include<iostream>
#include<string>
using namespace std;
class guessinggametype
{
private:
    string name;
    int age;

public:
    guessinggametype(/* args */);
    void setdata();
    void getdata();
    void guessnum(guessinggametype );
    ~guessinggametype();
};

guessinggametype::guessinggametype()
{
   name=" ";
   age=0;
}

guessinggametype::~guessinggametype()
{
    cout<<"\n ThankYou ! "<<endl;
}
void guessinggametype::setdata()
{
    string x;
    int y;
    cout<<"Enter Your Name : "<<endl;
    cin>>x;
    cout<<"Enter You Age : "<<endl;
    cin>>y;
    name=x;
    age=y;
}
void guessinggametype::getdata()
{
    cout<<"Name : "<<name<<endl;
    cout<<"Age  : "<<age<<endl;
}
 void guessinggametype::guessnum(guessinggametype z)
 {
    int x[4];
    int  y;
    for (int i = 0; i < 4; i++)
    {
        x[i]=rand()%1000;
    }
    cout<<"Guess the correct numbers :"<<endl;
    for(int i= 0 ; i < 4 ; i ++)
    {
        cout<<i+1<<" : "<<x[i];
    }
    cout<<endl;
    cin>>y;
    for (int i = 0; i < 4; i++)
    {
        if (y==x[i])
        {
            z.getdata();
            cout<<endl;
            cout<<"Congratulations you guessed the correct number"<<endl;
            break;
        }
        else
        {
            cout<<"Better Luck next time! "<<endl;
            break;

        }
    }
    
  
 }
int main()
{
    guessinggametype x;
    char z;
    int y;
    cout<<"Do you want to play a guessing game ? \t y for yes \t n for no "<<endl;
    cin>>z;
    if (z=='y')
    {
        do
        {
          cout<<"Choose : \n1: Enter details \n2:Print details \n3: Play \n4:Exit"<<endl;
          cin>>y;
          if(y==1)
          {
            x.setdata();
          }
          else if (y==2)
          {
            x.getdata();
          }
          else if(y==3)
          {
            x.guessnum(x);
          }
        } while (y!=4);
        
    }
    

}