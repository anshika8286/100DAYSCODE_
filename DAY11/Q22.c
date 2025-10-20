// Write a program to find profit or loss percentage given cost price and selling price.
#include <stdio.h>
int main() {
    float cp, sp, p, l, percent;
    printf("Enter Cost Price: ");
    scanf("%f", &cp);
    printf("Enter Selling Price: ");
    scanf("%f", &sp);
    if (sp > cp) {
        p= sp - cp;
        percent = (p / cp) * 100;
        printf("Profit Percentage = %.2f%%\n", percent);
    }
    else if (cp > sp) {
        l = cp - sp;
        percent = (l / cp) * 100;
        printf("Loss Percentage = %.2f%%\n", percent);
    }
    else {
        printf("No Profit, No Loss\n");
    }
 return 0;
}
