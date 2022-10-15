#include<iostream>
using namespace std;

// multiple inheritance
//  C inherits A and B both 

class A{
    public:
    A(){
        cout<<"constructor of A"<<endl;
    }
};


class B{
    public:
    B(){
        cout<<"constructor of B"<<endl;
    }
};


class C: public A, public B{
    public:
    C(){
        cout<<"constructor of C"<<endl;
    }
};


int main(){
    C obj;
    return 0;
}