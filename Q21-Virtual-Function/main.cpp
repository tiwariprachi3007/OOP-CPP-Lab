#include <iostream>
using namespace std;

class Shape {
protected:
    double x, y;

public:
    virtual ~Shape() {}

    void get_data() {
        cout << "Enter two values: ";
        cin >> x >> y;
    }

    virtual void display_area() {
        cout << "Area of shape" << endl;
    }
};

class Triangle : public Shape {
public:
    void display_area() override {
        cout << "Area of Triangle: " << 0.5 * x * y << endl;
    }
};

class Rectangle : public Shape {
public:
    void display_area() override {
        cout << "Area of Rectangle: " << x * y << endl;
    }
};

int main() {
    Shape* shapePtr;

    Triangle t;
    shapePtr = &t;
    cout << "Triangle:" << endl;
    shapePtr->get_data();
    shapePtr->display_area();

    Rectangle r;
    shapePtr = &r;
    cout << "\nRectangle:" << endl;
    shapePtr->get_data();
    shapePtr->display_area();

    return 0;
}
