#include<iostream>
#include<iomanip>
#include<string>
#include"Task1.h"
using namespace std;
int main()
{

    Favourite_Songs o1;
int x;
    do
    {
        
        cout<<"1. Add a song \n2. Delete a song \n3. Update a song \n4. Print all songs \n5. Create Backup of Songs \n6. Exit."<<endl;
        cin>>x;
        if (x==1)
        {
            o1.addSong();
        }
        else if (x==2)
        {
            o1.DeleteSong();
        }
        else if(x==3)
        {
            o1.updateSong();
        }        
        else if(x==4)
        {
            o1.printSong();
        }
        else if(x==5)
        {
            Favourite_Songs backup=o1;// 
            o1.printSong();
        }

    } while (x!=6);
    
    return 0;
}
