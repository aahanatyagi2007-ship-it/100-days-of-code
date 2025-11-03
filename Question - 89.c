//Q89: Count frequency of a given character in a string.

#include <stdio.h>

int main() {
    char str[1000], ch;
    fgets(str, sizeof(str), stdin);
    scanf("%c", &ch);
    int count = 0;
    for (int i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        if (str[i] == ch)
            count++;
    }
    printf("%d\n", count);
    return 0;
}
