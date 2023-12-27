#include <stdio.h>

int main()
{
    int num1, num2;
    printf("Input two numbers: \n");
    scanf("%d %d", &num1, &num2);
    if (num1 < num2)
    {
        printf("Largest Number is %d", num2);
    }
    else if (num1 > num2)
    {
        printf("Largest Number is %d", num1);
    }
    else
    {
        printf("Same Number");
    }

    return 0;
}