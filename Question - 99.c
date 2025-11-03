//Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.

#include <stdio.h>

int main() {
    char date[20], day[3], month[3], year[5];
    fgets(date, sizeof(date), stdin);

    int i = 0, j = 0;
    while (date[i] != '/' && date[i] != '\0' && date[i] != '\n') {
        day[j++] = date[i++];
    }
    day[j] = '\0';
    i++; // skip '/'

    j = 0;
    while (date[i] != '/' && date[i] != '\0' && date[i] != '\n') {
        month[j++] = date[i++];
    }
    month[j] = '\0';
    i++; // skip '/'

    j = 0;
    while (date[i] != '\0' && date[i] != '\n') {
        year[j++] = date[i++];
    }
    year[j] = '\0';

    if (month[0]=='0' && month[1]=='4') printf("%s-Apr-%s\n", day, year);
    else printf("%s-%s-%s\n", day, month, year);

    return 0;
}
