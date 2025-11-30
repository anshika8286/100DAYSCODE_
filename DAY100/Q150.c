//Q150: Use pointer to struct to modify and display data using -> operator.
#include <stdio.h>
#include <string.h>
struct Student {
    char name[50];
    int roll;
    int marks;
};
int main() {
    struct Student stu;
    struct Student *ptr = &stu;  
    printf("Enter name, roll, and marks: ");
    scanf("%s %d %d", ptr->name, &ptr->roll, &ptr->marks);
    printf("Modified Data: Name: %s | Roll: %d | Marks: %d\n", ptr->name, ptr->roll, ptr->marks);
    return 0;
}
