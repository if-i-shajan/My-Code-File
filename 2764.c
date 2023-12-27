#include <stdio.h>

int main()

{
    int d, m, y;
    scanf("%d/%d/%d", &d, &m, &y);
    {
        printf("%0.2d/%0.2d/%0.2d\n", m, d, y);
        printf("%0.2d/%0.2d/%0.2d\n", y, m, d);
        printf("%0.2d-%0.2d-%0.2d\n", d, m, y);
    }

    return 0;
}