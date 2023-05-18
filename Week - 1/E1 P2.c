#include <stdio.h>
#include <math.h>

#define PI 3.14159

double volume (double radius) {
    return (4.0 / 3.0) * PI * pow(radius, 3);
}

void main() {
    printf("Enter the radius of the sphere: ");
    double r;
    scanf("%lf", &r);
    printf("The volume of the sphere is: %lf", volume(r));
}