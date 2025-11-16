//Q96: Reverse each word in a sentence without changing the word order.
#include <stdio.h>
#include <string.h>
int main() {
    char str[200], word[100];
    int i = 0, j = 0;
    fgets(str, sizeof(str), stdin);
    while (str[i] != '\0') {
        if (str[i] != ' ' && str[i] != '\n') {
            word[j++] = str[i];  
        }
        else {
            word[j] = '\0';     
            for (int k = j - 1; k >= 0; k--) {
                printf("%c", word[k]);
            }
            if (str[i] == ' ')
                printf(" ");    
            j = 0;
        }

        i++;
    }
    return 0;
}
