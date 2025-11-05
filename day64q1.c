#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    printf("Enter string: ");
    scanf("%s", s);

    int maxLen = 0;
    int n = strlen(s);

    for (int i = 0; i < n; i++) {
        int freq[256] = {0};
        int len = 0;

        for (int j = i; j < n; j++) {
            if (freq[s[j]] == 1)
                break;
            freq[s[j]] = 1;
            len++;
        }

        if (len > maxLen)
            maxLen = len;
    }

    printf("Length of longest substring without repeating characters = %d\n", maxLen);
    return 0;
}
