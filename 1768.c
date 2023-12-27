#include <stdio.h>

int main()
{

    int t, i, j, z;

    while (scanf("%d", &t) != EOF)
    {

        for (i = 0; i < t; i += 2)
        {
            for (j = 0; j < (t - i) / 2; j++)
                printf(" ");

            for (z = i; z >= 0; z--)
                printf("*");

            printf("\n");
        }

        for (i = 0; i < t / 2; i++)
            printf(" ");
        printf("*\n");

        for (i = 1; i < t / 2; i++)
            printf(" ");

        printf("***\n\n");
    }
}