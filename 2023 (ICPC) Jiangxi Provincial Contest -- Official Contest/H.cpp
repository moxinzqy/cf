#include <bits/stdc++.h>
#define int long long
using namespace std;
const int maxn = 5e5 + 5;
const int MOD = 998244353;
int p[maxn];

void moxin()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> p[i];
    for (int i = 1; i <= n; i++)
    {
        // if (i - 1 + n - p[i] >= n / 2)
        int pos = lower_bound(p + 1, p + n + 1, p[i]) - p;
        if (pos - i > n / 2 && pos <= n)
        {
            cout << "No" << endl;
            return;
        }
    }
    cout << "Yes" << endl;
}

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        moxin();
    }
    system("pause");
    return 0;
}