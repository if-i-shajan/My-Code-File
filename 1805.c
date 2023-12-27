#include <stdio.h>
int main()
{

    long long num1, num2, result = 0;

    scanf("%llu %llu", &num1, &num2);

    result = ((num1 + num2) * (num2 - num1 + 1)) / 2;

    printf("%llu\n", result);
}