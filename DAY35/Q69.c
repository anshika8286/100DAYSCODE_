//Q69: Find the second largest element in an array.
#include <stdio.h>
int main() {
    int n, i, arr[100];
    int first, second;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    if (n < 2) {
        printf("Array must have at least two elements.\n");
        return 0;
    }
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    first = second = -999; 
    for (i = 0; i < n; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }
    if (second == -999)
        printf("There is no second largest element (all elements are equal).\n");
    else
        printf("Second largest element: %d\n", second);
    return 0;
}
