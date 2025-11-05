#include <stdio.h>
#include <string.h>

void reverse(char word[]) {
    int i, len = strlen(word);
    for (i = len - 1; i >= 0; i--)
        printf("%c", word[i]);
}

int main() {
    char str[200], word[50];
    int i = 0;

    printf("Enter a sentence: ");
    gets(str);

    while (sscanf(str + i, "%s", word) == 1) {
        reverse(word);
        printf(" ");
        i += strlen(word);
        while (str[i] == ' ') i++;
    }

    printf("\n");
    return 0;
}
