#include<iostream>
using namespace std;

class Student{
    //private data members
    private:
        string studentName;
        int studentRollno;
        int studentAge;

    //get method for student name access
    //private variable studentName
    public:
        string getStudentName()
        {
            return studentName;
        }    

    //set method for student name to set
    //the value in private variable studentName

    void setStudentName(string studentName)
    {
        this->studentName = studentName;
    }

    int getStudentRollno(){
        return studentRollno;
    }

    void setStudentRollno(int studentRollno)
    {
        this->studentRollno = studentRollno;
    }

    int getStudentAge()
    {
        return studentAge;
    }

    void setStudentAge(int studentAge)
    {
        this->studentAge = studentAge;
    }
};

int main(){
    Student obj;

    //setting the values of the variables
    obj.setStudentName("Divyanshu");
    obj.setStudentRollno(1662);
    obj.setStudentAge(22);

    //printing the values of the 
    cout << "Student Name is: " << obj.getStudentName() << endl;
    cout << "Student RollNo is: " << obj.getStudentRollno() << endl;
    cout << "Student Age is: " << obj.getStudentAge() << endl;
}