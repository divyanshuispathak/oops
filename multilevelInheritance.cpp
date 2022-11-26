#include<iostream>
using namespace std; 

class Animal
{
    public:
    int age;
    int weight;

    public:
    void speak()
    {
        cout << "Speaking" << endl;
    }
};

class Dog: public Animal{

};

class germanShephard: public Dog{

};


int main(){

    Dog obj;
    obj.speak();
}