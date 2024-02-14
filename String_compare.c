#include <stdio.h>
int main()
{
    char ch1[15] = "Bangladesh", ch2[15] = "bangladesh";
    if (strcmp(ch1, ch2) == 0)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}
