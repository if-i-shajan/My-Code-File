#include <stdio.h>

int main()
{

    char string[40];
    for (int i = 1; i <= 10; ++i)
    {

        scanf("%s", string);

        if (i == 3)
            printf(string);
        else if (i == 7)
            printf(string);
        else if (i == 9)
            printf(string);
    }

    return 0;
}