#include <iostream>
using namespace std;

class Number {
public:
    int reverseNumber(int n);
};

int Number::reverseNumber(int n) {
    int reverse = 0;

    while (n != 0) {
        reverse = reverse * 10 + n % 10;
        n /= 10;
    }

    return reverse;
}

int main() {
    int n, result;
    Number obj;

    cout << "Enter a number: ";
    cin >> n;

    result = obj.reverseNumber(n);

    cout << "Reverse = " << result << endl;

    return 0;
}
