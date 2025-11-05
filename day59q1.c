#include <stdio.h>

int main() {
    int n, k, i, sum = 0, maxSum = -100000;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter k: ");
    scanf("%d", &k);

    for (i = 0; i <= n - k; i++) {
        sum = 0;
        for (int j = i; j < i + k; j++)
            sum += arr[j];

        if (sum > maxSum)
            maxSum = sum;
    }

    printf("Maximum subarray sum of size %d = %d\n", k, maxSum);
    return 0;
}
