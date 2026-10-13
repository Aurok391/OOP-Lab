#include <iostream>
#include <string>
using namespace std;

class Student {
protected:
    string name;
    int marks;
public:
    Student(string n, int m) : name(n), marks(m) {}
};

class Performance : public Student {
protected:
    double percentage;
public:
    Performance(string n, int m) : Student(n, m), percentage(m) {}
};

class Graduation : public Performance {
public:
    Graduation(string n, int m) : Performance(n, m) {}
    void displayHonors() {
        cout << "Student: " << name << endl;
        cout << "Performance: " << percentage << "%" << endl;
        if (percentage >= 90)
            cout << "Graduation honors: First Class with Distinction" << endl;
        else if (percentage >= 75)
            cout << "Graduation honors: First Class" << endl;
        else if (percentage >= 60)
            cout << "Graduation honors: Second Class" << endl;
        else
            cout << "Graduation honors: Pass" << endl;
    }
};

int main() {
    Graduation student("Ananya", 92);
    student.displayHonors();
    return 0;
}
