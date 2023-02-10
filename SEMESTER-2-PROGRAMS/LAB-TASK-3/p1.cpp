#include<iostream>
using namespace std;

struct MovieData
{
    string Title,Director;
    int yearReleased;


};
MovieData CreateMovieData();
void display_movie_data(MovieData x);
int main()
{
    MovieData s1;
    MovieData s2;
    s1=CreateMovieData();
    s2=CreateMovieData();
    display_movie_data(s1);
    display_movie_data(s2);
    return 0;
}
MovieData CreateMovieData()
{
   MovieData x;
   cin.ignore();
   cout<<"\nEnter the Title of the Movie"<<endl;
   
   getline(cin,x.Title);

   cout<<"Enter the director name : "<<endl;

   getline(cin,x.Director);
    cin.ignore();
   cout<<"Enter year : "<<endl;
   
   cin>>x.yearReleased;
   return x;

}
void display_movie_data(MovieData x)
{  MovieData s1=x;
    cout<<"Move Name : "<<x.Title<<endl;
    cout<<"Director Name :"<<x.Director<<endl;
    cout<<"Year released : "<<x.yearReleased<<endl;
}