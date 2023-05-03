#include"task2.h"
#include<string>
#include<iomanip>
#include<iostream>
using namespace std;
UAV::UAV()
{
    
}
void UAV::takeOff()
{
  cout<<"\nTaking Off"<<endl;
}
void UAV::land()
{
  cout<<"\nLanding"<<endl;
}
SurvellienceUAV::SurvellienceUAV(string name,double weight,double MaxAltitude,double Zoomlevel,double RecordingCapacity,string isnightVision)
{
    this->name=name;
    this->weight=weight;
    this->MaxAltitude=MaxAltitude;
    this->ZoomLevel=ZoomLevel;
    this->RecordingCapacity=RecordingCapacity;
    this->isNightVision=isnightVision;
}
// void SurvellienceUAV::setSurvellience()
// {
//     string x;
//     cout<<"|----------------------|"<<endl;
//     cout<<"| SurvellienceUAV info |"<<endl;
//     cout<<"|----------------------|"<<endl;
//     cout<<endl;
//     cout<<"Enter Your Name               :"<<endl;
//     // getline(cin>>ws,name);
//     cin>>name;
//     cout<<"Enter your weight             :"<<endl;
//     cin>>weight;
//     cout<<"Enter your altitude           :"<<endl;
//     cin>>MaxAltitude;
//     cout<<"Enter your ZoomLevel          :"<<endl;
//     cin>>ZoomLevel;
//     cout<<"Enter your Recording Capacity :"<<endl;
//     cin>>RecordingCapacity;
//     cout<<"Enter Yes or yes if you have nightvision otherwise ignore"<<endl;
//      cin>>x;
//     if (x=="Yes" || x=="yes")
//     {
//         isNightVision=true;
//     }
//     else
//     {
//         isNightVision=false;
//     }
// }
void SurvellienceUAV::getSurvellience()const
{
    cout<<"|------------------|"<<endl;
    cout<<"| SurvellienceUAV  |"<<endl;
    cout<<"|------------------|"<<endl;
    cout<<"My name is              :"<<name<<setprecision(3)<<endl;
    cout<<"My weight is            :"<<weight<<setprecision(3)<<endl;
    cout<<"My altitude is          :"<<MaxAltitude<<setprecision(3)<<endl;
    cout<<"My zoom level is        :"<<ZoomLevel<<setprecision(3)<<endl;
    cout<<"My RecordingCapacity is :"<<RecordingCapacity<<setprecision(3)<<endl;
    cout<<"Night Vision            :"<<isNightVision<<endl;
}
void SurvellienceUAV::captureImage()
{
   cout<<"\nCapturing Image"<<endl;
}
void SurvellienceUAV::recordVideo()
{
  cout<<"\nRecording Video"<<endl;
}
void SurvellienceUAV::takeOff()
{
  cout<<"\nSurvellience UAV Taking Off"<<endl;
}
void SurvellienceUAV::land()
{
  cout<<"\nSurvellience UAV Landing"<<endl;
}
CargoDeliveryUAV::CargoDeliveryUAV(string Name,double weight,double MaxALT,double CargoA)
{
    name=Name;
    this->weight=weight;
    MaxAltitude=MaxALT;
    CargoArea=CargoA;
}
// void CargoDeliveryUAV::setCargoDeliveryUAV()
// {
//    cout<<"|-----------------------|"<<endl;
//    cout<<"| CargoDeliveryUAV info |"<<endl;
//    cout<<"|-----------------------|"<<endl;
//    cout<<endl;
//    cout<<"Enter Your Name               :"<<endl;
//    cin>>name;
//    cout<<"Enter your weight             :"<<endl;
//    cin>>weight;
//    cout<<"Enter your altitude           :"<<endl;
//    cin>>MaxAltitude;
//    cout<<"Enter Your Cargo Area         :"<<endl;
//    cin>>CargoArea;
// }
void CargoDeliveryUAV::getCargoDeliveryUAV()const 
{
    cout<<"|-------------------|"<<endl;
    cout<<"| CargoDeliveryUAV  |"<<endl;
    cout<<"|-------------------|"<<endl;
    cout<<"My name is              :"<<name<<setprecision(3)<<endl;
    cout<<"My weight is            :"<<weight<<setprecision(3)<<endl;
    cout<<"My altitude is          :"<<MaxAltitude<<setprecision(3)<<endl;
    cout<<"My Cargo Area is        :"<<CargoArea<<setprecision(3)<<endl;
}
void CargoDeliveryUAV::deliverCargo()
{
    cout<<"\nDelivering Cargo"<<endl;
}
void CargoDeliveryUAV::takeOff()
{
  cout<<"\nCargoDelivery UAV Taking Off"<<endl;
}
void CargoDeliveryUAV::land()
{
  cout<<"\nCargoDelivery UAV Landing"<<endl;
}
MulitPurposeUAV::MulitPurposeUAV(string nme,double wegt,double MaxAlt,double solarPE)
{
    name=nme;
    weight=wegt;
    MaxAltitude=MaxAlt;
    solarPanelEffieciency=solarPE;
}
void MulitPurposeUAV::deliverCargoSurveilance()
{
    takeOff();
    SurvellienceUAV::recordVideo();  
    land();
    CargoDeliveryUAV::deliverCargo();
}
void MulitPurposeUAV::takeOff()
{
  cout<<"\nCargoDelivery UAV Taking Off"<<endl;
}
void MulitPurposeUAV::land()
{
  cout<<"\nCargoDelivery UAV Landing"<<endl;
}