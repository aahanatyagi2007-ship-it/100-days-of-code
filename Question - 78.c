//Q78: Find the sum of main diagonal elements for a square matrix.

#include <stdio.h>

int main() {
    int n, m, sum = 0;
    scanf("%d %d", &n, &m);
    int matrix[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    if (n != m) {
        printf("Not a square matrix\n");
        return 0;
    }
    for (int i = 0; i < n; i++) {
        sum += matrix[i][i];
    }
    printf("%d\n", sum);
    return 0;
}
