#include<iostream>
#include <cstring>
using namespace std;

class Hero{

    //properties
    
    private: 
    int health;

    public: 
    char level;
    char *name;
    static int timeToComplete;

    //default constructor
    Hero()
    {
        cout << "Default Contructor called " << endl;
        name = new char[100];
    }

    //parameterised constructor
    Hero(int health)
    {
        this->health = health;
    }

    Hero(int health, char level)
    {
        // cout << "this->" << this << endl;
        this->health = health;
        this->level = level;
    }


    //print
    void print()
    {
        cout << this->name << endl; 
        cout << this->health << endl;
        cout << this->level << endl;
        
    }

    //getter|setter
    int getHealth()
    {
        return this->health;
    }

    int getLevel()
    {
        return this->level;
    }

    void setHealth(int h)
    {
        this->health = h;
    }

    void setLevel(char ch)
    {
        this->level = ch;
    }

    void setName(char name[])
    {
        strcpy(this->name, name);
    }

    ~Hero()
    {
        cout << "Destructor bhai called" << endl;
    }

};

int Hero::timeToComplete = 5;

int main(){


    cout << Hero::timeToComplete << endl;




    // //static way
    // Hero a; 

    // //Dynamic way
    // Hero *b = new Hero();
    // //manually destructor call
    // delete b;






    // Hero hero1;
    // hero1.setHealth(45);
    // hero1.setLevel('F');
    // char name[10] = "Divyanshu";
    // hero1.setName(name);

    // hero1.print();

    // //use default copy constructor
    // Hero hero2(hero1);
    // hero2.print();

    // hero1.name[0] = 'Y';
    // hero1.print();

    // hero2.print();





    // Hero divyanshu;
    // divyanshu.setHealth(76);
    // cout << "Divyanshu's health is :" << divyanshu.getHealth() << endl;   
    // // divyanshu.setLevel(2);
    // cout << "Divyanshu's health is :" << divyanshu.level << endl;

    // Hero suresh(28, 'A');
    // suresh.print();

    // Hero R(suresh);
    // R.print();









    // Hero ramesh(10);
    // cout << "Address of divyanshu " << &ramesh << endl;
    // ramesh.getHealth();

    
    // //static allocation
    // Hero divyanshu;
    // divyanshu.setHealth(450);
    // divyanshu.setLevel('M');

    // //dynamic allocation
    // Hero *b = new Hero;
    // (*b).setHealth(20);
    // b->setLevel('L');
    // cout << "Level is :" << (*b).level << endl;
    // //another way of writing above cout
    // cout << "Level is :" << b->level << endl;
    // cout << "Health is :" << (*b).getHealth() << endl;



    // // divyanshu.setHealth(70);
    // // divyanshu.level = 'D';

    // cout << "Health is :" << divyanshu.getHealth() << endl;
    // cout << "Level is :" << divyanshu.level << endl;
    
}