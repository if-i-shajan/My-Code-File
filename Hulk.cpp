// 705A.Hulk codeforces
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    cout << "I hate";
    for (int i = 1; i < n; i++)
    {
        if (i % 2 == 1)
        {
            cout << " that I love";
        }
        else
        {
            cout << " that I hate";
        }
    }
    cout << " it";
    return 0;
}