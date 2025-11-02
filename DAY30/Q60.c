//Q60: Count positive, negative, and zero elements in an array.
#include <stdio.h>
int main() {
    int n, i, arr[100];
    int even = 0, odd = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++) {
        if (arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }
    printf("Even=%d, Odd=%d\n", even, odd);
    return 0;
}
