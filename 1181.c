#include <stdio.h>

int main()
{
    float m[12][12];
    int index;
    char c;
    scanf("%d", &index);
    scanf(" %c", &c);

    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            scanf("%f", &m[i][j]);
        }
    }

    float sum = 0.0;
    for (int i = 0; i < 12; i++)
    {
        sum += m[index][i];
    }

    if (c == 'S')
    {
        printf("%.1f\n", sum);
    }
    else if (c == 'M')
    {
        printf("%.1f\n", sum / 12);
    }

    return 0;
}
