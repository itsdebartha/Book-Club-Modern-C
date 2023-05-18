#include <stdio.h>

double totalamount(double x) {
    return 1.05 * x;
}

void main() {
    printf("Enter an amount: ");
    double amount;
    scanf("%lf", &amount);
    printf("5 percent tax: %lf\n", totalamount(amount) - amount);
    printf("Total amount: %lf", totalamount(amount));
}