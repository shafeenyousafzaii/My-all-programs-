#include<iostream>
#include<string>
#include"practice.h"
using namespace std;
practice::practice()
{
    length=0;
    widht=0;
}
practice::practice(int x, int y)
{
    length=x;
    widht=y;
}
void practice::setdata(int x,int y)
{
    length=x;
    widht=y;
}
void practice::getdata()
{
    cout<<"Length is "<<length<<" and width is "<<widht<<endl;
    cout<<"Practice"<<endl;
}
practice::~practice()
{
    cout<<"Thanks buddy!"<<endl;
}
poly_rect::poly_rect()
{
    choraye=0;
}
poly_rect::poly_rect(int x,int y ,int z ):practice(x,y)
{
    choraye=z;
}
void poly_rect::setdata(int z)
{
    choraye=z;

}
void poly_rect::getdata()
{
    practice::getdata();
    cout<<"Choraye is : "<<choraye<<endl;
    cout<<"poly"<<endl;
}
morphism_volume::morphism_volume()
{
    height=0;
    volume=0;
}
morphism_volume::morphism_volume(int x,int y, int z ,int  e):practice(x,y)
{
   height=z;
   volume=e;
}
void morphism_volume::setdata(int x, int y)
{
    height=x;
    volume=y;
}
void morphism_volume::setvolume(int x)
{
    volume = x;
    
}
void morphism_volume::getdata()
{
    cout<<"Volume : "<<volume<<" Height : "<<height<<endl;
    cout<<"morphism"<<endl;
}
morphism_volume::~morphism_volume()
{
     cout<<"morphism"<<endl;
}
poly_rect::~poly_rect()
{
  cout<<"poly"<<endl;
}
