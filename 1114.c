#include <stdio.h>

int main()
{
    while (1)
    {
        int password;
        scanf("%d", &password);

        if (password == 2002)
        {
            printf("Acesso Permitido\n");
            break;
        }
        else
        {
            printf("Senha Invalida\n");
        }
    }

    return 0;
}
