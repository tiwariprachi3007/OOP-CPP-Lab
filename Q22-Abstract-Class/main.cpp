#include <iostream>
using namespace std;

class CAL_AREA {
protected:
    float r, h;

public:
    virtual ~CAL_AREA() {}

    void getdata(float radius, float height = 0) {
        r = radius;
        h = height;
    }

    virtual void display_volume() = 0;
};

class Cone : public CAL_AREA {
public:
    void display_volume() override {
        cout << "Volume of Cone: " << (3.14 * r * r * h) / 3 << endl;
    }
};

class Hemisphere : public CAL_AREA {
public:
    void display_volume() override {
        cout << "Volume of Hemisphere: " << (2.0 * 3.14 * r * r * r) / 3 << endl;
    }
};

class Cylinder : public CAL_AREA {
public:
    void display_volume() override {
        cout << "Volume of Cylinder: " << 3.14 * r * r * h << endl;
    }
};

int main() {
    CAL_AREA* shape;

    Cone c;
    shape = &c;
    shape->getdata(3, 5);
    shape->display_volume();

    Hemisphere s;
    shape = &s;
    shape->getdata(3);
    shape->display_volume();

    Cylinder cy;
    shape = &cy;
    shape->getdata(3, 5);
    shape->display_volume();

    return 0;
}
