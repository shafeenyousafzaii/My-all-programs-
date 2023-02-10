#include <iostream>
using namespace std;
struct Student
{
    string name;
    int marks[3];
};
void display(Student x[]);
Student enterdata();
float avg(Student x[]);
void changemarks(Student &x);
int main()
{
    Student s1[3];
    for (int i = 0; i < 3; i++)
    {    
    cout << "Enter your name : " << endl;
    getchar();
    getline(cin, s1[i].name);

    for (int j = 0; j < 3; j++)
    {

        cout << "Enter Marks of course " << j + 1 << endl;
        cin >> s1[i].marks[j];
    }

     }
    int input = 0, input2;
    do
    {
        cout << "\n\t\tMENU :\n"
             << endl;
        cout << "1: Display Student Name \n2: Calculate Average Marks \n3: Change Marks \n4: Exit" << endl;
        cout << "Choose options : " << endl;
        cin >> input;
        //   cout<<"Choose student no: "<<endl;
        if (input != 1 || input != 4)
        {

            cout << "\n Choose student no :" << endl;

            cin >> input2;
        }

        if (input >= 0 && input < 5)
        {
            if (input == 1)
            {
                display(s1);
            }
            else if (input == 2)
            {
                avg(&s1[input2]);
            }
            else if (input == 3)
            {
                changemarks(s1[input2]);
            }
        }
        else
            cout << "Enter a valid input" << endl;

    } while (input != 4);

    return 0;
}

float avg(Student x[])
{
    float avg;
    avg = (x->marks[0] + x->marks[1] + x->marks[2]) / 3;
    cout << "Avg : " << avg;
    // return avg;
}
void display(Student x[])
{

    for (int i = 0; i < 3; i++)
    {
        cout << "Name of student  " << i + 1 << "\t" << x[i].name << endl;
        for (int j = 0; j < 3; j++)
        {
            cout << "Marks of subject  " << j + 1 << "\t " << x[i].marks[j] << endl;
        }
    }
}
void changemarks(Student &x)
{
    int y;
    cout << "Choose Course No" << endl;
    cin >> y;
    if (y == 1)
    {
        cout << "Enter updated marks for course no " << y << endl;
        cin >> x.marks[y];
    }
    else if (y == 2)
    {
        cout << "Enter updated marks for course no " << y << endl;
        cin >> x.marks[y];
    }
    else if (y == 3)
    {
        cout << "Enter updated marks for course no " << y << endl;
        cin >> x.marks[y];
    }
}