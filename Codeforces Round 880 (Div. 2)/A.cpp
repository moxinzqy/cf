#include <bits/stdc++.h>
#define int long long
using namespace std;
const int maxn = 2e5 + 5;
const int MOD = 998244353;
int a[105], ans[105];

// 多少个0多少行
void moxin()
{
    memset(ans, 0, sizeof(ans));
    int n;
    cin >> n;
    int flg = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        ans[a[i]]++;
    }
    for (int i = 0; i < 100; i++)
    {
        if (ans[i] < ans[i + 1])
        {
            flg = 1;
            break;
        }
    }
    if (flg == 1)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
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