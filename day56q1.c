#include <stdio.h>

int main() {
    int n, i, j, found;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements: ");
    for (i = 0; i < n; i++) scanf("%d", &arr[i]);

    printf("Next greater elements: ");
    for (i = 0; i < n; i++) {
        found = -1;
        for (j = i + 1; j < n; j++) {
            if (arr[j] > arr[i]) {
                found = arr[j];
                break;
            }
        }
        if (i == n - 1)
            printf("%d", found);
        else
            printf("%d, ", found);
    }

    printf("\n");
    return 0;
}
