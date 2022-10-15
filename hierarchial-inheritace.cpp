#include<iostream>
using namespace std;

// hierarchial inheritance
// Class B and C inherits class A

class A{
    public:
    A(){
        cout<<"constructor of A"<<endl;
    }
};


class B : public A{
    public:
    B(){
        cout<<"constructor of B"<<endl;
    }
};


class C: public A{
    public:
    C(){
        cout<<"constructor of C"<<endl;
    }
};


int main(){
    // C obj;
    B obj;
    return 0;
}