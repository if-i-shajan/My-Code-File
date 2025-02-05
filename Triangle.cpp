//Codeforces 6A
#include <bits/stdc++.h>
using namespace std;

void checkTriangle(int a, int b, int c, int d)
{
    int sticks[4] = {a, b, c, d};
    sort(sticks, sticks + 4);
    for (int i = 0; i < 2; i++)
    {
        if (sticks[i] + sticks[i + 1] > sticks[i + 2])
        {
            cout << "TRIANGLE" << endl;
            return;
        }
    }
    for (int i = 0; i < 2; i++)
    {
        if (sticks[i] + sticks[i + 1] == sticks[i + 2])
        {
            cout << "SEGMENT" << endl;
            return;
        }
    }
    cout << "IMPOSSIBLE" << endl;
}
int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    checkTriangle(a, b, c, d);
    return 0;
}