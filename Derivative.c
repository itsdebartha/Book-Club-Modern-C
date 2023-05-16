#include<stdio.h>
#include<math.h>

double derivative(double x, double ep) {
    double h = 1e-2;
    double diff = (sin(x + h) - sin(x)) / h;
    int n = 0;
    while (diff >= ep) {
        h = h / 10.0;
        diff = (sin(x + h) - sin(x)) / h;
        n++;
        if (n == 10) break;
    }
    return diff;
}

void main() {
    double x;
    printf("Enter the value where you'd like to check for continuity: ");
    scanf("%lf", &x);
    double epsilon;
    printf("Enter the tolerance: ");
    scanf("%lf", &epsilon);
    double ans = derivative(x, epsilon);
    printf("The derivative of sin(x) at x = %lf is: %lf", x, ans);
}