#include <stdio.h>
int main()
{
    int a, b;
    double c, M;
    scanf("%d %d %lf", &a, &b, &c);
    M = b * c;
    scanf("%d %d %lf", &a, &b, &c);
    M += b * c;
    printf("VALOR A PAGAR: R$ %0.2lf\n", M);
    return 0;
}
