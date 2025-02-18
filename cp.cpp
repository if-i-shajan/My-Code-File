#include <bits/stdc++.h>
using namespace std;
int main()
{
    string S;
    cin >> S;
    int count = 0, n = S.length();
    for (int i = 0; i < n - 2; i++)
    {
        for (int j = i + 1; j < n - 1; j++)
        {
            int k = 2 * j - i;
            if (k < n && S[i] == 'A' && S[j] == 'B' && S[k] == 'C')
            {
                count++;
            }
        }
    }
    cout << count << endl;
    return 0;
}