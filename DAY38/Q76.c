//Q76: Check if a matrix is symmetric.
#include <stdio.h>
int main() {
    int n, i, j;
    int matrix[10][10], isSymmetric = 1;
    printf("Enter the order of the square matrix (n x n): ");
    scanf("%d", &n);
    printf("Enter elements of the matrix (%d x %d):\n", n, n);
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                isSymmetric = 0;
                break;
            }
        }
        if (!isSymmetric)
            break;
    }
    if (isSymmetric)
        printf("True\n");
    else
        printf("False\n");
    return 0;
}
