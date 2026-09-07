#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class Employee {
    string name, designation;
    double basicPay;

    class Salary {
        double basicPay;

    public:
        Salary(double bp);
        double getTA();
        double getDA();
        double getHRA();
        double getGrossPay();
    };

public:
    void input();
    void display();
};

Employee::Salary::Salary(double bp) {
    basicPay = bp;
}

double Employee::Salary::getTA() {
    return 0.10 * basicPay;
}

double Employee::Salary::getDA() {
    return 0.15 * basicPay;
}

double Employee::Salary::getHRA() {
    return 0.20 * basicPay;
}

double Employee::Salary::getGrossPay() {
    return basicPay + getTA() + getDA() + getHRA();
}

void Employee::input() {
    cout << "Enter employee name: ";
    getline(cin, name);
    cout << "Enter designation: ";
    getline(cin, designation);
    cout << "Enter basic pay: ";
    cin >> basicPay;
}

void Employee::display() {
    Salary salary(basicPay);

    cout << fixed << setprecision(2);
    cout << "\nEmployee Salary Details\n";
    cout << "Name: " << name << endl;
    cout << "Designation: " << designation << endl;
    cout << "Basic Pay: " << basicPay << endl;
    cout << "TA (10%): " << salary.getTA() << endl;
    cout << "DA (15%): " << salary.getDA() << endl;
    cout << "HRA (20%): " << salary.getHRA() << endl;
    cout << "Gross Pay: " << salary.getGrossPay() << endl;
}

int main() {
    Employee e;
    e.input();
    e.display();

    return 0;
}
