//Q85: Reverse a string.
#include <stdio.h>
int main() {
    char str[100];
    int l = 0, i;
    scanf("%s", str);
    while (str[l] != '\0') {
        l++;
    }
    for (i = l - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    return 0;
}
