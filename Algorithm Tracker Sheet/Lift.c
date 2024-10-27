#include <stdio.h>
#include <stdlib.h>
int main()
{
    int T;
    scanf("%d", &T);
    for (int n = 1; n <= T; n++)
    {
        int f, lf;
        scanf("%d %d", &f, &lf);
        int time = abs(f - lf) * 4 + (3 + 5 + 3) + 3 + 5 + (f * 4);
        printf("Case %d: %d\n", n, time);
    }
    return 0;
}

/* Time = abs(distance between floors[f - lf] * 4) + (opening door time + entering in lift + closing door time)
 + (enter + exit time) + (your_floor to ground floor time) */