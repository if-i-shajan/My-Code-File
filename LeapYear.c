#include <stdio.h>

int main()
{
    int y;
    scanf("%d", &y);
    if (y % 400 == 0)
        printf("Leap year\n");
    else if (y % 4 == 0 && y % 100 != 0)
        printf("Leap year\n");
    else
        printf("Not Leap year\n");

    return 0;
}