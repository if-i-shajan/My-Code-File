#include <stdio.h>
int main()
{
    int i, N, count = 0;

    scanf("%d", &N);

    for (i = 1; i <= N; i++)
    {
        if (N % i == 0)
        {
            count++;
        }
    }

    if (count == 2)
        printf("Prime Number", N);
    else
        printf("Not Prime Number", N);
    return 0;
}
