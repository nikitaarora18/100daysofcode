#include <stdio.h>

int main() {
    int n, i;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int maxSoFar = arr[0], currentSum = arr[0];
    for (i = 1; i < n; i++) {
        if (currentSum < 0)
            currentSum = arr[i];
        else
            currentSum += arr[i];

        if (currentSum > maxSoFar)
            maxSoFar = currentSum;
    }

    printf("Maximum subarray sum = %d\n", maxSoFar);
    return 0;
}
