#include<iostream>
using namespace std;

class car{
    char color[10];
    public:
    int speed;

    public:
    void getdata(int distance, int fuel){
        cout<<"the car has covered "<<distance<<" km and has consumed "<<fuel<<"L of fuel"<<endl;
    }
    void mileage(float distance, float fuel);
    void carspeed(){
        cout<<"the car speed is: "<<speed<<endl;
    }
} audi;

void car ::mileage(float d, float f){
    float carmileage = d/f;
    cout<<"the car mileage is: "<<carmileage<<endl;
}

int main(){
    car swift;
    swift.getdata(130, 7);
    audi.mileage(180, 31);
    swift.speed = 50;
    swift.carspeed();
    return 0;
}