//wap a program to swap 2 variables without using 3rd variable
#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

   
    a = a + b;  
    b = a - b;  
    a = a - b;  

    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}
