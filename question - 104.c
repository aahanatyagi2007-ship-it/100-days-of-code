# : Write a Program to take a positive integer n as input, and find the pivot integer x such that the sum of all elements between 1 and x inclusively equals the sum of all elements between x and n inclusively. Print the pivot integer x. If no such integer exists, print -1. Assume that it is guaranteed that there will be at most one pivot integer for the given input.

#include <stdio.h>

int main() {
    int n, x, leftSum, rightSum;
    
    // Input
    printf("Enter a positive integer n: ");
    scanf("%d", &n);: 

    int pivot = -1;

    // Check every possible pivot x from 1 to n
    for(x = 1; x <= n; x++) {
        
        // Calculate left sum: 1 to x
        leftSum = (x * (x + 1)) / 2;
        
        // Calculate right sum: x to n
        rightSum = ((n * (n + 1)) / 2) - ((x * (x - 1)) / 2);

        // Check if they match
        if(leftSum == rightSum) {
            pivot = x;
            break;
        }
    }

    // Output
    printf("%d\n", pivot);

    return 0;
}
