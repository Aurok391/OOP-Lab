#include <iostream>
using namespace std;

class Matrix {
    int a[3][3];

public:
    void input();
    void displayUpperTriangle();
};

void Matrix::input() {
    cout << "Enter elements of 3 x 3 matrix:\n";

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            cin >> a[i][j];
}

void Matrix::displayUpperTriangle() {
    cout << "\nUpper triangular matrix:\n";

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (j >= i)
                cout << a[i][j] << " ";
            else
                cout << "0 ";
        }
        cout << endl;
    }
}

int main() {
    Matrix obj;

    obj.input();
    obj.displayUpperTriangle();

    return 0;
}
