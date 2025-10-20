//Q38: Write a program to find the sum of digits of a number.
#include <stdio.h>
int main() {
    int n, sum = 0, dig;
    printf("Enter a number: ");
    scanf("%d", &n);
    while(n > 0) {
        dig = n % 10;   
        sum = sum + dig;
        n = n / 10; 
    }
    printf("Sum of digits = %d\n", sum);
    return 0;
}
