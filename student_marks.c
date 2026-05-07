// File Name: student_marks.c

#include <stdio.h>

int main() {
    
    // Student Details
    char name[50] = "Rahul";
    int age = 20;
    float cgpa = 8.5;

    // Subject Marks
    int python, c_programming, maths;
    int total;
    float average;

    // Input Marks
    printf("Enter Python Marks: ");
    scanf("%d", &python);

    printf("Enter C Programming Marks: ");
    scanf("%d", &c_programming);

    printf("Enter Maths Marks: ");
    scanf("%d", &maths);

    // Total and Average
    total = python + c_programming + maths;
    average = total / 3.0;

    // Display Student Details
    printf("\n----- STUDENT DETAILS -----\n");
    printf("Name : %s\n", name);
    printf("Age : %d\n", age);
    printf("CGPA : %.2f\n", cgpa);

    // Display Marks
    printf("\n----- MARKS DETAILS -----\n");
    printf("Python Marks : %d\n", python);
    printf("C Programming Marks : %d\n", c_programming);
    printf("Maths Marks : %d\n", maths);

    printf("\nTotal Marks : %d\n", total);
    printf("Average Marks : %.2f\n", average);

    // Grade Calculation
    if (average >= 90) {
        printf("Grade : A+\n");
    }
    else if (average >= 75) {
        printf("Grade : A\n");
    }
    else if (average >= 60) {
        printf("Grade : B\n");
    }
    else {
        printf("Grade : C\n");
    }

    printf("\nProgram Executed Successfully\n");

    return 0;
}
