// File Name: library_fine.c

#include <stdio.h>

int main() {

    // Student Details
    char student_name[50] = "Rakesh";
    int roll_no = 45;
    int late_days;
    float fine;

    // Input Late Days
    printf("Enter Number of Late Days: ");
    scanf("%d", &late_days);

    // Fine Calculation
    if (late_days <= 5) {
        fine = late_days * 2;
    }
    else if (late_days <= 10) {
        fine = late_days * 5;
    }
    else {
        fine = late_days * 10;
    }

    // Display Student Details
    printf("\n----- STUDENT DETAILS -----\n");
    printf("Student Name : %s\n", student_name);
    printf("Roll Number : %d\n", roll_no);

    // Display Fine Details
    printf("\n----- LIBRARY FINE DETAILS -----\n");
    printf("Late Days : %d\n", late_days);
    printf("Total Fine : %.2f\n", fine);

    // Fine Status
    if (fine >= 100) {
        printf("Fine Status : High Fine\n");
    }
    else {
        printf("Fine Status : Normal Fine\n");
    }

    printf("\nProgram Executed Successfully\n");

    return 0;
}
