#include <iostream>
using namespace std;

class Matrix {
    int a[3][3];

public:
    void input();
    void display();
    friend Matrix add(Matrix, Matrix);
};

void Matrix::input() {
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            cin >> a[i][j];
}

void Matrix::display() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
}

Matrix add(Matrix m1, Matrix m2) {
    Matrix m3;

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            m3.a[i][j] = m1.a[i][j] + m2.a[i][j];

    return m3;
}

int main() {
    Matrix m1, m2, m3;

    cout << "Enter first 3 x 3 matrix:\n";
    m1.input();

    cout << "Enter second 3 x 3 matrix:\n";
    m2.input();

    m3 = add(m1, m2);

    cout << "\nSum of matrices:\n";
    m3.display();

    return 0;
}
