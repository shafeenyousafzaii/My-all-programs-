#include<iostream>
using namespace std;
class UAV
{
private:
    
public:
    UAV();
     void takeOff();
     void land();    
    // ~UAV();
};

class SurvellienceUAV :  public UAV
{
private:
    string name;
    double weight;
    double MaxAltitude;
    double ZoomLevel;
    double RecordingCapacity;
    string isNightVision;


public:
    SurvellienceUAV(string namee=" ",double weightt=0,double MaxAltitudee=0,double Zoomlevell=0,double RecordingCapacityy=0,string isnightVisionn="");
    void captureImage();
    // void setSurvellience();
    void getSurvellience()const;
    void recordVideo();
    void takeOff();
     void land();    
    // ~SurvellienceUAV();
};
class CargoDeliveryUAV :  public UAV
{
private:
    string name;
    double weight ;
    double MaxAltitude;
    double CargoArea;
public:
    CargoDeliveryUAV(string name="",double weight=0,double MaxALT=0,double CargoA=0);
    // void setCargoDeliveryUAV();
    void getCargoDeliveryUAV()const;
    void deliverCargo();
     void land();
     void takeOff()  ;
    // ~CargoDeliveryUAV();
};
class MulitPurposeUAV :  public SurvellienceUAV , public CargoDeliveryUAV
{
private:
    string name;
    double weight;
    double MaxAltitude;
    double solarPanelEffieciency;
public: 
    // MulitPurposeUAV(string NS="",double wS=0,double MAXALTS=0,double Szoomlevel=0,double RecordingS=0,string nightvisionS=false,string Cname="",double Cweight=0,double CMAX=0,double CCargo=0,string nme="",double wegt=0,double MaxAlt=0,double solarPE=0);
    // MulitPurposeUAV(string Name="",double weight=0,double MaxALT=0,double Zoomlevel=0,double RecordingCapacity=0,string isnightVision=false,double CargoA=0);
    MulitPurposeUAV(string nme="",double wegt=0,double MaxAlt=0,double solarPE=0);
    void deliverCargoSurveilance();
    void land();  
    void takeOff();
    // ~MulitPurposeUAV();
};



