#include<iostream>
using namespace std;

// when does the destructor get called?
// a destructor is automatically called when: 
// 1. the program finished execution 
// 2. when a scope (the { } parenthesis) containing local variable ends. 

class HelloWorld{
    public:
    // constructor
    HelloWorld(){
        cout<<"constructor is called"<<endl;
    }

    // destructor
    ~HelloWorld(){
        cout<<"destructor is called"<<endl;
    }

    // member function 
    void display(){
        cout<<"hello world from member function"<<endl;
    }
};

int main(){
    HelloWorld obj; //object created
    obj.display();
    return 0;
}