#include <iostream>
using namespace std;

class Time {
    int hours, minutes, seconds;

public:
    void input();
    void display();
    friend Time add(Time, Time);
};

void Time::input() {
    cout << "Enter hours: ";
    cin >> hours;
    cout << "Enter minutes: ";
    cin >> minutes;
    cout << "Enter seconds: ";
    cin >> seconds;
}

void Time::display() {
    cout << hours << " hours " << minutes << " minutes "
         << seconds << " seconds";
}

Time add(Time t1, Time t2) {
    Time t3;

    t3.seconds = t1.seconds + t2.seconds;
    t3.minutes = t1.minutes + t2.minutes + t3.seconds / 60;
    t3.seconds %= 60;

    t3.hours = t1.hours + t2.hours + t3.minutes / 60;
    t3.minutes %= 60;

    return t3;
}

int main() {
    Time t1, t2, t3;

    cout << "Enter first time:\n";
    t1.input();

    cout << "Enter second time:\n";
    t2.input();

    t3 = add(t1, t2);

    cout << "\nTotal time = ";
    t3.display();
    cout << endl;

    return 0;
}
