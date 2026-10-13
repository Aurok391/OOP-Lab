#include <iostream>
#include <iomanip>
using namespace std;

class Ledger {
protected:
    double balance;
public:
    Ledger(double b) : balance(b) {}
    void showBalance() {
        cout << fixed << setprecision(2) << "Balance: " << balance << endl;
    }
};

class SavingsAccount : public Ledger {
public:
    SavingsAccount(double b) : Ledger(b) {}
    void calculateInterest(double rate) {
        cout << fixed << setprecision(2)
             << "Savings interest: " << balance * rate / 100 << endl;
    }
};

class CheckingAccount : public Ledger {
public:
    CheckingAccount(double b) : Ledger(b) {}
    void showAccountType() { cout << "Account type: Checking Account" << endl; }
};

int main() {
    SavingsAccount savings(1000.00);
    CheckingAccount checking(750.00);
    cout << "Savings Account\n";
    savings.showBalance();
    savings.calculateInterest(4.0);
    cout << "\nChecking Account\n";
    checking.showBalance();
    checking.showAccountType();
    return 0;
}
