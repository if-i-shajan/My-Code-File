#include <stdio.h>

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Please enter a positive integer.\n");
        return 1;

        printf("\n");
