//Q98: Print initials of a name with the surname displayed in full.

#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);

    int len = 0;
    while (str[len] != '\0' && str[len] != '\n') len++;

    int start = 0, wordCount = 0;
    for (int i = 0; i <= len; i++) {
        if (str[i] == ' ' || str[i] == '\0' || str[i] == '\n') {
            if (wordCount < 2) {
                char ch = str[start];
                if (ch >= 'a' && ch <= 'z') ch -= ('a' - 'A');
                printf("%c.", ch);
            } else {
                for (int j = start; j < i; j++)
                    printf("%c", str[j]);
            }
            if (str[i] == ' ') printf(" ");
            start = i + 1;
            wordCount++;
        }
    }
    printf("\n");
    return 0;
}
