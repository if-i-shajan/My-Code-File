#include <stdio.h>
#include <unistd.h>
int main()
{
    int n;
    printf("Set the Timer:\n");
    scanf("%d", &n);
    for (int m = n - 1; m >= 0; m--)
    {
        for (int s = 59; s >= 0; s--)
        {
            printf("%d : %d\n", m, s);
            system("color 06");
            sleep(1);
            system("cls");
        }
    }
    printf("Time over");
    
    return 0;
}
