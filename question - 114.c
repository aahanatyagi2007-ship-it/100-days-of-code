//Q114: Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.

#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    scanf("%s", s);
    int n = strlen(s), i, j, k, max_len = 0;
    for(i = 0; i < n; i++) {
        int visited[256] = {0};
        for(j = i; j < n; j++) {
            if(visited[(unsigned char)s[j]]) break;
            visited[(unsigned char)s[j]] = 1;
        }
        if(j - i > max_len) max_len = j - i;
    }
    printf("%d", max_len);
    return 0;
}
