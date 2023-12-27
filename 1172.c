#include <stdio.h>

int main()
{

    int x[10], i, n;

    for (i = 0; i < 10; i++)
    {

        scanf("%d", &n);
        x[i] = n;
    }

    for (i = 0; i < 10; i++)
    {

        if (x[i] <= 0)
        {

            x[i] = 1;
        }

        printf("X[%d] = %d\n", i, x[i]);
    }
}
