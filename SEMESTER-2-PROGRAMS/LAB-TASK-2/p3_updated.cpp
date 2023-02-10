#include<iostream>
using namespace std;
int main()
{
    // making it from scrap did not copy exam one
    char floor_rooms[4][5]=
    {
        {'*','*','*','*','*'},
        {'*','*','*','*','*'},
        {'*','*','*','*','*'},
        {'*','*','*','*','*'}
    };
    char room_class;  
    int choose_floor;
    int user_input;
    int room_number;
    int days;
    int total;
    do
    {
        cout<<"Choose from menu"<<endl;
        cout<<"1. Show Available/Booked Rooms "<<endl<<"2. Book a Room"<<endl<<"3. Exit the program"<<endl;
        cin>>user_input;

        if (user_input==1)
        {
            cout<<"* means room is available X means rooms is booked"<<endl;
            for (int i = 0; i < 4; i++)
            {
                for (int j = 0; j < 5; j++)
                {
                    cout<<floor_rooms[i][j];
                }
                cout<<endl;
            }
            
        }
        if (user_input==2)
        {
            cout<<"Enter the floor in which you want to book a room (1- 4)"<<endl;
            cout<<"First two floors have elite rooms that cost 10,000/day"<<endl;
            cout<<"The last two floors have economy classs rooms that cost 6000/day"<<endl;
            // cin>>user_input;
            cout<<"Enter the floor you want to book"<<endl;
            
            cin>>choose_floor;

            if (choose_floor == 1 || choose_floor==2)
            {
                cout<<"Enter room number"<<endl;

                cin>>room_number;
                room_number=room_number-1;
                cout<<"Also enter the number of days you will stay at our hotel"<<endl;
                
                cin>>days;

                total=10000*days;
               
                // for (int i = 0; i < 2; i++)
                // {
                //     for (int  j = 0; j < 5; j++)
                //     {
                        if (choose_floor==1)
                        {
                            floor_rooms[0][room_number]='X';
                        }
                        if (choose_floor==2)
                        {
                            floor_rooms[1][room_number]='X';
                        }
                cout<<"Your room No : "<<room_number<<" has been booked on floor No : "<<choose_floor<<" For "<<days<<" days"<<endl;
                cout<<total<<" is your bill"<<endl;
                        
                //     }
                    
                // }
                
            }
            else if (choose_floor==3 || choose_floor ==4)
            {
                cout<<"Enter room number"<<endl;

                cin>>room_number;

                cout<<"Also enter the number of days you will stay at our hotel"<<endl;
                
                cin>>days;

                total=10000*days;
                if (choose_floor==3)
                {
                    floor_rooms[2][room_number-1]='X';
                }
                if (choose_floor==4)
                {
                    floor_rooms[3][room_number-1]='X';
                }
                     cout<<"Your room No : "<<room_number<<" has been booked on floor No : "<<choose_floor<<" For "<<days<<" days"<<endl;
                     cout<<total<<" is your bill"<<endl;

            }
            
            

        }
        if (user_input==3)
        {
            cout<<"You entered 3"<<endl;
        }
        
        
        

    } while (user_input!=3);
    cout<<"\n You entered 3 , the program has ended";
    
    return 0;
}