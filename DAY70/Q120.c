//Q120: Write a program to take a string input. Change it to sentence case.
#include <stdio.h>
#include <ctype.h>
int main() {
    char str[200];
    fgets(str, sizeof(str), stdin);
    int newWord = 1;  
    for(int i = 0; str[i] != '\0'; i++) {

        if(str[i] == ' ') {
            newWord = 1;
        } else {
            if(newWord && isalpha(str[i])) {
                str[i] = toupper(str[i]);
                newWord = 0;
            } else {
                str[i] = tolower(str[i]);
            }
        }
    }
    printf("%s", str);
    return 0;
}
