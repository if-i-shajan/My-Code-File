#include <stdio.h>
int main()
{
    int order, cells;
    scanf("%d", &order);
    cells = 2 * order * (order - 1) + 1;
    printf("%d\n", cells);

    return 0;
}