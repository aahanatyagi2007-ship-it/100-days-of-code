#Q106: Write a program to take an array arr[] of integers as input, the task is to find the next greater element for each element of the array in order of their appearance in the array. Next greater element of an element in the array is the nearest element on the right which is greater than the current element. If there does not exist next greater of current element, then next greater element for current element is -1.

#include <stdio.h>

int main() {
    int n, i, j;

    // Input size
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    // Input elements
    printf("Enter array elements:\n");
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    // Find next greater elements
    for(i = 0; i < n; i++){
        int nextGreater = -1;

        // Check elements to the right
        for(j = i + 1; j < n; j++){
            if(arr[j] > arr[i]){
                nextGreater = arr[j];
                break;
            }
        }

        // Print result (with comma formatting)
        printf("%d", nextGreater);
        if(i < n - 1) printf(", ");
    }

    return 0;
}
