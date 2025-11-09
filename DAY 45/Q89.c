//Q89: Count frequency of a given character in a string.
#include <stdio.h>
int main() {
    char str[100], ch;
    int i, count = 0;
    printf("enter string \n");
    scanf("%s", str);
    printf("enter the letter to be counted\n");
    scanf(" %c", &ch);  
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch)
            count++;
    }
    printf("%d", count);
    return 0;
}
