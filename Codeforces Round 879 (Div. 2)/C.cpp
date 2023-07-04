#include <bits/stdc++.h>
#define int long long
using namespace std;
const int maxn = 2e5 + 5;
const int MOD = 998244353;

// 静下心一下子就改对了
void moxin()
{
    int n;
    cin >> n;
    string s, t;
    cin >> s >> t;
    int cnt1 = 0, cnt2 = 0, cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] != t[i])
            cnt1++;
        if (s[i] != t[n - i - 1])
            cnt2++;
    }
    if (cnt1 == 0 || cnt1 == 1)
    {
        cout << cnt1 << endl;
        return;
    }
    else if (cnt2 == 0 || cnt2 == 1)
    {
        cout << 2 << endl;
        return;
    }
    if (cnt1 > cnt2) // 倒着改更好
    {
        if (cnt2 & 1) // odd
            cout << 2 * cnt2 << endl;
        else
            cout << 2 * cnt2 - 1 << endl;
    }
    else if (cnt1 == cnt2)
    {
        cout << 2 * cnt1 - 1 << endl;
    }
    else
    {
        if (cnt1 & 1) // odd
            cout << 2 * cnt1 - 1 << endl;
        else
            cout << 2 * cnt1 << endl;
    }
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