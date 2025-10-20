// Write a program to check if a number is an Armstrong number.
#include <stdio.h>
#include <math.h>
int main() {
    int num, original, digits = 0, remainder;
    double result = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    original = num;
    int temp = num;
    while (temp != 0) {
        temp /= 10;
        digits++;
    }
    temp = num;
    while (temp != 0) {
        remainder = temp % 10;
        result += pow(remainder, digits);
        temp /= 10;
    }
    if ((int)result == original) {
        printf("Armstrong\n");
    } else {
        printf("Not Armstrong\n");
    }
    return 0;
}
