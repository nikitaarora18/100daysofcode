#include <stdio.h>

int main() {
    int m, n, i, j, k = 0;
    printf("Enter size of first array: ");
    scanf("%d", &m);
    printf("Enter size of second array: ");
    scanf("%d", &n);

    int a[m], b[n], merged[m + n];

    printf("Enter first sorted array: ");
    for (i = 0; i < m; i++)
        scanf("%d", &a[i]);

    printf("Enter second sorted array: ");
    for (j = 0; j < n; j++)
        scanf("%d", &b[j]);

    i = j = 0;
    while (i < m && j < n) {
        if (a[i] < b[j])
            merged[k++] = a[i++];
        else
            merged[k++] = b[j++];
    }

    while (i < m)
        merged[k++] = a[i++];
    while (j < n)
        merged[k++] = b[j++];

    printf("Merged array: ");
    for (i = 0; i < m + n; i++)
        printf("%d ", merged[i]);
    printf("\n");
    return 0;
}
