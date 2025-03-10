#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, p;
        cin >> n >> k >> p;
        int min_sum = n * (-p);
        int max_sum = n * p;
        if (k < min_sum || k > max_sum)
        {
            cout << -1 << endl;
            continue;
        }
        if (k == 0)
        {
            cout << 0 << endl;
            continue;
        }
        int op = abs(k) / p;
        if (abs(k) % p != 0)
        {
            op++;
        }
        if (op > n)
        {
            op = n;
        }
        cout << op << endl;
    }
    return 0;
}