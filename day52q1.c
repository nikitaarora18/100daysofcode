#include <stdio.h>

int main() {
    int n, x, i, ceilIndex = -1;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter sorted elements: ");
    for (i = 0; i < n; i++) scanf("%d", &arr[i]);

    printf("Enter x: ");
    scanf("%d", &x);

    for (i = 0; i < n; i++) {
        if (arr[i] >= x) {
            ceilIndex = i;
            break;
        }
    }

    printf("Ceil index: %d\n", ceilIndex);
    return 0;
}

