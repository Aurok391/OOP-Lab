#include <iostream>
using namespace std;

class Fibonacci {
    int n;

public:
    Fibonacci();
    void generate();
};

Fibonacci::Fibonacci() {
    cout << "Enter number of terms: ";
    cin >> n;
}

void Fibonacci::generate() {
    int a = 0, b = 1, c;

    cout << "Fibonacci series: ";

    for (int i = 1; i <= n; i++) {
        cout << a << " ";
        c = a + b;
        a = b;
        b = c;
    }

    cout << endl;
}

int main() {
    Fibonacci f;
    f.generate();

    return 0;
}
