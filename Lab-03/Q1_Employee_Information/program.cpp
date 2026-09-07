#include <iostream>
#include <string>
using namespace std;

class Employee {
    string name, code, designation;
    int experience, age;

public:
    inline void input();
    inline void display();
};

inline void Employee::input() {
    cout << "Enter employee name: ";
    getline(cin, name);
    cout << "Enter employee code: ";
    getline(cin, code);
    cout << "Enter designation: ";
    getline(cin, designation);
    cout << "Enter years of experience: ";
    cin >> experience;
    cout << "Enter age: ";
    cin >> age;
}

inline void Employee::display() {
    cout << "\nEmployee Information\n";
    cout << "Name: " << name << endl;
    cout << "Code: " << code << endl;
    cout << "Designation: " << designation << endl;
    cout << "Years of Experience: " << experience << endl;
    cout << "Age: " << age << endl;
}

int main() {
    Employee e;
    e.input();
    e.display();
    return 0;
}
