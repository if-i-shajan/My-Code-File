#include <bits/stdc++.h>
using namespace std;
bool fDate(unordered_map<int, int> &freq)
{
    unordered_map<int, int> required = {{0, 3}, {1, 1}, {3, 1}, {2, 2}, {5, 1}};

    for (auto &[digit, count] : required)
    {
        if (freq[digit] < count)
        {
            return false;
        }
    }
    return true;
}
int mfDate(vector<int> &digits)
{
    unordered_map<int, int> freq;

    for (int i = 0; i < digits.size(); i++)
    {
        freq[digits[i]]++;

        if (fDate(freq))
        {
            return i + 1;
        }
    }
    return 0;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> digits(n);

        for (int i = 0; i < n; i++)
        {
            cin >> digits[i];
        }
        cout << mfDate(digits) << endl;
    }
    return 0;
}