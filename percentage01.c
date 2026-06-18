#include <stdio.h>

int main() {
    float marks, total, percentage;

    printf("Enter marks obtained: ");
    scanf("%f", &marks);

    printf("Enter total marks: ");
    scanf("%f", &total);

    percentage = (marks / total) * 100;

    printf("Percentage = %.2f%%\n", percentage);

    return 0;
}
