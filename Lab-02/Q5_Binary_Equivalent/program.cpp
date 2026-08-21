#include <iostream>
using namespace std;

int main() {
    int n, binary[32], i = 0;

    cout << "Enter a number: ";
    cin >> n;

    if (n == 0) {
        cout << "Binary equivalent = 0" << endl;
        return 0;
    }

    while (n > 0) {
        binary[i++] = n % 2;
        n /= 2;
    }

    cout << "Binary equivalent = ";
    for (int j = i - 1; j >= 0; j--)
        cout << binary[j];

    cout << endl;
    return 0;
}
