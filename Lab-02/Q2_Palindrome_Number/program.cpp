#include <iostream>
using namespace std;

int main() {
    int n, original, reverse = 0;

    cout << "Enter a number: ";
    cin >> n;

    original = n;

    while (n != 0) {
        reverse = reverse * 10 + n % 10;
        n /= 10;
    }

    if (reverse == original)
        cout << original << " is a palindrome number." << endl;
    else
        cout << original << " is not a palindrome number." << endl;

    return 0;
}
