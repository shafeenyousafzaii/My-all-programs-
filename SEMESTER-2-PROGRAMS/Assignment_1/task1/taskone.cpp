#include<iostream>
#include<string>
#include"taskone.h"
using namespace std;
ZodiacType::ZodiacType(string x=" ", string y=" ")
{
      zodiac=x;
      Zodiac_description=y;
}
void ZodiacType::Personality()
{
  cout<<" , Your Personality Traits are : "<<endl;
  cout<<"Zodiac Sign : "<<zodiac<<endl;
  cout<<"Personality : "<<Zodiac_description<<endl;
}
void ZodiacType::GenerateZodiacData(int Day ,int month)
{
       switch (month)
{
case 1:
if (Day>=0 && Day<=19)
{
    zodiac="Capricon";
    Zodiac_description="Capricorns are practical, determined, diligent, attention-focused and good with money. They enjoy making things work harder, run better, grow bigger. They like to deliver over and above expectations. Capricorns are typically drawn to business, and to being their own boss.";

}
else if (Day>=20 && Day<=31)
{
    zodiac="Aquarius";
    Zodiac_description="Free-spirited and eccentric, you can often spot this air sign through their offbeat fashion sensibilities, unusual hobbies, and nonconformist attitude. If you're an Aquarius yourself, keep in mind that solar and lunar eclipses can have large-scale impact, so be sure to look out for these major astrological milestones.";

}
break;
case 2:
if (Day>=0 && Day<=19)
{
    zodiac="Aquarius";
    Zodiac_description="Capricorns are practical, determined, diligent, attention-focused and good with money. They enjoy making things work harder, run better, grow bigger. They like to deliver over and above expectations. Capricorns are typically drawn to business, and to being their own boss.";
}
else if (Day>19 && Day<32)
{
    zodiac="Pisces";
    Zodiac_description="Pisces are highly creative and imaginative, Walker reports, as well as compassionate and loving. Their emotional sensitivity factor is high, helping them to remain in tune with others but also leaving them vulnerable to criticism, worrying a lot about the effect that their actions might have on others.";
}
break;
case 3:
if (Day>=0 && Day<=20 )
{
    zodiac="Pisces";
    Zodiac_description="Pisces are highly creative and imaginative, Walker reports, as well as compassionate and loving. Their emotional sensitivity factor is high, helping them to remain in tune with others but also leaving them vulnerable to criticism, worrying a lot about the effect that their actions might have on others.";
// Pisces are highly creative and imaginative, Walker reports, as well as compassionate and loving. Their emotional sensitivity factor is high, helping them to remain in tune with others but also leaving them vulnerable to criticism, worrying a lot about the effect that their actions might have on others.
  
}
else if (Day>20 && Day<32)
{
    zodiac="Aries";
    Zodiac_description="Like their fellow fire signs, Leo and Sagittarius, Aries is a passionate, motivated, and confident leader who builds community with their cheerful disposition and relentless determination. Uncomplicated and direct in their approach, they often get frustrated by exhaustive details and unnecessary nuances";
// cout<<"Like their fellow fire signs, Leo and Sagittarius, Aries is a passionate, motivated, and confident leader who builds community with their cheerful disposition and relentless determination. Uncomplicated and direct in their approach, they often get frustrated by exhaustive details and unnecessary nuances"<<endl;
}
break;
case 4:
if (Day>=0 && Day<=20 )
{
    zodiac="Pisces";
Zodiac_description="Pisces are highly creative and imaginative, Walker reports, as well as compassionate and loving. Their emotional sensitivity factor is high, helping them to remain in tune with others but also leaving them vulnerable to criticism, worrying a lot about the effect that their actions might have on others.";
// cout<<"Personality Trait : "<<endl;

}

break;
case 5:
if (Day>0 && Day <21)
{
    zodiac="Taurus";
Zodiac_description="Typical sun in Taurus traits include being hard-headed, down-to-earth, tenacious, reliable, loyal, and sensual. All of these characteristics mirror themes covered by the Second House of Self-Worth and Income, which Taurus rules.";
// cout<<"Personality Trait : "<<endl;

}
else if (Day>20 && Day<=31)
{
    zodiac="Cancer";
Zodiac_description="Cancerians are primarily known for being emotional, nurturing, and highly intuitive, as well as being sensitive and sometimes insecure. Their elemental sign is water, which makes sense when you consider the emotional depths associated with this sign.";
// cout<<"Personality Trait : "<<endl;
}
break;

case 6:
if (Day>0 && Day<21)
{
    zodiac="Gemini";
Zodiac_description="Playful and intellectually curious, Gemini is constantly juggling a variety of passions, hobbies, careers, and friend groups. They are the social butterflies of the zodiac: These quick-witted twins can talk to anyone about anything. Find them buzzing between happy hours, dinner parties, and dance floors.";
// cout<<"Personality Trait  : "<<endl;
}
else if (Day>20 && Day<32)
{
    zodiac="Cancer";
Zodiac_description="Cancerians are primarily known for being emotional, nurturing, and highly intuitive, as well as being sensitive and sometimes insecure. Their elemental sign is water, which makes sense when you consider the emotional depths associated with this sign.";
// cout<<"Personality Trait : "<<endl;
}
break;
case 7:
if (Day>0 && Day<23)
{
    zodiac="Cancer";
Zodiac_description="Cancerians are primarily known for being emotional, nurturing, and highly intuitive, as well as being sensitive and sometimes insecure. Their elemental sign is water, which makes sense when you consider the emotional depths associated with this sign.";
// cout<<"Personality Trait : ."<<endl;
}
else if (Day>=23 && Day<32)
{
    zodiac="Leo";
Zodiac_description="Typical sun in Leo traits include being confident, comfortable being the center of attention, drama-adoring, ambitious, loyal, fiercely protective of their nearest and dearest, generous, luxury-loving, sunny, and big-hearted";
// cout<<"Personality Trait : "<<endl;
}
break;
case 8:
if (Day>0 && Day<23)
{
    zodiac="Leo";
Zodiac_description="Typical sun in Leo traits include being confident, comfortable being the center of attention, drama-adoring, ambitious, loyal, fiercely protective of their nearest and dearest, generous, luxury-loving, sunny, and big-hearted";
// cout<<"Personality Trait : Typical sun in Leo traits include being confident, comfortable being the center of attention, drama-adoring, ambitious, loyal, fiercely protective of their nearest and dearest, generous, luxury-loving, sunny, and big-hearted"<<endl;
}
else if (Day>=23 && Day<32)
{
zodiac="Virgo";
Zodiac_description="On the appearance, Virgos are humble, self-effacing, industrious, and practical, but under the surface, they are frequently natural, kind, and sympathetic, as befits their zodiac sign. Virgoans are methodical and quick thinkers, yet they have so much mental energy that they are frequently stressed and tense";
// cout<<"Personality Trait : "<<endl;
}
break;
case 9:
if (Day>0 && Day<23)
{
    zodiac="Virgo";
Zodiac_description="On the appearance, Virgos are humble, self-effacing, industrious, and practical, but under the surface, they are frequently natural, kind, and sympathetic, as befits their zodiac sign. Virgoans are methodical and quick thinkers, yet they have so much mental energy that they are frequently stressed and tense";
// cout<<"Personality Trait : On the appearance, Virgos are humble, self-effacing, industrious, and practical, but under the surface, they are frequently natural, kind, and sympathetic, as befits their zodiac sign. Virgoans are methodical and quick thinkers, yet they have so much mental energy that they are frequently stressed and tense"<<endl;
}
else if (Day>22 && Day<32)
{
    zodiac="Libra";
Zodiac_description="Librans are extroverted, cosy, and friendly people. Librans, like the Scales that symbolise the sign, are often concerned with attaining balance, harmony, peace, and justice in the world. With their vast stores of charm, intelligence, frankness, persuasion, and seamless connectivity, they are well-equipped to do so.";
// cout<<"Personality Trait : "<<endl;
}
break;
case 10:
if (Day>0 && Day<23)
{
    zodiac="Libra";
Zodiac_description="Librans are extroverted, cosy, and friendly people. Librans, like the Scales that symbolise the sign, are often concerned with attaining balance, harmony, peace, and justice in the world. With their vast stores of charm, intelligence, frankness, persuasion, and seamless connectivity, they are well-equipped to do so.";
// cout<<"Personality Trait : Librans are extroverted, cosy, and friendly people. Librans, like the Scales that symbolise the sign, are often concerned with attaining balance, harmony, peace, and justice in the world. With their vast stores of charm, intelligence, frankness, persuasion, and seamless connectivity, they are well-equipped to do so."<<endl;
}
else if (Day>=23 && Day <32)
{
    zodiac="Scorpio";
Zodiac_description="Scorpios are famously discreet and even secretive, with an air of mystery around them. Other personality traits include fearlessness, boldness (thanks to Mars), passion, creativity, and fierce loyalty. Learn more about what 2022 has in store for Scorpio in our annual astrology forecast";
// cout<<"Personality Trait : <<endl;
}
break;
case 11:
if (Day>0 && Day<23)
{
    zodiac="Scorpio";
Zodiac_description="Scorpios are famously discreet and even secretive, with an air of mystery around them. Other personality traits include fearlessness, boldness (thanks to Mars), passion, creativity, and fierce loyalty. Learn more about what 2022 has in store for Scorpio in our annual astrology forecast";
// cout<<"Personality Trait : Scorpios are famously discreet and even secretive, with an air of mystery around them. Other personality traits include fearlessness, boldness (thanks to Mars), passion, creativity, and fierce loyalty. Learn more about what 2022 has in store for Scorpio in our annual astrology forecast"<<endl;
}
else if (Day>=23 && Day<32)
{
    zodiac="Sagittarius";
Zodiac_description="Sagittarians are typically outspokenly optimistic extroverts who elicit respect and affection from everyone they come into contact with. Sagittarius natives are loyal, smart, assertive, and compassionate personality! They are one-of-a-kind, talented, and have impeccable discernment";
// cout<<"Personality Trait : "<<endl;
}
break;
case 12:
if (Day>0 && Day<22)
{
    zodiac="Sagittarius";
Zodiac_description="Sagittarians are typically outspokenly optimistic extroverts who elicit respect and affection from everyone they come into contact with. Sagittarius natives are loyal, smart, assertive, and compassionate personality! They are one-of-a-kind, talented, and have impeccable discernment";
// cout<<"Personality Trait : Sagittarians are typically outspokenly optimistic extroverts who elicit respect and affection from everyone they come into contact with. Sagittarius natives are loyal, smart, assertive, and compassionate personality! They are one-of-a-kind, talented, and have impeccable discernment"<<endl;
}
else if (Day>=22 && Day<32)
{
zodiac="Capricon";
Zodiac_description="Sagittarians are typically outspokenly optimistic extroverts who elicit respect and affection from everyone they come into contact with. Sagittarius natives are loyal, smart, assertive, and compassionate personality! They are one-of-a-kind, talented, and have impeccable discernment";
// cout<<"Personality Trait : Capricorns are practical, determined, diligent, attention-focused and good with money. They enjoy making things work harder, run better, grow bigger. They like to deliver over and above expectations. Capricorns are typically drawn to business, and to being their own boss."<<endl;
}
break;

default:
break;
}
}
DateOfBirthType::DateOfBirthType(string zodiac,string zodiac_desc,int day,int month,int year):Object1(zodiac,zodiac_desc)
{
   this->day=day;
   this->month=month;
   this->year=year;
}
void DateOfBirthType::SetDOB()
{
    cout<<"Enter Your Date of Birth :"<<endl;
    cout<<"Day : "<<endl;
    cin>>day;
    cout<<"Month : "<<endl;
    cin>>month;
    cout<<"Year : "<<endl;
    cin>>year;
}
void DateOfBirthType::setZodiac()
{
    Object1.GenerateZodiacData(day,month);
}
void DateOfBirthType::GetDOB()
{
    cout<<day<<"/"<<month<<"/"<<year<<endl;
}
void DateOfBirthType::getzodiac()
{
    Object1.Personality();
}
Person::Person(string z , string zd,int d,int m , int y,string name):date_of_birth(z,zd,d,m,y)
{
  this->name=name;
}
// void Person::SetName()
// {
//     cout<<"Enter Your Name : "<<endl;
//     cin>>name;
// }
void Person::DisplayZodiacInfo()
{
    
    cout<<endl;
    // cout<<"Name:"<<name<<endl;
    // cout<<"DOB : ";date_of_birth.GetDOB();
    // cout<<name<<" Your Personality Traits are : "<<endl;
    // cout<<"Zodiac Sign : "<<date_of_birth.
    cout<<name;
    date_of_birth.getzodiac();

}
void Person::SetInfo()
{
     cout<<"Enter Your Name : "<<endl;
     getline(cin,name);
     date_of_birth.SetDOB();
     date_of_birth.setZodiac();
}