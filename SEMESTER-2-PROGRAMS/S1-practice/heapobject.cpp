#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
class heapobject
{
private:
    int age;
    string name;
    int *p;
public:
    heapobject();
    ~heapobject();
    void setP();
    void getP();
};

heapobject::heapobject()
{
    name="";
    age=0;
    p=new int[5];
    for (int i = 0; i < 5; i++)
    {
        p[i]=0;
    }
    
    
}

heapobject::~heapobject()
{
    cout<<"Goodbye"<<endl;
    delete p;
    p=NULL;
}
void heapobject::setP()
{
    cout<<"Enter Your name"<<endl;
    cin>>name;
    cout<<"Enter your Age"<<endl;
    cin>>age;
    cout<<"Enter Marks fo 5 subjects"<<endl;
    for (int i = 0; i < 5; i++)
    {
        cout<<"Subject"<<" "<<i+1<<endl;
        cin>>p[i];
    }
    
    
}
void heapobject::getP()
{
    cout<<"Name : "<<name<<right<<setfill('.')<<setw(5)<<endl;
    cout<<"Age  :"<<age<<right<<setfill('.')<<setw(5)<<endl;
    for (int i = 0; i < 5; i++)
    {
        cout<<"Marks of Subject "<<i+1<<" = "<<p[i]<<right<<setfill('.')<<setw(5)<<endl;
    }
    
} 
int main()
{
    heapobject* p;
    p=new heapobject();
    int x;
    do
    {
        cout<<"Choose : \
        1:Add data \
        2:Show data\
        3:Exit";
        cin>>x;
        if(x==1)
        {
            p->setP();
        }
        else if(x==2)
        {
            p->getP();
        }
    } while (x!=3);
    
   
    
    
    delete p;
    p=NULL;
    
    return 0;
}
