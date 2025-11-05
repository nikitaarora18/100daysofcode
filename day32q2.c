#include <stdio.h>

int main() {
    int n, digit, count[10] = {0}, max = 0, most = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    while (n != 0) {
        digit = n % 10;
        count[digit]++;
        n /= 10;
    }

    for (int i = 0; i < 10; i++) {
        if (count[i] > max) {
            max = count[i];
            most = i;
        }
    }

    printf("Digit %d occurs most (%d times)\n", most, max);
    return 0;
}
