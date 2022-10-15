#include<iostream>
using namespace std;

// virtual functions 

class base{
    public:
    virtual void print(){
        cout<<"I'm from base class"<<endl;
    }
    void show(){
        cout<<"I'm from base class"<<endl;
    }
};
class derived : public base{
    public:
    void print(){
        cout<<"I'm from derived class"<<endl;
    }
    void show(){
        cout<<"I'm from derived class"<<endl;
    }
};

int main(){
    base* bptr;
    derived d;
    bptr = &d;

    bptr->print();
    bptr->show();

    return 0;
}