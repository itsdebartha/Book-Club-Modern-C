#include <stdio.h>

void main() {
    int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11, n12;
    printf("Enter the 12-digit EAN code: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9, &n10, &n11, &n12);
    int sum1 = n2 + n4 + n6 + n8 + n10 + n12;
    int sum2 = n1 + n3 + n5 + n7 + n9 + n11;
    int check = 9 - (3 * sum1 + sum2 - 1) % 10;
    printf("Check digit is: %d", check);
}