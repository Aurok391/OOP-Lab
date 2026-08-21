#include <iostream>
#include <string>
using namespace std;

int main() {
    string name, code, designation;
    int experience, age;

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

    cout << "\nEmployee Information\n";
    cout << "Name: " << name << endl;
    cout << "Code: " << code << endl;
    cout << "Designation: " << designation << endl;
    cout << "Years of Experience: " << experience << endl;
    cout << "Age: " << age << endl;

    return 0;
}
