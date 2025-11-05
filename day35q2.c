#include <stdio.h>

int main() {
    int n, k, arr[100];
    printf("Enter number of elements: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter k: ");
    scanf("%d", &k);
    k = k % n;

    printf("Array after rotation:\n");
    for (int i = n - k; i < n; i++)
        printf("%d ", arr[i]);
    for (int i = 0; i < n - k; i++)
        printf("%d ", arr[i]);

    return 0;
}
