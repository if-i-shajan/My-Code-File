#include <stdio.h>

int main()

{
    int x, y, z, d;

    while (scanf("%d.%d.%d-%d", &x, &y, &z, &d))
    {
        printf("%03d\n%03d\n%03d\n%02d\n", x, y, z, d);
    }

    return 0;
}
