#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int a[100], b[100];

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < n; i++)
        b[i] = a[n - 1 - i];

    cout << "Reverse array: ";
    for (int i = 0; i < n; i++)
        cout << b[i] << " ";

    cout << endl;
    return 0;
}
