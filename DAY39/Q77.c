//Q77: Check if the elements on the diagonal of a matrix are distinct.
#include <stdio.h>
int main() {
    int n, m, i, j, k, distinct = 1;
    int matrix[10][10];
    int diag[10], count = 0;
    printf("Enter rows and columns: ");
    scanf("%d %d", &n, &m);
    printf("Enter matrix elements (%d x %d):\n", n, m);
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    for (i = 0; i < n && i < m; i++) {
        diag[count++] = matrix[i][i];
    }
    for (i = 0; i < count; i++) {
        for (j = i + 1; j < count; j++) {
            if (diag[i] == diag[j]) {
                distinct = 0;
                break;
            }
        }
        if (!distinct)
            break;
    }
    if (distinct)
        printf("True\n");
    else
        printf("False\n");
    return 0;
}
