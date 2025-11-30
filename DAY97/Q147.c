//Q147: Store employee data in a binary file using fwrite() and read using fread().
#include <stdio.h>
#include <stdlib.h>
struct Employee {
    char name[50];
    int id;
    float salary;
};
int main() {
    FILE *file;
    int n;
    printf("Enter number of employees: ");
    scanf("%d", &n);
    struct Employee employees[n];
    for (int i = 0; i < n; i++) {
        printf("Enter name, ID, and salary for employee %d: ", i + 1);
        scanf("%s %d %f", employees[i].name, &employees[i].id, &employees[i].salary);
    }
    file = fopen("employees.dat", "wb");
    if (file == NULL) {
        printf("Error opening file.\n");
        exit(1);
    }
    fwrite(employees, sizeof(struct Employee), n, file);
    fclose(file);
    printf("\nEmployee data stored in file successfully.\n");
    file = fopen("employees.dat", "rb");
    if (file == NULL) {
        printf("Error opening file.\n");
        exit(1);
    }
    struct Employee empRead;
    printf("\nEmployee data read from file:\n");
    for (int i = 0; i < n; i++) {
        fread(&empRead, sizeof(struct Employee), 1, file);
        printf("Name: %s | ID: %d | Salary: %.2f\n", empRead.name, empRead.id, empRead.salary);
    }
    fclose(file);
    return 0;
}
