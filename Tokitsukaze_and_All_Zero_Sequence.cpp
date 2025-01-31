//1678A
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        int cnt = count(a.begin(), a.end(), 0);
        if (cnt > 0)
        {
            cout << n - cnt << endl;
        }
        else
        {
            bool same = false;
            for (int i = 1; i < n; i++)
            {
                if (a[i] == a[i - 1])
                {
                    same = true;
                    break;
                }
            }
            if (same)
                cout << n << endl;
            else
                cout << n + 1 << endl;
        }
    }
    return 0;
}