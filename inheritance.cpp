#include<iostream>
using namespace std;

// single inheritance 

class Teacher{
    public:
    Teacher(){
        cout<<"hey i'm a teacher"<<endl;
    }
    string collegeName = "YouTube College";
};

class MathTeacher: public Teacher{
    public:
    MathTeacher(){
        cout<<"I'm a math teacher"<<endl;
    }
};

int main(){
    MathTeacher obj;
    cout<<"college name is: "<<obj.collegeName<<endl;
    return 0;
}