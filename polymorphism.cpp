#include<iostream>
using namespace std;

class A{
    public:
    void sayHello()
    {
        cout << "Hello Divyanshu Pathak" << endl;
    }

    int sayHello(string name, int n)
    {
        cout << "Hello Divyanshu Pathak" << n << endl;
        return n;
    }

    void sayHello(string name)
    {
        cout << "Hello" << name << endl;
    }
};

int main(){
    A obj;
    obj.sayHello("divyanshu", 25);
}