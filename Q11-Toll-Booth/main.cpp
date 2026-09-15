#include <iostream>
using namespace std;

class TollBooth {
    private:
    unsigned int totalCars;
    double totalCash;

    public:
    TollBooth(){
        totalCars=0;
        totalCash=0;
    }

    void payingCar(){
        totalCars++;
        totalCash=totalCash+0.50;
    }

    void nonPayingCar(){
        totalCars++;
    }
    void display(){
        cout<<"Total cars:"<<totalCars<<endl;
        cout<<"Total Cash:"<<totalCash<<endl;
    }
};
int main(){
    TollBooth t;
    t.payingCar();
    t.payingCar();
    t.nonPayingCar();
    t.display();
    return 0;
}
