# Q110: Write a program to take an integer array arr and an integer k as inputs. The task is to find the maximum element in each subarray of size k moving from left to right. Print the maximum elements for each window separated by spaces as output.

#include.stdio

int main() {
    int n, k, i, j;

    // Input size
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

    // If k > n no valid window exists
    if(k > n){
        printf("-1\n");
        return 0;
    }

    // Find maximum in each window
    for(i = 0; i <= n - k; i++){
        int max = arr[i];

        for(j = i; j < i + k; j++){
            if(arr[j] > max)
                max = arr[j];
        }

        printf("%d ", max);
    }

    return 0;
}
