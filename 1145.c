#include <stdio.h>

int main()
{
    int x, y, a = 0;
    scanf("%d %d", &x, &y);

    for (int i = 1; i <= y; i++)
    {
        a += 1;
        if (a == x)
        {
            printf("%d\n", i);
            a = 0;
        }
        else
        {
            printf("%d ", i);
        }
    }

    return 0;
}
