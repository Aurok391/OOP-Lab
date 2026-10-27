#include <stdio.h>
#include <string.h>

#define MAX_SUBJECTS 10
#define NAME_LENGTH 100

struct Student {
    char name[NAME_LENGTH];
    int rollNumber;
    int subjectCount;
    float marks[MAX_SUBJECTS];
    float cgpa;
};

int main(void) {
    struct Student student;
    int i;

    printf("Enter student name: ");
    if (fgets(student.name, sizeof(student.name), stdin) == NULL) {
        return 1;
    }
    student.name[strcspn(student.name, "\\n")] = '\\0';

    printf("Enter roll number: ");
    if (scanf("%d", &student.rollNumber) != 1) {
        printf("Invalid roll number.\\n");
        return 1;
    }

    printf("Enter number of enrolled subjects (1-%d): ", MAX_SUBJECTS);
    if (scanf("%d", &student.subjectCount) != 1 ||
        student.subjectCount < 1 || student.subjectCount > MAX_SUBJECTS) {
        printf("Invalid number of subjects.\\n");
        return 1;
    }

    for (i = 0; i < student.subjectCount; i++) {
        printf("Enter marks for subject %d: ", i + 1);
        if (scanf("%f", &student.marks[i]) != 1 ||
            student.marks[i] < 0 || student.marks[i] > 100) {
            printf("Invalid marks. Enter a value from 0 to 100.\\n");
            return 1;
        }
    }

    printf("Enter CGPA (out of 10): ");
    if (scanf("%f", &student.cgpa) != 1 ||
        student.cgpa < 0 || student.cgpa > 10) {
        printf("Invalid CGPA. Enter a value from 0 to 10.\\n");
        return 1;
    }

    printf("\\n--- Student Details ---\\n");
    printf("Name: %s\\n", student.name);
    printf("Roll number: %d\\n", student.rollNumber);
    printf("Enrolled subjects: %d\\n", student.subjectCount);
    for (i = 0; i < student.subjectCount; i++) {
        printf("Subject %d marks: %.2f\\n", i + 1, student.marks[i]);
    }
    printf("CGPA: %.2f/10\\n", student.cgpa);

    return 0;
}
