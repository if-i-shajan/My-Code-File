#include <stdio.h>

int main()
{

    int x, y, i, mat;

    scanf("%d %d", &x, &y);

    if (y < x)
    {

        mat = x;
        x = y;
        y = mat;
    }

    for (i = x + 1; i < y; i++)
    {

        if (i % 5 == 3 || i % 5 == 2)
        {

            printf("%d\n", i);
        }
    }
}