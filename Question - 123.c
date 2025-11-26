//Q123: Read a text file and count the total number of characters, words, and lines. A word is defined as a sequence of non-space characters separated by spaces or newlines.

#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp;
    char ch;
    int characters = 0, words = 0, lines = 0;
    int in_word = 0;

    fp = fopen("sample.txt", "r");

    if (fp == NULL) {
        printf("Error opening file!");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        characters++;
        if (ch == '\n')
            lines++;
        if (isspace(ch))
            in_word = 0;
        else if (!in_word) {
            in_word = 1;
            words++;
        }
    }

    fclose(fp);
    printf("Characters: %d\nWords: %d\nLines: %d", characters, words, lines + 1);
    return 0;
}
