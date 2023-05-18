#include <stdio.h>

void main() {
    printf("Enter an amount: ");
    int x;
    int n20;
    int n10;
    int n5;
    int n1;
    n20 = 0;
    n10 = 0;
    n5 = 0;
    n1 = 0;
    scanf("%d", &x);

    while (x >=20) {
        x -= 20;
        n20++;
    }

    while (x >=10) {
        x -= 10;
        n10++;
    }

    while (x >= 5) {
        x -= 5;
        n5++;
    }

    while (x >= 1) {
        x -=1;
        n1++;
    }

    printf("$20 bills: %d\n", n20);
    printf("$10 bills: %d\n", n10);
    printf("$5 bills: %d\n", n5);
    printf("$1 bills: %d", n1);
}