# Q108: Write a Program to take an integer array nums. Print an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i]. The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.

#include <stdio.h>

int main() {
    int n, i, j;

    // Input size of array
    printf("Enter size of array: ");
    scanf("%d", &n);

    int nums[n], answer[n];

    // Input array elements
    printf("Enter array elements:\n");
    for(i = 0; i < n; i++){
        scanf("%d", &nums[i]);
    }

    // Compute product for each element
    for(i = 0; i < n; i++){
        int product = 1;
        for(j = 0; j < n; j++){
            if(i != j){
                product *= nums[j];
            }
        }
        answer[i] = product;
    }

    // Print result
    printf("[");
    for(i = 0; i < n; i++){
        printf("%d", answer[i]);
        if(i < n - 1) printf(",");
    }
    printf("]");

    return 0;
}
