#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    string name, designation;
    double basicPay, ta, da, hra, grossPay;

    cout << "Enter employee name: ";
    getline(cin, name);

    cout << "Enter designation: ";
    getline(cin, designation);

    cout << "Enter basic pay: ";
    cin >> basicPay;

    ta = 0.10 * basicPay;
    da = 0.15 * basicPay;
    hra = 0.20 * basicPay;
    grossPay = basicPay + ta + da + hra;

    cout << fixed << setprecision(2);
    cout << "\nEmployee Salary Details\n";
    cout << "Name: " << name << endl;
    cout << "Designation: " << designation << endl;
    cout << "Basic Pay: " << basicPay << endl;
    cout << "TA (10%): " << ta << endl;
    cout << "DA (15%): " << da << endl;
    cout << "HRA (20%): " << hra << endl;
    cout << "Gross Pay: " << grossPay << endl;

    return 0;
}
