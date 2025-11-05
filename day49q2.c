#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    int i, last_space = -1;

    printf("Enter full name: ");
    gets(name);

    for (i = 0; name[i] != '\0'; i++) {
        if (name[i] == ' ')
            last_space = i;
    }

    for (i = 0; i < last_space; i++) {
        if (i == 0 || name[i - 1] == ' ')
            printf("%c. ", name[i]);
    }

    printf("%s\n", name + last_space + 1);
    return 0;
}
