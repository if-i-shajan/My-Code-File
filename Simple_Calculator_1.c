#include <stdio.h>

int main()
{

    char ch;
    double a, b;
    printf("Enter an operator (+, -, *, /):\n");
    scanf("%c", &ch);
    printf("Enter two operands:\n");
    scanf("%lf %lf", &a, &b);

    switch (ch)
    {
    case '+':
        printf("%.1lf + %.1lf = %.1lf", a, b, a + b);
        break;
    case '-':
        printf("%.1lf - %.1lf = %.1lf", a, b, a - b);
        break;
    case '*':
        printf("%.1lf * %.1lf = %.1lf", a, b, a * b);
        break;
    case '/':
        printf("%.1lf / %.1lf = %.1lf", a, b, a / b);
        break;
    default:
        printf("Error!");
    }

    return 0;
}
