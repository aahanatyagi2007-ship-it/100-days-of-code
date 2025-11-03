//Q94: Find the longest word in a sentence.

#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);
    int maxLen = 0, start = 0, length = 0, wordStart = 0;
    for (int i = 0; ; i++) {
        if (str[i] != ' ' && str[i] != '\0' && str[i] != '\n') {
            length++;
            if (length == 1) wordStart = i;
        } else {
            if (length > maxLen) {
                maxLen = length;
                start = wordStart;
            }
            length = 0;
            if (str[i] == '\0' || str[i] == '\n') break;
        }
    }
    for (int i = start; i < start + maxLen; i++)
        printf("%c", str[i]);
    printf("\n");
    return 0;
}
