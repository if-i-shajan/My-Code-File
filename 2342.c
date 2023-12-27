#include <stdio.h>

int main()
{
    int numMax, numA, numB;
    char operacao;

    scanf("%u %u %c %u", &numMax, &numA, &operacao, &numB);

    if ((operacao == '+' && numA + numB > numMax) || (operacao == '*' && numA * numB > numMax))
        printf("OVERFLOW\n");
    else
        printf("OK\n");

    return 0;
}
