// Write a program to implement a basic calculator using switch-case for +, -, *, /, %.
#include <stdio.h>
int main() {
    char op;
    int num1, num2;
    float result;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter an operator (+, -, *, /, %%): ");
    scanf(" %c", &op);   // space before %c to ignore any leftover newline
    printf("Enter second number: ");
    scanf("%d", &num2);
    switch (op) {
        case '+':
            result = num1 + num2;
            printf("Result = %.2f\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("Result = %.2f\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("Result = %.2f\n", result);
            break;
        case '/':
            if (num2 != 0) {
                result = (float)num1 / num2;
                printf("Result = %.2f\n", result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        case '%':
            if (num2 != 0) {
                printf("Result = %d\n", num1 % num2);
            } else {
                printf("Error: Modulo by zero is not allowed.\n");
            }
            break;
        default:
            printf("Invalid operator!\n");
    }
   return 0;
}
