//Q143: Find and print the student with the highest marks.
#include <stdio.h>
struct Student {
    char name[50];
    int roll;
    float marks;
};
int main() {
    struct Student s[50];  
    int n, i, topIndex = 0;
    scanf("%d", &n); 
    for(i = 0; i < n; i++) {
        scanf("%s %d %f", s[i].name, &s[i].roll, &s[i].marks);
    }
    for(i = 1; i < n; i++) {
        if(s[i].marks > s[topIndex].marks) {
            topIndex = i;
        }
    }
    printf("Topper: %s (Marks: %.2f)\n", s[topIndex].name, s[topIndex].marks);
    return 0;
}
