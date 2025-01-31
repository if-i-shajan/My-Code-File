//AtCoder Beginner Contest 390
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
    using namespace std;
using namespace __gnu_pbds;

typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> oset;
typedef long long ll;
typedef double dl;

#define endl "\n"
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define fraction()                \
    cout.unsetf(ios::floatfield); \
    cout.precision(10);           \
    cout.setf(ios::fixed, ios::floatfield);

void solve()
{
    vector<int> a(5);
    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }
    int cnt = 0;

    for (int i = 0; i < 4; i++)
    {
        if (a[i] > a[i + 1])
        {
            cnt++;
            swap(a[i], a[i + 1]);
        }
    }

    if (cnt == 1 && is_sorted(a.begin(), a.end()))
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}
int main()
{
    optimize();
    int t = 1;
    while (t--)
    {
        solve();
    }

    return 0;
}