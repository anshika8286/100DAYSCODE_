//Q72: Find the sum of all elements in a matrix.
#include <stdio.h>
int main() {
    int rows, cols, i, j, sum = 0;
    int matrix[10][10];
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);
    printf("Enter elements of the matrix (%d x %d):\n", rows, cols);
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
            sum += matrix[i][j]; // Add each element to sum
        }
    }
    printf("Sum of all elements = %d\n", sum);
    return 0;
}
