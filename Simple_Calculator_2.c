#include <stdio.h>
int add(int a, int b)
{
    int sum;
    sum = a + b;
    printf("Summation: %d\n", sum);
}

int main()
{
    int a, b, sum, sub, mult;
    float div;
    printf("Enter the value A and B\n");
    scanf("%d %d", &a, &b);
    add(a, b);
    sub = a - b;
    mult = a * b;
    printf("Subtraction: %d\n", sub);
    printf("Multiplication: %d\n", mult);
    if (b == 0)
    {
        printf("Divider can't be Zero");
    }
    else
    {
        div = (float)a / (float)b;
        printf("Division: %.3f\n", div);
    }

    return 0;
}
