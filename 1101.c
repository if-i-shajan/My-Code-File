#include <stdio.h>
int main()
{
    int m = 1, n = 1, i = 0, s = 0, x = 0;
    scanf("%d %d", &m, &n);
    while (m > 0 && n > 0)
    {
        if (n < m)
        {
            x = m;
            m = n;
            n = x;
        }
        for (i = m; i <= n; i++)
        {
            s += i;
            printf("%d ", i);
        }
        printf("Sum=%d\n", s);
        s = 0;
        scanf("%d %d", &m, &n);
    }
}