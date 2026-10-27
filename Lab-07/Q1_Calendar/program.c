#include <stdio.h>

int isLeapYear(int year) {
    return (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0);
}

/* Returns the weekday of 1 January: 0 = Sunday, 1 = Monday, ... */
int firstDayOfYear(int year) {
    int y = year - 1;
    return (y * 365 + y / 4 - y / 100 + y / 400 + 1) % 7;
}

int main(void) {
    int year, month, day, startDay;
    const char *months[] = {
        "January", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "November", "December"
    };
    int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    printf("Enter year: ");
    if (scanf("%d", &year) != 1 || year < 1) {
        printf("Please enter a valid positive year.\\n");
        return 1;
    }

    if (isLeapYear(year)) {
        daysInMonth[1] = 29;
    }
    startDay = firstDayOfYear(year);

    printf("\\nCalendar for %d\\n", year);
    for (month = 0; month < 12; month++) {
        printf("\\n       %s\\n", months[month]);
        printf(" Sun Mon Tue Wed Thu Fri Sat\\n");
        for (day = 0; day < startDay; day++) {
            printf("    ");
        }
        for (day = 1; day <= daysInMonth[month]; day++) {
            printf("%4d", day);
            startDay++;
            if (startDay == 7) {
                printf("\\n");
                startDay = 0;
            }
        }
        if (startDay != 0) {
            printf("\\n");
        }
    }
    return 0;
}
