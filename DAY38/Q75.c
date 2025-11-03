//Q75: Add two matrices.
#include <stdio.h>
int main() {
    int r1, c1, r2, c2, i, j;
    int A[10][10], B[10][10], sum[10][10];

    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter elements of first matrix (%d x %d):\n", r1, c1);
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            scanf("%d", &A[i][j]);
        }
    }
    printf("Enter rows and columns of second matrix: ");
    scanf("%d %d", &r2, &c2);
    if (r1 != r2 || c1 != c2) {
        printf("Matrix addition not possible. Dimensions must be same.\n");
        return 0;
    }
    printf("Enter elements of second matrix (%d x %d):\n", r2, c2);
    for (i = 0; i < r2; i++) {
        for (j = 0; j < c2; j++) {
            scanf("%d", &B[i][j]);
        }
    }
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            sum[i][j] = A[i][j] + B[i][j];
        }
    }
    printf("Sum of the two matrices:\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}
