#Q105: Write a program to take an integer array nums of size n, and print the majority element. The majority element is the element that appears strictly more than ⌊n / 2⌋ times. Print -1 if no such element exists. Note: Majority Element is not necessarily the element that is present most number of times.

#include <stdio.h>

int main() {
    int n, i;
    int count = 0, candidate = -1;

    // Input size of array
    printf("Enter size of array: ");
    scanf("%d", &n);

    int nums[n];

    // Input array elements
    printf("Enter array elements:\n");
    for(i = 0; i < n; i++){
        scanf("%d", &nums[i]);
    }

    // Step 1: Find candidate using Boyer-Moore Voting Algorithm
    for(i = 0; i < n; i++){
        if(count == 0){
            candidate = nums[i];
            count = 1;
        } else if(nums[i] == candidate){
            count++;
        } else {
            count--;
        }
    }

    // Step 2: Verify candidate
    count = 0;
    for(i = 0; i < n; i++){
        if(nums[i] == candidate)
            count++;
    }

    // Check condition strictly > n/2
    if(count > n / 2)
        printf("%d\n", candidate);
    else
        printf("-1\n");

    return 0;
}
