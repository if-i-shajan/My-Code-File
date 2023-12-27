#include <stdio.h>
int main ()
{

	int a, b;
    scanf("%d %d", &a, &b);
    if (a % 2 == 0 && b % 2 == 0 || a % 2 == 1 && b % 2 == 1)
    {
        printf("1\n");
    }
    else
    {
        printf("0\n");
    }
	return 0;	

}