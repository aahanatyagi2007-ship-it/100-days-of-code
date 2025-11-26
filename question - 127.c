//Q127: Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the result to output.txt.

#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *infile, *outfile;
    char ch;

    infile = fopen("input.txt", "r");
    if (infile == NULL) {
        printf("Error opening input file!");
        return 1;
    }

    outfile = fopen("output.txt", "w");
    if (outfile == NULL) {
        printf("Error creating output file!");
        fclose(infile);
        return 1;
    }

    while ((ch = fgetc(infile)) != EOF)
        fputc(toupper(ch), outfile);

    fclose(infile);
    fclose(outfile);

    printf("File converted to uppercase and saved as output.txt");
    return 0;
}
