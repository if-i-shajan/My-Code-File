#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int num[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }

    int min = 0;
    int pos = 0;

    for (int i = 0; i < n; i++)
    {
        int x = num[i];
        if (i == 0)
        {
            min = x;
            pos = i;
        }
        else if (x < min)
        {
            min = x;
            pos = i;
        }
    }

    printf("Menor valor: %d\n", min);
    printf("Posicao: %d\n", pos);

    return 0;
}
