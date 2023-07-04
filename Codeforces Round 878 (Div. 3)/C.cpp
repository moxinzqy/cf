#include <bits/stdc++.h>
#define int long long
using namespace std;
const int maxn = 2e5 + 5;
const int MOD = 998244353;
int a[maxn];

// (ans - k + 1) * (ans - k + 2) / 2
void moxin()
{
    int n, k, q;
    cin >> n >> k >> q;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    int ans = 0, res = 0;
    for (int i = 1; i <= n;)
    {
        while (1)
        {
            if (a[i] <= q && i <= n)
                i++, ans++;
            else
            {
                i++;
                break;
            }
        }
        if (ans >= k)
            res += (ans - k + 1) * (ans - k + 2) / 2;
        ans = 0;
    }
    cout << res << endl;
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