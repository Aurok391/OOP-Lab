#include <iostream>
using namespace std;

class Demo {
    int value;

public:
    Demo();
    Demo(int v);
    Demo(const Demo &obj);
    void display();
};

Demo::Demo() {
    value = 0;
    cout << "Default constructor called." << endl;
}

Demo::Demo(int v) {
    value = v;
    cout << "Parameterized constructor called." << endl;
}

Demo::Demo(const Demo &obj) {
    value = obj.value;
    cout << "Copy constructor called." << endl;
}

void Demo::display() {
    cout << "Value = " << value << endl;
}

int main() {
    Demo obj1;
    obj1.display();

    Demo obj2(100);
    obj2.display();

    Demo obj3(obj2);
    obj3.display();

    return 0;
}
