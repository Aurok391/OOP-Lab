#include <iostream>
using namespace std;

class Complex {
    int real, imag;

public:
    void input();
    void display();
    friend Complex add(Complex, Complex);
};

void Complex::input() {
    cout << "Enter real part: ";
    cin >> real;
    cout << "Enter imaginary part: ";
    cin >> imag;
}

void Complex::display() {
    cout << real;
    if (imag >= 0)
        cout << " + " << imag << "i";
    else
        cout << " - " << -imag << "i";
}

Complex add(Complex c1, Complex c2) {
    Complex c3;
    c3.real = c1.real + c2.real;
    c3.imag = c1.imag + c2.imag;
    return c3;
}

int main() {
    Complex c1, c2, c3;

    cout << "Enter first complex number:\n";
    c1.input();

    cout << "Enter second complex number:\n";
    c2.input();

    c3 = add(c1, c2);

    cout << "\nSum = ";
    c3.display();
    cout << endl;

    return 0;
}
