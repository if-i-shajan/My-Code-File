#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int N;
    cin >> N;
    while (N--) // test case
    {
        int a;
        cin >> a;
        long long ans = 0;
        vector<ll> v(a); // stl vector
        for (int i = 0; i < a; i++)
        {
            cin >> v[i];
        }
        for (ll i = 0; i < a - 1; i++)
        {
            for (ll j = i + 1; j < a; j++)
            {
                ans += v[i] * v[j]; // test case example
            }
        }

        cout << ans << endl;
    }
}