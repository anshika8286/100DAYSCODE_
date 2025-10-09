// Write a program to calculate the area and circumference of a circle given its radius.
#include <stdio.h>
int main() {
    float radius, area, circumference;
    double PI= 3.14159;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    area = PI * radius * radius;              // Area = pr²
    circumference = 2 * PI * radius;          // Circumference = 2pr
    printf("Area of the circle: %.2f\n", area);
    printf("Circumference of the circle: %.2f\n", circumference);
     return 0;
}

