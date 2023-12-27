#include <stdio.h>

int main()
{
    long long N;

    scanf("%lld", &N);
    if (N % 2 == 0)
    {
        printf("odd\n");
    }
    else
    {
        printf("even\n");
    }

    return 0;
}