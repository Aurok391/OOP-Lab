#include <iostream>
using namespace std;

class Array {
    int a[100], n;

public:
    Array();
    void display();
    friend int sum(Array *);
};

Array::Array() {
    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];
}

void Array::display() {
    cout << "Array elements: ";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
}

int sum(Array *obj) {
    int total = 0;

    for (int i = 0; i < obj->n; i++)
        total += obj->a[i];

    return total;
}

int main() {
    Array obj;                 
    Array *ptr = &obj;         

    ptr->display();

    cout << "Sum of elements = " << sum(ptr) << endl;

    return 0;
}
