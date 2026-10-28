#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

bool isLeapYear(int year) {
    return year % 400 == 0 || (year % 4 == 0 && year % 100 != 0);
}

// 0 = Sunday, 1 = Monday, ..., 6 = Saturday
int firstDayOfYear(int year) {
    int y = year - 1;
    return (y * 365 + y / 4 - y / 100 + y / 400 + 1) % 7;
}

int main() {
    int year;
    cout << "Enter year: ";
    if (!(cin >> year) || year < 1) {
        cout << "Please enter a valid positive year.\\n";
        return 1;
    }
    const string months[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    int days[] = {31,28,31,30,31,30,31,31,30,31,30,31};
    if (isLeapYear(year)) days[1] = 29;
    int start = firstDayOfYear(year);
    cout << "\\nCalendar for " << year << "\\n";
    for (int m = 0; m < 12; ++m) {
        cout << "\\n       " << months[m] << "\\n Sun Mon Tue Wed Thu Fri Sat\\n";
        for (int i = 0; i < start; ++i) cout << "    ";
        for (int d = 1; d <= days[m]; ++d) {
            cout << setw(4) << d;
            start = (start + 1) % 7;
            if (start == 0) cout << '\\n';
        }
        if (start != 0) cout << '\\n';
    }
    return 0;
}
