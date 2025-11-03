//Q70: Rotate an array to the right by k positions.
#include <stdio.h>
int main() {
    int n, k, i, arr[100], temp[100];
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the number of positions to rotate : ");
    scanf("%d", &k);
    k = k % n; 
    for (i = 0; i < k; i++) {
        temp[i] = arr[n - k + i];
    }
    for (i = k; i < n; i++) {
        temp[i] = arr[i - k];
    }
    for (i = 0; i < n; i++) {
        arr[i] = temp[i];
    }
    printf("Array after rotating right by %d positions:\n", k);
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
