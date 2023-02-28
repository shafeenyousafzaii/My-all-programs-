#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
using namespace std;
class Dice
{
private:
    int value = 0;

public:
    int roll()
    {
        int x;
        srand(time(NULL));
        x = rand() % 6 + 1;
        return x;
    }
};

int main()
{
    Dice s;
    char input;
    char input2;

    do
    {
        cout << "Do you want to roll the dice" << endl;
        cin >> input;
        int x;

        x = s.roll();
        if (x < 6)
        {
            cout << x << endl;
            cout << "\nBetter Luck Next Time" << endl;
        }
        else
        {
            cout<< x << endl;
            cout << "\nChakkaa" << endl;
        }
        
    } while ( input!='N' && input!='n');
    cout << "You chose not to roll the dice" << endl;

    return 0;
}
