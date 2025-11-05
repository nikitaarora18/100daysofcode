#include <stdio.h>

int main() {
    int n, i, seen[1000] = {0};
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (seen[arr[i]] == 1) {
            printf("Repeated element = %d\n", arr[i]);
            return 0;
        }
        seen[arr[i]] = 1;
    }

    printf("No repetition found.\n");
    return 0;
}
