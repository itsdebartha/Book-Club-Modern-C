#include <stdio.h>
#include <math.h>

double answer(double x) {
    return 3 * pow(x, 5) + 2 * pow(x, 4) - 5 * pow(x, 3) - pow(x, 2) + 7 * x - 6;
}

void main() {
    printf("Enter x: ");
    double x;
    scanf("%lf", &x);
    printf("The answer is: %lf", answer(x));
}