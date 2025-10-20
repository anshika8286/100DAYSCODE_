//Q41: Write a program to swap the first and last digit of a number.
#include <stdio.h>
int main() {
    int n, n1, last, temp, pow = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    temp = n;
    last = temp % 10;         
    while(temp >= 10) {
        temp = temp / 10;
        pow = pow * 10;        
    }
    n1 = temp;           
    if (n < 10) {
        printf("Swapped number = %d\n", n);
        return 0;
    }
    int mid = n % pow;    
    mid = mid / 10;    
    int swap = last * pow + mid * 10 + n1;
    printf("Swapped number = %d\n", swap);
    return 0;
}
