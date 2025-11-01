//Q41: Write a program to swap the first and last digit of a number.

#include <stdio.h>
#include <math.h>

int main() {
    int num, firstDigit, lastDigit, digits, swappedNum, middlePart;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num < 10) {
        printf("Swapped number: %d\n", num);
        return 0;
    }
    lastDigit = num % 10;
    digits = (int)log10(num);
    firstDigit = num / (int)pow(10, digits);
    middlePart = (num % (int)pow(10, digits)) / 10;
    swappedNum = lastDigit * (int)pow(10, digits) + middlePart * 10 + firstDigit;

    printf("Swapped number: %d\n", swappedNum);

    return 0;
}
