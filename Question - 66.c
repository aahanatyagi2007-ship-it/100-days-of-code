//Q66: Insert an element in a sorted array at the appropriate position.

#include <stdio.h>

int main() {
    int n, x, i, j;
    scanf("%d", &n);
    int arr[n+1];
    for (i = 0; i < n; i++) scanf("%d", &arr[i]);
    scanf("%d", &x);
    for (i = n - 1; i >= 0 && arr[i] > x; i--) arr[i + 1] = arr[i];
    arr[i + 1] = x;
    for (j = 0; j <= n; j++) printf("%d ", arr[j]);
    return 0;
}
