#include <stdio.h>

int main()
{
    int i, N;
    int prime = 1;

    scanf("%d", &N);

    for (i = 2; i < N; i++)
    {
        if (N % i == 0)
        {
            prime = 0;
        }
    }

    if (prime == 1)
        printf("Prime Number", N);
    else
        printf("Not Prime Number", N);
    return 0;
}