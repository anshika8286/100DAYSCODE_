//Q98: Print initials of a name with the surname displayed in full.
#include <stdio.h>
#include <string.h>
int main() {
    char name[200];
    int len, i, lastStart = 0;
    fgets(name, sizeof(name), stdin);
    len = strlen(name);
    if (name[len - 1] == '\n') {
        name[len - 1] = '\0';
        len--;
    }
    for (i = len - 1; i >= 0; i--) {
        if (name[i] == ' ') {
            lastStart = i + 1;
            break;
        }
    }
    if (name[0] != ' ')
        printf("%c.", name[0]);
    for (i = 1; i < lastStart - 1; i++) {
        if (name[i] == ' ' && name[i+1] != ' ')
            printf("%c.", name[i+1]);
    }
    printf(" %s", &name[lastStart]);
    return 0;
}
