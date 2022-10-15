#include<iostream>
using namespace std;

// polymorphism part 1 

// Polymorphism is a feature of OOPs that allows the object to behave diffrently in different conditions. 
// 1. Compile time polymorphism - this is also known as static (or early) binding
// 2. Runtime polymorphism - this is also known as dynamic (or late) binding

// compile time polymorphism

class Add{
    public:
    int sum(int num1, int num2){
        return num1+num2;
    }
    int sum(int num1, int num2, int num3){
        return num1+num2+num3;
    }
}; 

int main(){
    Add obj;
    cout<<"output: "<<obj.sum(10,20)<<endl;
    cout<<"output: "<<obj.sum(10,20,30)<<endl;
    return 0;
}