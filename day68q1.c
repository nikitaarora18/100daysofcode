#include <stdio.h>

int main() {
    int n, i, total, sum = 0;
    printf("Enter n: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements (0 to n, one missing): ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    total = n * (n + 1) / 2;
    for (i = 0; i < n; i++)
        sum += arr[i];

    printf("Missing number = %d\n", total - sum);
    return 0;
}
