#include <iostream>
#include <iomanip>
#include <string>
#include <limits>
using namespace std;

class Student {
private:
    string name;
    int rollNo, subjectCount;
    string subjects[10];
    float marks[10], cgpa;
public:
    void input() {
        cout << "Enter student name: ";
        getline(cin, name);
        cout << "Enter roll number: ";
        cin >> rollNo;
        cout << "Enter number of subjects (1-10): ";
        cin >> subjectCount;
        if (subjectCount < 1 || subjectCount > 10) {
            cout << "Invalid number of subjects.\\n";
            subjectCount = 0;
            return;
        }
        cin.ignore(numeric_limits<streamsize>::max(), '\\n');
        for (int i = 0; i < subjectCount; ++i) {
            cout << "Enter subject " << i + 1 << " name: ";
            getline(cin, subjects[i]);
            cout << "Enter marks for " << subjects[i] << " (0-100): ";
            cin >> marks[i];
            cin.ignore(numeric_limits<streamsize>::max(), '\\n');
        }
        cout << "Enter CGPA (out of 10): ";
        cin >> cgpa;
    }
    void display() const {
        cout << "\\n--- Student Information ---\\n";
        cout << "Name: " << name << '\\n' << "Roll number: " << rollNo << '\\n';
        cout << "Subjects enrolled: " << subjectCount << '\\n';
        for (int i = 0; i < subjectCount; ++i)
            cout << subjects[i] << " - " << fixed << setprecision(2) << marks[i] << "/100\\n";
        cout << "CGPA: " << fixed << setprecision(2) << cgpa << "/10\\n";
    }
};

int main() {
    Student student;
    student.input();
    student.display();
    return 0;
}
