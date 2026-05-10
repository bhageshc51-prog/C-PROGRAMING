#include <stdio.h>

int main() {

    int maths, science, total;
    float average;

    printf("Enter Maths Marks: ");
    scanf("%d", &maths);

    printf("Enter Science Marks: ");
    scanf("%d", &science);

    total = maths + science;
    average = total / 2.0;

    printf("\nTotal Marks = %d\n", total);
    printf("Average = %.2f\n", average);

    return 0;
}
