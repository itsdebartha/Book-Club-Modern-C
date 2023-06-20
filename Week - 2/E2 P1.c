#include <stdio.h>

int revnum(int n) {
    int a = 0;
    while (n != 0) {
        a = a*10 + n%10;
        n /= 10;
    }
    return a;
}

void main() {
    printf("Enter a number: ");
    int n;
    scanf("%d",&n);
    printf("The reversed number is: %d", revnum(n));
}