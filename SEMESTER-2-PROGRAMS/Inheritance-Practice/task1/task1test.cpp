#include<iostream>
#include<string>
#include<iomanip>
#include"task1.h"
using namespace std;
int main()
{
    personType patient;
    doctorType doctor;
    BillType Patient_BIll;
    patientType p1;
    int x;
    do
    {
        cout<<endl;
        cout<<"|----------------------------------------------------------------------------------------------|"<<endl;
        cout<<"1:Name and speciality of doctor\n2:Patient Bill\n3:Patient Details\n4:Print Details\n5:Print Bill\n6:Exit"<<endl;
        cout<<"|----------------------------------------------------------------------------------------------|"<<endl;
        cin>>x;
        if (x==1)
        {
            doctor.setName();
            doctor.setDOCSPEC();
        }
        // else if(x==2)
        // {
        //     patient.setname();
        // }
        else if(x==2)
        {
            int q,z,y;
            Patient_BIll.setPatientID();
            cout<<endl;
            // do
            // {
            cout<<"\n1:Pharmacy Charges\n2:Doctor's Fee\n3:Room Charges"<<endl;
            
            // if(q==1)
            // {
            Patient_BIll.setPHcharges();   
            // }
            // else if(q==2)
            // {
            // // cout<<"Enter Doctor's Fee"<<endl;
            // // cin>>y;
            // Patient_BIll.setPHcharges();   
            // }
            // else if(q==3)
            // {
            // // cout<<"Enter room charges"<<endl;
            // // cin>>y;
            // // Patient_BIll.setPHcharges(q); 
            // Patient_BIll.setPHcharges();  
            // }
           
            // } while (q!=4);
            
            
            cout<<"Do you want total Bill? <1>Yes <2>No"<<endl;
            cin>>z;
            if(z==1)
            {
                Patient_BIll.setTotalCharges();
            }
            else if(z==2)
            {
                cout<<"No total"<<endl;
            }
        }
        else if(x==3)
        {
            int x;
            cout<<"Enter Patient ID:"<<endl;
            cin>>x;
            p1.setP_ID(x);
            p1.setAGE();
            p1.setPATIENTNAME();
        }
        else if(x==4)
        {
            doctor.getName();
            doctor.getDOCSPEC();
            p1.getPATIENTNAME();
            p1.getAGE();
            p1.getP_ID();
        }
        else if(x==5)
        {
            Patient_BIll.getPatientID();
            int input;
            cout<<"\n1:Pharmacy Charges\n2:Doctor's Fee\n3:Room Charges\n4:total\n5:Reciept"<<endl;
            cin>>input;
            if (input==1)
            {
                Patient_BIll.getPHcharges(input);
            }
            else if(input==2)
            {
                Patient_BIll.getPHcharges(input);
            }
            else if(input==3)
            {
                Patient_BIll.getPHcharges(input);
            }
            else if(input==4)
            {
            Patient_BIll.getTotalCharges();
            }
            else if(input==5)
            {
                cout<<"|-------------------------------------------------------|"<<endl;
                cout<<"|                       Reciept :                       |"<<endl;
                cout<<"|                                                       |"<<endl;
                p1.getPATIENTNAME();
                Patient_BIll.getPHcharges(1);
                Patient_BIll.getPHcharges(2);
                Patient_BIll.getPHcharges(3);
                cout<<"|-------------------------------------------------------|"<<endl;
                cout<<"|-------------------------------------------------------|"<<endl;
                cout<<"|-------------------------------------------------------|"<<endl;
            }
        }
    } while (x!=6);
    

}