#include<iostream>
using namespace std;

// runtime polymorphism 

class A{
    public:
    void display(){
        cout<<"this is super/parent class function"<<endl;
    }
};
class B : public A{
    public:
    void display(){
        cout<<"this is Base/child class function";
    }
};

int main(){
    A obj;
    obj.display();

    B obj2;
    obj2.display();
    return 0;
}