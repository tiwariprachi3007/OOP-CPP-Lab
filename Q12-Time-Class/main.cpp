#include <iostream>
using namespace std;

class Time
{
private:
    int hours, minutes, seconds;

public:
    Time()
    {
        hours = 0;
        minutes = 0;
        seconds = 0;
    }

    Time(int h, int m, int s)
    {
        hours = h;
        minutes = m;
        seconds = s;
    }

    void display()
    {
        cout << hours << ":" << minutes << ":" << seconds << endl;
    }

    Time add(Time t)
    {
        Time temp;

        temp.seconds = seconds + t.seconds;
        temp.minutes = minutes + t.minutes + temp.seconds / 60;
        temp.seconds = temp.seconds % 60;

        temp.hours = hours + t.hours + temp.minutes / 60;
        temp.minutes = temp.minutes % 60;

        return temp;
    }
};

int main()
{
    Time t1(10, 30, 40);
    Time t2(2, 40, 30);

    Time t3 = t1.add(t2);

    cout << "Time 1: ";
    t1.display();

    cout << "Time 2: ";
    t2.display();

    cout << "Added Time: ";
    t3.display();

    return 0;
}