#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n, m, a, p, q;
    cin >> n >> m >> a;
    if (n % a == 0)
    {
        p = n / a;
    }
    else
    {
        p = n / a + 1;
    }
    if (m % a == 0)
    {
        q = m / a;
    }
    else
    {
        q = m / a + 1;
    }
    cout << p * q << endl;
    return 0;
}