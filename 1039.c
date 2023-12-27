#include <stdio.h>
#include <math.h>
int main()
{
    int R, X, Y, r, x, y;
    float d;
    while ((scanf("%d%d%d%d%d%d", &R, &X, &Y, &r, &x, &y)) != EOF)
    {
        d = sqrt(pow((X - x), 2) + pow((Y - y), 2));
        if (R >= d + r)
        {
            printf("RICO\n");
        }
        else
        {
            printf("MORTO\n");
        }
    }
    return 0;
}