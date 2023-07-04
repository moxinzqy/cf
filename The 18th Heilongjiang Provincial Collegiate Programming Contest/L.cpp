#include <bits/stdc++.h>
#define int long long
using namespace std;
const int maxn = 2e4 + 5;
const int MOD = 998244353;
int a[maxn], flg[maxn];

void moxin()
{
    int n, k;
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
        cin >> a[i], flg[i] = flg[i - 1] ^ a[i]; // 异或和数组
    // [l..r]的异或和等于flg[r]^flg[l-1]
    int q;
    cin >> q;
    for (int i = 1; i <= q; i++)
    {
        int l, r;
        cin >> l >> r;
        while (l <= r)
        {
            if (flg[r] ^ flg[l - 1] <= k)
            {
                cout << r - l + 1 << endl;
                break;
            }
        }
    }
}

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    moxin();
    system("pause");
    return 0;
}