#include<iostream>
using namespace std;

class Area{
    public:

    //square
    void calculateArea(int side){
        cout<<"Area of square"<<side*side<<endl;
    }

    //rectangle
    void calculateArea(int length,int breadth){
        cout<<"Area of rectangle:"<<length*breadth<<endl;
    }

    //triangle
    void calculateArea(float base,float height){
        cout<<"Area of rectangle:"<<0.5*base*height<<endl;
    }

};

int main(){
    Area obj;

    obj.calculateArea(5);
    obj.calculateArea(5,3);
    obj.calculateArea(5.0f,4.0f);
    return 0;
}