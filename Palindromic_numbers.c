#include <stdio.h>
int main()
{
    int T, n;
    scanf("%d", &T);
    for (int i = 1; i <= T; i++)
    {
        scanf("%d", &n);
        int original = n;
        int reversed = 0, remainder;

        while (n != 0)
        {
            remainder = n % 10;
            reversed = reversed * 10 + remainder;
            n /= 10;
        }

        if (original == reversed)
            printf("Case %d: Yes\n", i);
        else
            printf("Case %d: No\n", i);
    }

    return 0;
}
