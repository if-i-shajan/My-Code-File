#include <stdio.h>

int main()
{
    int n, i, j;
    printf("How many rows you want in Pyramid?\n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= 2 * n; j++)
        {
            if (j >= n - (i - 1) && j <= n + (i - 1))
            {
                printf("*");
            }
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}