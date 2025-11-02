//Q64: Find the digit that occurs the most times in an integer number.
#include <stdio.h>
int main() {
    long long num;    
    int count[10] = {0}; 
    int i, maxCount = 0, mostDigit;
    printf("Enter an integer number: ");
    scanf("%lld", &num);
    if (num < 0) {
        num = -num;
    }
    while (num > 0) {
        int digit = num % 10;
        count[digit]++;
        num /= 10;
    }
    for (i = 0; i < 10; i++) {
        if (count[i] > maxCount) {
            maxCount = count[i];
            mostDigit = i;
        }
    }
    printf("Digit that occurs the most: %d\n", mostDigit);
    return 0;
}
