#include<iostream>
using namespace std;
int main()
{
    string x_string;
    char z;
    int y;
    cout<<"Enter a string"<<endl;
    cin>>x_string;
    cout<<endl;
    do
    {
        cout<<endl;
        cout<<"A) Count the number of vowels in the string "<<endl<<"B) Count both the vowels and consonants in the string"<<endl;
        cout<<"C) Display the most frequent character in the string."<<endl<<"D) Concatenate another string with the existing string."<<endl;
        cout<<"E) Exit the program. The program performs the operation ";
        cout<<endl;
        cout<<"Choose any option"<<endl;
        cin>>z;
        if (z=='A' || z=='a')
        {
            int count=0;
            for (int i = 0; i < x_string.length() ; i++)
            {
                if (x_string[i]==('a')||('A')||('e')||('E')||('i')||("I")||('o')||('O')||('u')||('U'))
                {
                    count++;
                }

            }
            cout<<endl;
            cout<<" "<<count<<"Are the number of vowels in this array"<<endl;
        }
        else if (z=='B' || z=='b')
        {
            cout<<""<<x_string.length()<<"is the length"<<endl;
        }
        else if (z=='C' || z=='c')
        {
            int  a=x_string.length();
            for (int i = 0; i < a; i++)
            {
                int count=1;
                for (int j = 0; j < a; j++)
                {
                
                    if (i==j)
                    {
                        continue; //cause we dont want to compare it witht the same alphabet
                    }
                    if (x_string[i] == x_string[j])
                    {
                        count++;
                        cout<<" "<<x_string[i]<<" Has "<<count<<" this frequency";
                    }
                    
                    
                }
                
            }
            
        }
        else if (z=='D' || z=='d')
        {
            string another_string="another string";
            string new_string;
            new_string=x_string+another_string;
            cout<<endl<<new_string;
        }
        
        
        
    } while (z!='E');
    cout<<"\nYou chose E exiting the program. Thank you! bye";
    return 0;
}
