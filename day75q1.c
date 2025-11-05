#include <stdio.h>

int main() {
    FILE *fp;
    char line[200];

    fp = fopen("info.txt", "a");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter text to append: ");
    getchar(); // clear buffer
    fgets(line, sizeof(line), stdin);

    fputs(line, fp);
    fclose(fp);

    printf("Text appended successfully.\n");
    return 0;
}
