#include <stdio.h>

int main() {

    int age;
    float percentage;

    printf("Enter Age: ");
    scanf("%d", &age);

    printf("Enter Percentage: ");
    scanf("%f", &percentage);

    if(age >= 18 && percentage >= 60) {
        printf("\nEligible for Placement Drive\n");
    }
    else {
        printf("\nNot Eligible for Placement Drive\n");
    }

    return 0;
}
