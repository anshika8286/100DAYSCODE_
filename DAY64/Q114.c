//Q114: Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.
#include <stdio.h>
#include <string.h>
int main() {
    char s[200];
    scanf("%s", s);
    int n = strlen(s);
    int maxLen = 0;
    for (int i = 0; i < n; i++) {
        int visited[256] = {0};
        int length = 0;

        for (int j = i; j < n; j++) {
            if (visited[(unsigned char)s[j]] == 1) {
                break; 
            }
            visited[(unsigned char)s[j]] = 1;
            length++;

            if (length > maxLen)
                maxLen = length;
        }
    }
    printf("%d", maxLen);
    return 0;
}
