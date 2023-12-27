#include <stdio.h>

int main()
{
    int newNum;

    while (1)
    {
        int cnt = 0;
        float sum = 0;

        while (cnt != 2)
        {
            float num;
            scanf("%f", &num);

            if (num >= 0 && num <= 10)
            {
                sum += num;
                cnt += 1;
            }
            else
            {
                printf("nota invalida\n");
            }
        }

        printf("media = %.2f\n", (sum / cnt));

        while (1)
        {
            printf("novo calculo (1-sim 2-nao)\n");
            scanf("%d", &newNum);

            if (newNum < 1 || newNum > 2)
            {
                continue;
            }
            else
            {
                break;
            }
        }

        if (newNum == 2)
        {
            break;
        }
    }

    return 0;
}
