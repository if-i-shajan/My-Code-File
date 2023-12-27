#include <stdio.h>
int main()
{
    int q, i, n;
    int l[2000];
    for (i = 0; i < 2000; ++i)
        l[i] = 0;
    scanf("%d", &q);
    for (i = 0; i < q; ++i)
    {
        scanf("%d", &n);
        ++l[n - 1];
    }
    for (i = 0; i < 2000; ++i)
        if (l[i] != 0)
            printf("%d aparece %d vez(es)\n", i + 1, l[i]);
    return 0;
}
