#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int b, p, f, h, c;
        scanf("%d %d %d", &b, &p, &f); // amount of the items
        scanf("%d %d", &h, &c);        // price of the burgers

        int maxProfit = 0;

        if (h > c)
        {
            int hamburgers = b / 2;
            if (hamburgers > p)
            {
                hamburgers = p;
            }
            maxProfit += hamburgers * h;
            b -= hamburgers * 2;

            int chickenBurgers = b / 2;
            if (chickenBurgers > f)
            {
                chickenBurgers = f;
            }
            maxProfit += chickenBurgers * c;
        }
        else
        {
            int chickenBurgers = b / 2;
            if (chickenBurgers > f)
            {
                chickenBurgers = f;
            }
            maxProfit += chickenBurgers * c;
            b -= chickenBurgers * 2;

            int hamburgers = b / 2;
            if (hamburgers > p)
            {
                hamburgers = p;
            }
            maxProfit += hamburgers * h;
        }

        printf("%d\n", maxProfit);
    }

    return 0;
}

