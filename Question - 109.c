#Q109: Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.

#include <stdio.h>

int main() {
    int n, k, i;

    // Input size of array
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    // Input elements
    printf("Enter array elements:\n");
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    // Input window size k
    printf("Enter value of k: ");
    scanf("%d", &k);

    // If k > n, no valid subarray
    if(k > n) {
        printf("-1\n");
        return 0;
    }

    // Compute sum of first window
    int windowSum = 0;
    for(i = 0; i < k; i++){
        windowSum += arr[i];
    }

    int maxSum = windowSum;

    // Slide the window
    for(i = k; i < n; i++){
        windowSum = windowSum - arr[i - k] + arr[i];
        if(windowSum > maxSum)
            maxSum = windowSum;
    }

    // Print result
    printf("%d\n", maxSum);

    return 0;
}
