#include <stdio.h>

int main() {
    int n, k, i, j, max;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter k: ");
    scanf("%d", &k);

    printf("Maximum in each subarray: ");
    for (i = 0; i <= n - k; i++) {
        max = arr[i];
        for (j = i + 1; j < i + k; j++)
            if (arr[j] > max)
                max = arr[j];

        printf("%d ", max);
    }

    printf("\n");
    return 0;
}
