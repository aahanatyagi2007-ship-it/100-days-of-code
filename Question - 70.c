//Q70: Rotate an array to the right by k positions.

#include <stdio.h>

int main() {
    int n, k, i;
    scanf("%d", &n);
    int arr[n], res[n];
    for (i = 0; i < n; i++) scanf("%d", &arr[i]);
    scanf("%d", &k);
    k = k % n;
    for (i = 0; i < n; i++) res[(i + k) % n] = arr[i];
    for (i = 0; i < n; i++) printf("%d ", res[i]);
    return 0;
}
