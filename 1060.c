#include <stdio.h>

int main()
{
    float a;
    int cont = 0;

    for (int i = 0; i < 6; i++)
    {
        scanf("%f", &a);
        cont += (a > 0);
    }

    printf("%d valores positivos\n", cont);

    return 0;
}
