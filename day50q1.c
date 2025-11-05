#include <stdio.h>
#include <string.h>

int main() {
    char date[20], month[3];
    char *months[] = {"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};
    int m;

    printf("Enter date (dd/mm/yyyy): ");
    gets(date);

    sscanf(date, "%*[^/]/%d/%*s", &m);
    strncpy(month, months[m - 1], 3);
    month[3] = '\0';

    char day[3], year[5];
    sscanf(date, "%2s/%*s/%4s", day, year);

    printf("%s-%s-%s\n", day, month, year);
    return 0;
}
