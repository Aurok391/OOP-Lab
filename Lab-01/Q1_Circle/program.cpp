#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double r;
    const double PI = 3.14159;

    cout << "Enter radius: ";
    cin >> r;

    double area = PI * r * r;
    double circumference = 2 * PI * r;

    cout << fixed << setprecision(2);
    cout << "Area = " << area << endl;
    cout << "Circumference = " << circumference << endl;

    return 0;
}
