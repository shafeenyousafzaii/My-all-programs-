#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
class Card
{
public:
    Card();
    Card(int,int);
    string toString();
    ~Card();
private:
    int face;
    int suit;
    static string face[];

};
class DeckOfCard
{    
public:
    DeckOfCard();
    ~DeckOfCard();
    void shuffle();
    Card dealCard();
    bool moreCards();
private:
    string deck[52];
    int currentCard;
    
};
