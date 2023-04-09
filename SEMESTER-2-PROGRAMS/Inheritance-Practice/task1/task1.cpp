    #include<iostream>
    #include<iomanip>
    #include<string>
    #include"task1.h"
    using namespace std;
        // personType::personType(string x,string y)
        // {
        //     firstname=x;
        //     lastname=y;
        //     namee=firstname+lastname;
        // }
    // personType::personType(string firstname=" " , string lastname=" ")
    // {
    //     this->firstname=firstname;
    //     this->lastname=lastname;
    // }
    personType::personType()
    {
        firstname="";
        lastname="";
        namee="";
    }
    void personType::setname()
    {
        string fName,lName;
        cout<<"Enter your First name followed by Last name"<<endl;
        cin>>fName;
        cout<<endl;
        cin>>lName;
        firstname=fName;
        lastname=lName;
        namee=firstname+lastname;   
    }
    void personType::getfirstname()const
    {
        cout<<"First Name: "<<endl;
        cout<<firstname<<endl;
    }
    void personType::getlastname()const
    {
        cout<<"Last Name: "<<endl;
        cout<<lastname<<endl;
    }
    void personType::getname()const
    {
        cout<<"Name : "<<endl;
        cout<<namee<<endl;
    }   
    string personType::name()const
    {
        return namee;
    }
    doctorType::doctorType(string DOC_SPECIALITY = " ")
    {
        this->DOC_SPECIALITY=DOC_SPECIALITY;
    }
    doctorType::doctorType()
    {
        string spec="";
        DOC_SPECIALITY=spec;
    }
    void doctorType::setDOCSPEC()
    {
        string spec;
        cout<<"Enter Your Specializatoin "<<endl;
        cin>>spec;
        DOC_SPECIALITY=spec;
    }
    void doctorType::setName()
    {
        personType::setname();
    }
    void doctorType::getName()const
    {
        cout<<"Doctor ";
        personType::getname();
    }
    void doctorType::getDOCSPEC()const
    {
        cout<<"Doctor Specializaton : "<<DOC_SPECIALITY<<endl;
    }
    BillType::BillType()
    {
        pharmacy=0;
        doctorfee=0;
        roomcharges=0;
    }
    void BillType::setPatientID()
    {
        int ID;
        cout<<"Enter your Patient ID :"<<endl;
        cin>>ID;
        PatientID=ID;
    }
    void BillType::getPatientID()const
    {
        cout<<"The Patient ID is : "<<PatientID<<endl;
    }
    void BillType::setPHcharges()
    {
        cout<<"Enter your pharmacy charges"<<endl;
        cin>>pharmacy;
        cout<<"Enter your doctor's fee"<<endl;
        cin>>doctorfee;
        cout<<"Enter your room charges"<<endl;
        cin>>roomcharges;
    }
    void BillType::getPHcharges(int input)const
    {
        cout<<endl;
        if (input==1)
        {
            cout<<"Pharmacy Charges : "<<pharmacy<<endl;
        }
        else if(input==2)
        {
            cout<<"Doctor's Fee : "<<doctorfee<<endl;
        }
        else if (input==3)
        {
            cout<<"Room Charges : "<<roomcharges<<endl;
        }
        
        
    }
    void BillType::setTotalCharges()
    {
        // for (int i = 0; i < 3; i++)
        // {
            total=pharmacy+doctorfee+roomcharges;
            cout<<"Your total Bill is : "<<total<<endl;
        // }
        
    }
    void BillType::getTotalCharges()const
    {
        cout<<"Total Bill is : "<<total<<endl;
    }
    patientType::patientType()
    {
        P_ID=0;
        age=0;
        
    }
    patientType::patientType(int p_id = 0  , int  age =0 , int day=0 , int month = 0 , int year=0)
    {
        P_ID=p_id;
        this->age=age;
        patient.setDate(month,day,year);
    }
    void patientType::setP_ID(int x)
    {
        
        P_ID=x;
    }
    void patientType::getP_ID()const
    {
        cout<<"Patient ID is : "<<P_ID<<endl;
    }
    void patientType::setAGE()
    {
        int age;
        cout<<"Enter your age : "<<endl;
        cin>>age;
        this->age=age;
    }
    void patientType::getAGE()const
    {
        cout<<"Your Age is : "<<age<<endl;
    }
    void patientType::setPATIENTNAME()
    {
        personType::setname();
    }
    void patientType::getPATIENTNAME()const
    {
        cout<<"Patient ";
        personType::getname();
    }
    dateType::dateType()
    {
    dMonth=1;
    dDay=1;
    dYear=1;
    }
    void dateType::setDate(int month , int day , int year)
    {
        dMonth=month;
        dDay=day;
        dYear=year;
    }
    int dateType::getDay()const
    {

        return dDay;
    }
    int dateType::getMonth()const
    {
        return dMonth;
    }
    int dateType::getYear()const
    {
        return dYear;
    }
    void dateType::printDate() const
    {
        cout<<endl;
        cout<<dMonth<<":"<<dDay<<":"<<dYear<<endl;
    }
    void dateType::setAdmitDate(int x)
    {
    x=patientAdmitDate;
    }
    void dateType::setDischargeDate(int y)
    {
    y=patientDischargeDate;
    }
    void dateType::getAdmitDate()const
    {
    cout<<"Admit Date : "<<patientAdmitDate<<endl;
    }
    void dateType::getDischargeDate()const
    {
        cout<<"Discharge Date : "<<patientDischargeDate<<endl;
    }
