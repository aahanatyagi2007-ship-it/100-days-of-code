//Q69: Find the second largest element in an array.

#include <stdio.h>

int main() {
    int n, i, max1, max2;
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++) scanf("%d", &arr[i]);
    max1 = max2 = -1000000000;
    for (i = 0; i < n; i++) {
        if (arr[i] > max1) {
            max2 = max1;
            max1 = arr[i];
        } else if (arr[i] > max2 && arr[i] < max1) {
            max2 = arr[i];
        }
    }
    printf("%d", max2);
    return 0;
}
