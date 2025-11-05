#include <stdio.h>

int main() {
    char str[100];
    int i, freq[26] = {0};
    printf("Enter a lowercase string: ");
    gets(str);

    for (i = 0; str[i] != '\0'; i++) {
        int idx = str[i] - 'a';
        if (freq[idx] == 1) {
            printf("First repeating letter: %c\n", str[i]);
            return 0;
        }
        freq[idx]++;
    }

    printf("No repeating lowercase letter found.\n");
    return 0;
}
