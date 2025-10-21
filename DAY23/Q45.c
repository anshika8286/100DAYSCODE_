//Q45: Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.
#include <stdio.h>
int main() {
    int n;
    float sum = 0.0;
    int num = 2, den = 3;
    printf("Enter number of terms: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        sum += (float)num / den;
        num= num+ 2;    
        den=den+ 4;   
    }
    printf("Approx sum: %.2f\n", sum);
    return 0;
}
