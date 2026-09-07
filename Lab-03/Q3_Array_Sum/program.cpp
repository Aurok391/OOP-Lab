#include <iostream>
using namespace std;

class Array {
    int a[100];
    int n;

public:
    void input();
    int sum();
    void display();
};

void Array::input() {
    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];
}

int Array::sum() {
    int total = 0;

    for (int i = 0; i < n; i++)
        total += a[i];

    return total;
}

void Array::display() {
    cout << "Sum of elements = " << sum() << endl;
}

int main() {
    Array obj;

    obj.input();
    obj.display();

    return 0;
}
