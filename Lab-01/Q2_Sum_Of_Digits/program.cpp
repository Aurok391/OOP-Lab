#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a 3-digit number: ";
    cin >> n;

    int sum = (n / 100) + ((n / 10) % 10) + (n % 10);

    cout << "Sum of digits = " << sum << endl;

    return 0;
}
