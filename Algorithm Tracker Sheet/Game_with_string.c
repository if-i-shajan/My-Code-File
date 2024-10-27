#include <stdio.h>
#include <stdlib.h>
#define MAX_LEN 100000

int main()
{
    char s[MAX_LEN + 1];
    scanf("%s", s);

    char stack[MAX_LEN];
    int top = -1;
    int removalCount = 0;

    for (int i = 0; s[i] != '\0'; i++)
    {
        if (top >= 0 && stack[top] == s[i])
        {
            top--;
            removalCount++;
        }
        else
        {
            stack[++top] = s[i];
        }
    }

    if (removalCount % 2 == 1)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }

    return 0;
}


// If removalCount is odd, the first player wins, otherwise the second player wins.
