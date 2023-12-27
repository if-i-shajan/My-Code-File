#include <stdio.h>

int main()
{

    int casos;
    float numero, menor;

    while (scanf("%d", &casos))
    {

        menor = 100.0f;
        for (int i = 0; i < casos; ++i)
        {
            scanf("%f", &numero);
            if (numero < menor)
                menor = numero;
        }

        printf("%.2f\n", menor);
    }
}