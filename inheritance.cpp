#include<iostream>
using namespace std;

class Human{

    public:
    int height;
    public:
    int weight;

    private:
    int age;

    public:
    int getAge()
    {
        return this->age;
    }

    void setAge(int w)
    {
        this->weight = w;
    }
};

class Male:public Human{
        
        public:
        string color;

        void sleep()
        {
            cout << "male sleeping" << endl;
        }

        int getHeight()
        {
            return this->height;
        }
    };

int main(){

    Male obj;
    
   
    // cout << obj.age << endl;
    // cout << obj.weight << endl;
    cout << obj.getHeight() << endl;

}