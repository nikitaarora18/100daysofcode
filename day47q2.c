#include <stdio.h>
#include <string.h>

int main() {
    char str[200], word[50], longest[50] = "";
    int i = 0, len = 0, max = 0;

    printf("Enter a sentence: ");
    gets(str);

    while (sscanf(str + i, "%s", word) == 1) {
        len = strlen(word);
        if (len > max) {
            max = len;
            strcpy(longest, word);
        }
        i += strlen(word);
        while (str[i] == ' ') i++;
    }

    printf("Longest word: %s\n", longest);
    return 0;
}
