    #include <iostream>
    using namespace std;
    class Character
    {
    protected:
        string name;

    public:
       Character(string name="");
       virtual void attack();
       virtual void setname(string name);
       virtual void setStrength(int strength);
       virtual void setIntelligence(int intelligence);
       virtual void setAgility(int agility);
        ~Character();
    };
    class Warrior : public Character
    {
    private:
        int strength;

    public:
        Warrior(string name=" ",int strength=0);
        void setStrength(int strength);
        void setname(string name);
        void attack();
        ~Warrior();
    };
    class Mage : public Character
    {
    private:
        int intelligence;

    public:
        Mage(string name="",int intelligence=0);
        void setname(string name);
        void setIntelligence(int intelligence);
        void attack();
        ~Mage();
    };
    class Thief : public Character
    {
    private:
        int agility;

    public:
        Thief(string n="" , int agl=0);
        void attack();
      void setname(string name);
       void setAgility(int agility);
        ~Thief();
    };
