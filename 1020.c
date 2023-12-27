#include <stdio.h>
int main()
{
    int n;

    scanf("%d", &n);

    int a = n / 365;
    int r = n % 365;
    int q = r % 30;
    int m = r / 30;
    int d = q % 30;

    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", a, m, d);

    return 0;
}
