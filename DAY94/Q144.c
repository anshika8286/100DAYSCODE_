//Q144: Write a function that accepts a structure as parameter and prints its members.
#include <stdio.h>
#include <string.h>
struct Student {
    char name[50];
    int roll;
    int marks;
};
void printStudent(struct Student s) {
    printf("Name: %s | Roll: %d | Marks: %d\n", s.name, s.roll, s.marks);
}
int main() {
    struct Student student1;
    printf("Enter name: ");
    scanf("%s", student1.name);
    printf("Enter roll number: ");
    scanf("%d", &student1.roll);
    printf("Enter marks: ");
    scanf("%d", &student1.marks);
    printStudent(student1);
    return 0;
}
