#include <stdio.h>
#include <string.h>

int main()
{
    char a[22], b[22], c[22];
    scanf("%s", a);

    if (strcmp(a, "vertebrado") == 0)
    {
        scanf("%s", b);

        if (strcmp(b, "ave") == 0)
        {
            scanf("%s", c);

            if (strcmp(c, "carnivoro") == 0)
                printf("aguia\n");
            else if (strcmp(c, "onivoro") == 0)
                printf("pomba\n");
        }

        if (strcmp(b, "mamifero") == 0)
        {
            scanf("%s", c);

            if (strcmp(c, "onivoro") == 0)
                printf("homem\n");
            else if (strcmp(c, "herbivoro") == 0)
                printf("vaca\n");
        }
    }
    else if (strcmp(a, "invertebrado") == 0)
    {
        scanf("%s", b);

        if (strcmp(b, "inseto") == 0)
        {
            scanf("%s", c);

            if (strcmp(c, "hematofago") == 0)
                printf("pulga\n");
            else if (strcmp(c, "herbivoro") == 0)
                printf("lagarta\n");
        }

        if (strcmp(b, "anelideo") == 0)
        {
            scanf("%s", c);

            if (strcmp(c, "hematofago") == 0)
                printf("sanguessuga\n");
            else if (strcmp(c, "onivoro") == 0)
                printf("minhoca\n");
        }
    }

    return 0;
}
