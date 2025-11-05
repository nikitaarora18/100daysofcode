#include <stdio.h>

int main() {
    int n, arr[100], max, second;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    if (arr[0] > arr[1]) {
        max = arr[0];
        second = arr[1];
    } else {
        max = arr[1];
        second = arr[0];
    }

    for (int i = 2; i < n; i++) {
        if (arr[i] > max) {
            second = max;
            max = arr[i];
        } else if (arr[i] > second && arr[i] != max)
            second = arr[i];
    }

    printf("Second largest = %d\n", second);
    return 0;
}
