#include <stdio.h>

int main() {
    char name[50];
    int age;
    float marks1, marks2, marks3, average;

    printf("Enter student name: ");
    scanf("%s", name);

    printf("Enter age: ");
    scanf("%d", &age);

    printf("Enter marks of 3 subjects: ");
    scanf("%f %f %f", &marks1, &marks2, &marks3);

    average = (marks1 + marks2 + marks3) / 3;

    printf("\n--- Student Details ---\n");
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Average Marks: %.2f\n", average);

    if (average >= 75) {
        printf("Grade: A\n");
    } else if (average >= 50) {
        printf("Grade: B\n");
    } else {
        printf("Grade: C\n");
    }

    return 0;
}
