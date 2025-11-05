#include <stdio.h>
#include <ctype.h>

int main() {
    char s[200];
    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);

    int newWord = 1;
    for (int i = 0; s[i] != '\0'; i++) {
        if (newWord && isalpha(s[i])) {
            s[i] = toupper(s[i]);
            newWord = 0;
        } else {
            s[i] = tolower(s[i]);
        }
        if (s[i] == '.' || s[i] == '!')
            newWord = 1;
    }

    printf("Sentence case: %s", s);
    return 0;
}
