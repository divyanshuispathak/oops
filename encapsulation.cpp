#include<iostream>
using namespace std;

class Student{
    private:
        string name;
        int age;
        int height;

    public:
        int getAge(int age)
        {
            return this->age = age;
        }    

};

int main(){

    Student first;

    cout << "Everything is working fine " << first.getAge(20) << endl;

}