#include <stdio.h>

int main()
{
    int n;

    printf("Zadaj cislo: ");
    scanf("%d", &n);

    int i = 1;

    for(i = 1; i <= n; i++)
    {
        int j = 1;

        for(j = 1; j <= i; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}