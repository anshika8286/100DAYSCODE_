//Q137: Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.
#include <stdio.h>
#include <string.h>
int main() {
    enum Role { ADMIN, USER, GUEST };
    enum Role r;
    char input[20];
    printf("Enter role (ADMIN/USER/GUEST): ");
    scanf("%s", input);
    if (strcmp(input, "ADMIN") == 0)
        r = ADMIN;
    else if (strcmp(input, "USER") == 0)
        r = USER;
    else if (strcmp(input, "GUEST") == 0)
        r = GUEST;
    else {
        printf("Invalid role!\n");
        return 0;
    }
    switch (r) {
        case ADMIN:
            printf("Welcome Admin! You have full access.\n");
            break;
        case USER:
            printf("Welcome User! Limited access granted.\n");
            break;
        case GUEST:
            printf("Welcome Guest!\n");
            break;
    }
    return 0;
}
