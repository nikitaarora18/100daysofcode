#include <stdio.h>

int main() {
    int n, rem;
    long long product = 1;
    int found = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n != 0) {
        rem = n % 10;
        if (rem % 2 != 0) {
            product *= rem;
            found = 1;
        }
        n /= 10;
    }

    if (found)
        printf("Product of odd digits = %lld\n", product);
    else
        printf("No odd digits found.\n");

    return 0;
}
