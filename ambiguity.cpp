#include<iostream>
using namespace std;

class A{
    public:
    void function()
    {
        cout << "I am A" << endl;
    }
};

class B{
    public:
    void function()
    {
        cout << "I am B" << endl;
    }
};


class C: public A, public B{


};

int main(){
    C obj;
    obj.A::function();
}