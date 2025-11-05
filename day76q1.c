#include <stdio.h>

int main() {
    char filename[50];
    printf("Enter filename: ");
    scanf("%s", filename);

    FILE *fp = fopen(filename, "r");
    if (fp == NULL)
        printf("Error: File does not exist.\n");
    else {
        char ch;
        while ((ch = fgetc(fp)) != EOF)
            putchar(ch);
        fclose(fp);
    }

    return 0;
}
