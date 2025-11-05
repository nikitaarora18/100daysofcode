#include <stdio.h>

int main() {
    int n, x;
    printf("Enter n: ");
    scanf("%d", &n);

    int total = n * (n + 1) / 2;

    for (x = 1; x <= n; x++) {
        int left = x * (x + 1) / 2;
        int right = total - (x - 1) * x / 2;
        if (left == right) {
            printf("Pivot integer: %d\n", x);
            return 0;
        }
    }

    printf("-1\n");
    return 0;
}
