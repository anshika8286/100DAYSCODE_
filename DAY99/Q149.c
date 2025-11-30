//Q149: Use malloc() to allocate structure memory dynamically and print details.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Student {
    char name[50];
    int roll;
    int marks;
};
int main() {
    struct Student *stu = (struct Student *)malloc(sizeof(struct Student));
    if (stu == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }
    printf("Enter name, roll, and marks: ");
    scanf("%s %d %d", stu->name, &stu->roll, &stu->marks);
    printf("Name: %s | Roll: %d | Marks: %d\n", stu->name, stu->roll, stu->marks);
    free(stu);
    return 0;
}
