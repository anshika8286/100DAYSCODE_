//Q37: Write a program to find the LCM of two numbers.
#include <stdio.h>
int main() {
    int a, b, hcf, lcm, i;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    for(i = 1; i <= a && i <= b; i++) {
        if(a % i == 0 && b % i == 0) {
            hcf = i;
        }
    }
    lcm = (a * b) / hcf;
    printf("LCM of %d and %d is: %d\n", a, b, lcm);
    return 0;
}
