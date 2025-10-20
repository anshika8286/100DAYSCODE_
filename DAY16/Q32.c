// Write a program to check if a number is a palindrome.
*/#include <stdio.h>
int main() {
    int num, o, rev = 0, dt;
    printf("Enter a number: ");
    scanf("%d", &num);
    o = num;
    while (num > 0) {
        dt = num % 10;
        rev = rev * 10 + digit;
        num = num / 10;
    }
    if (o == rev) {
        printf("Palindrome\n");
    } else {
        printf("Not palindrome\n");
    }
    return 0;
}
