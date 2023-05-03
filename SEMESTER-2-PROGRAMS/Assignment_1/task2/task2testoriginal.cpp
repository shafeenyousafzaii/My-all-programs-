#include<iostream>
#include"task2.h"
using namespace std;
int main()
{
    SurvellienceUAV s1("Survellience Drone",16.700,1000.000,20.0,3.00,"yes");
    CargoDeliveryUAV c1("Cargo Delivery Drone",14.5,3000.000,40.000);
    MulitPurposeUAV m1("Multi Purpose Drone",10.4,2000.000,20.000);
    c1.getCargoDeliveryUAV();
    c1.deliverCargo();
    s1.getSurvellience();
    s1.recordVideo();
    m1.getCargoDeliveryUAV();
    m1.deliverCargoSurveilance();

}