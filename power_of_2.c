#include <stdio.h>

int main()
{
    long long N;

    scanf("%lld", &N);

    if (N > 0 && (N & (N - 1)) == 0 && (N != 1))
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}
