//Q136: Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.
#include <stdio.h>
#include <string.h>
int main() {
    enum Menu { ADD, SUBTRACT, MULTIPLY };
    enum Menu choice;
    char op[20];
    int a, b;
    printf("Enter operation (ADD/SUBTRACT/MULTIPLY) followed by two numbers:\n");
    scanf("%s %d %d", op, &a, &b);
    if (strcmp(op, "ADD") == 0)
        choice = ADD;
    else if (strcmp(op, "SUBTRACT") == 0)
        choice = SUBTRACT;
    else if (strcmp(op, "MULTIPLY") == 0)
        choice = MULTIPLY;
    else {
        printf("Invalid operation!\n");
        return 0;
    }
    switch (choice) {
        case ADD:
            printf("%d\n", a + b);
            break;
        case SUBTRACT:
            printf("%d\n", a - b);
            break;
        case MULTIPLY:
            printf("%d\n", a * b);
            break;
    }
    return 0;
}
