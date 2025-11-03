//Q77: Check if the elements on the diagonal of a matrix are distinct.

#include <stdio.h>


int main() {
    int rows, cols, isDistinct = 1;
    scanf("%d %d", &rows, &cols);
    int matrix[rows][cols];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    if (rows != cols) {
        printf("False\n");
        return 0;
    }
    for (int i = 0; i < rows; i++) {
        for (int j = i + 1; j < rows; j++) {
            if (matrix[i][i] == matrix[j][j]) {
                isDistinct = 0;
                break;
            }
        }
        if (!isDistinct) break;
    }
    if (isDistinct)
        printf("True\n");
    else
        printf("False\n");
    return 0;
}
