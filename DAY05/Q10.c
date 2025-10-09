// Program to Calculate Compound Interest
#include <stdio.h>
#include <math.h> 
int main() {
double principal, rate, time, compound_Int,simple_int, amt;
printf("Enter the Principal amount: ");
scanf("%lf", &principal);
printf("Enter the Rate of interest (in %%): ");
scanf("%lf", &rate);
printf("Enter the Time (in years): ");
scanf("%lf", &time);
simple_int = (principal * rate * time) ;
amt = principal * pow((1 + rate / 100), time);
compound_Int = amt - principal;
printf("Compound Interest = %.2lf\n", compound_Int);
 printf("Simple Interest = %.2lf\n", simple_int);
printf("Total Amount = %.2lf\n", amt);
return 0;
}
