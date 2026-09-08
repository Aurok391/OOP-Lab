#include <iostream>
using namespace std;

class Armstrong {
    int number;

public:
    Armstrong(int n);
    Armstrong(const Armstrong &obj);
    bool isArmstrong();
};

Armstrong::Armstrong(int n) {
    number = n;
}

Armstrong::Armstrong(const Armstrong &obj) {
    number = obj.number;
}

bool Armstrong::isArmstrong() {
    int n = number;
    int sum = 0;

    while (n != 0) {
        int digit = n % 10;
        sum += digit * digit * digit;
        n /= 10;
    }

    return sum == number;
}

int main() {
    int n;

    cout << "Enter a number: ";
    cin >> n;

    Armstrong obj1(n);
    Armstrong obj2(obj1);  // Copy constructor

    if (obj2.isArmstrong())
        cout << n << " is an Armstrong number." << endl;
    else
        cout << n << " is not an Armstrong number." << endl;

    return 0;
}
