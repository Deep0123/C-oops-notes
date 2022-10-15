#include<iostream>
using namespace std;

// multi level inheritance 

// C inherits B, B inherits A 

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


class C: public B{
    public:
    C(){
        cout<<"constructor of C"<<endl;
    }
};

int main(){
    C obj;
    
    return 0;
}