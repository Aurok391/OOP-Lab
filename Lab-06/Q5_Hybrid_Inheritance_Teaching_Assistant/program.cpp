#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;
public:
    Person(string n) : name(n) {}
};

class Teacher : virtual public Person {
protected:
    string subject;
public:
    Teacher(string n, string s) : Person(n), subject(s) {}
};

class Student : virtual public Person {
protected:
    int studentID;
public:
    Student(string n, int id) : Person(n), studentID(id) {}
};

class TeachingAssistant : public Teacher, public Student {
public:
    TeachingAssistant(string n, string s, int id)
        : Person(n), Teacher(n, s), Student(n, id) {}

    void display() {
        cout << "Teaching Assistant Details\n";
        cout << "Name: " << name << endl;
        cout << "Subject: " << subject << endl;
        cout << "Student ID: " << studentID << endl;
    }
};

int main() {
    TeachingAssistant ta("Riya Sharma", "Computer Science", 2045);
    ta.display();
    return 0;
}
