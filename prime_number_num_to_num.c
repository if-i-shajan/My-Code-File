#include <stdio.h>

int main()
{
    int N;

    scanf("%d", &N);

    for (int i = 2; i <= N; ++i)
    {
        int prime = 1;

        for (int j = 2; j < i; ++j)
        {
            if (i % j == 0)
            {
                prime = 0;
                break;
            }
        }

        if (prime == 1)
        {
            printf("%d ", i);
        }
    }

    return 0;
}
