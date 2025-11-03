//Q79: Perform diagonal traversal of a matrix.
#include <stdio.h>
int main() {
    int n, i, j;
    int matrix[10][10];
    printf("Enter the order of the square matrix: ");
    scanf("%d", &n);
    printf("Enter matrix elements (%d x %d):\n", n, n);
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("Diagonal traversal of the matrix:\n");
    for (int d = 0; d < 2 * n - 1; d++) {
        for (i = 0; i < n; i++) {
            j = d - i;
            if (j >= 0 && j < n)
                printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}
