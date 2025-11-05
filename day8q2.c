#include <stdio.h>

int main() {
    int num1, num2, num3;

    // Input three numbers from the user
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Compare the numbers using if–else
    if (num1 >= num2 && num1 >= num3) {
        printf("%d is the largest number.\n", num1);
    } 
    else if (num2 >= num1 && num2 >= num3) {
        printf("%d is the largest number.\n", num2);
    } 
    else {
        printf("%d is the largest number.\n", num3);
    }

    return 0;
}
