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
    int temp = number;
    int digits = 0;
    int sum = 0;

    while (temp != 0) {
        digits++;
        temp /= 10;
    }
    
    temp = number;

    while (temp != 0) {
        int digit = temp % 10;
        int power = 1;

        for (int i = 0; i < digits; i++)
            power *= digit;

        sum += power;
        temp /= 10;
    }

    return sum == number;
}

int main() {
    int n;

    cout << "Enter a number: ";
    cin >> n;

    Armstrong obj1(n);
    Armstrong obj2(obj1);  

    if (obj2.isArmstrong())
        cout << n << " is an Armstrong number." << endl;
    else
        cout << n << " is not an Armstrong number." << endl;

    return 0;
}

