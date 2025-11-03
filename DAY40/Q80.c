//Q80: Multiply two matrices.
#include <stdio.h>
int main() {
    int a[10][10], b[10][10], result[10][10];
    int m, n, p, q, i, j, k, sum;
    printf("Enter rows and columns of Matrix A: ");
    scanf("%d %d", &m, &n);
    printf("Enter elements of Matrix A (%d x %d):\n", m, n);
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter rows and columns of Matrix B: ");
    scanf("%d %d", &p, &q);
    if (n != p) {
        printf("Matrix multiplication not possible (incompatible dimensions)\n");
        return 0;
    }
    printf("Enter elements of Matrix B (%d x %d):\n", p, q);
    for (i = 0; i < p; i++) {
        for (j = 0; j < q; j++) {
            scanf("%d", &b[i][j]);
        }
    }
    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            result[i][j] = 0;
        }
    }
    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            sum = 0;
            for (k = 0; k < n; k++) {
                sum += a[i][k] * b[k][j];
            }
            result[i][j] = sum;
        }
    }
    printf("Resultant Matrix (A x B):\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    return 0;
}
