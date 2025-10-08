//Write a program to input two numbers and display their sum, difference, product, and quotient.
  #include <stdio.h>
int main()
{
int a,b;
int sum,diff,prod;
float div;
printf("enter the first number.");
scanf("%d",&a);
printf("enter the second number.");
scanf("%d",&b);
sum = a+b;
diff = a-b;
prod = a*b;
div = (float)a/b; //typecasting to get decimal value
printf("Addition = %d\n",sum);
printf("Substraction =%d\n",diff);
printf("Multiplication = %d\n", prod);
printf("Division = %.2f\n", div);
}
