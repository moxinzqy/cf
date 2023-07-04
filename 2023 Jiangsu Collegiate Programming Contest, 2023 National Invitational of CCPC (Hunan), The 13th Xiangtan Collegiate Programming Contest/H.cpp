#include <bits/stdc++.h>
#define int long long
using namespace std;
const int maxn = 2e5 + 5;
const int MOD = 998244353;
int a[maxn], b[maxn];

void moxin()
{
    int n;
    cin >> n;
    string s, t;
    cin >> s >> t;
    int flg = 0; // 改变量
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        a[i] = s[i] - 'a';
        b[i] = t[i] - 'a';
    }
    for (int i = 0; i < n; i++)
    {
        if ((a[i] + flg) % 26 == b[i])
            continue;
        else
        {
            ans++;
            flg += ((b[i] - (a[i] + flg) % 26) + 26) % 26; // 累积
        }
    }
    cout << ans << endl;
}

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    moxin();
    system("pause");
    return 0;
}
