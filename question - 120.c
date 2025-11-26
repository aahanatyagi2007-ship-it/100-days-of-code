//Q120: Write a program to take a string input. Change it to sentence case.

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char str[200];
    fgets(str, sizeof(str), stdin);
    int len = strlen(str);
    for (int i = 0; i < len; i++) {
        if (i == 0 || str[i - 1] == ' ')
            str[i] = toupper(str[i]);
        else
            str[i] = tolower(str[i]);
    }
    printf("%s", str);
    return 0;
}
