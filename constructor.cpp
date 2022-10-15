#include<iostream>
using namespace std;

class constructorDemo{
    public:
    constructorDemo(){
        cout<<"this is from a constructor";
    }
};

// parametric constructor 


class Add{
    public:
    Add(int num1, int num2){
        cout<<(num1+num2)<<endl;
    }
    
};

int main(){
    // constructorDemo obj; 
    Add obj(5,78);
    return 0;
}