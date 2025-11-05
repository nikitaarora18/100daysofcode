#include <stdio.h>

int main() {
    int n, i, j, a[10][10], flag = 1;
    printf("Enter size of square matrix: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    for (i = 0; i < n; i++)
        for (j = i + 1; j < n; j++)
            if (a[i][i] == a[j][j])
                flag = 0;

    if (flag)
        printf("Diagonal elements are distinct.\n");
    else
        printf("Diagonal elements are not distinct.\n");

    return 0;
}

