#include<iostream>
#include<string>
#include<iomanip>
#include<fstream>
using namespace std;
int main()
{
    int input;
    fstream journal;
    journal.open("Journal.txt",ios::app);
    
    do
    {
        
      cout<<"1: Add an entry to the Journal "<<endl;
      cout<<"2: Display the journal "<< endl;
      cout<<"3: Exit."<<endl;
      string line;
      cin>>input;
      if (input==1)
      {
        cout<<"Write in your diary"<<endl;
        while(true)
        {
        
        getline(cin,line);
        if(line!="-1")
        {
            journal<<line<<endl;

        }
        else
        {
            break;
        }
        }
        journal.close();
      }
      else if(input==2)
      {

        journal.open("Journal.txt",ios::in);
        while(getline(journal,line))
        {
            cout<<line<<endl;
        }
        
         journal.close();
      }
      
    } while (input!=3);
    
    

}