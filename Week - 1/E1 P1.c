#include <stdio.h>

int main()
{
    int n, i, j;
    printf("Input n: ");
    scanf("%d", &n);

    for(i = n; i >= n/2; i--)
    {
        for(j = i + n/2 - 1; j >= 0; j--)
        {
            printf(" ");
        }
        printf("*\n");
    }

    for (i = n/2 - 1; i >= 0; i--)
    {
        for (j = 1; j <= n/2 - i; j++)
        {
            printf(" ");
        }
        printf("*");
        for (j = 2*i - 1; j >= 1; j--)
        {
            printf(" ");
        }
        if (i != 0)
        {
            printf("*");
        }
        printf("\n");
    }
//    printf("%d", 3 * n/2);
}