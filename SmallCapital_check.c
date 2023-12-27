#include <stdio.h>

int main()
{
    char ch;
    printf("Enter any letter: ");
    scanf("%c", &ch);
    if (ch >= 'a' && ch <= 'z')
    {
        printf("%c is Small Letter", ch);
    }
    else if (ch >= 'A' && ch <= 'Z')
    {
        printf("%c is Capital Letter", ch);
    }
    else
    {
        printf("%c is Not a letter", ch);
    }
    return 0;
}