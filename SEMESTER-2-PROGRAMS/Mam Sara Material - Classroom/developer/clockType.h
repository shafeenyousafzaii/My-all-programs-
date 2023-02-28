class clockType
{

int hr;
int min;
int sec;

public:
clockType(int hours=0, int minutes=0, int seconds=0);
void setTime(int , int , int );
void getTime(int&, int&, int&) const;
void printTime() const;
bool equalTime(const clockType&) const;
~clockType();
void incrementHours();
void incrementMinutes();
void incrementSeconds();

};
