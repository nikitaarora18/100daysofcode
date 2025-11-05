#include <stdio.h>

int main() {
    int n, k, i, j;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter window size k: ");
    scanf("%d", &k);

    printf("First negative in each subarray: ");
    for (i = 0; i <= n - k; i++) {
        int found = 0;
        for (j = i; j < i + k; j++) {
            if (arr[j] < 0) {
                printf("%d ", arr[j]);
                found = 1;
                break;
            }
        }
        if (!found)
            printf("0 ");
    }

    printf("\n");
    return 0;
}
