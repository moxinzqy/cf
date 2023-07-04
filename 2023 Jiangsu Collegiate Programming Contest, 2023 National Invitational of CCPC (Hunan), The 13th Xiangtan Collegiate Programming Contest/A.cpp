#include <bits/stdc++.h>
#define int long long
using namespace std;
const int maxn = 2e5 + 5;
const int MOD = 26;

void _Next(string &x)
{
    for (int i = 0; i < x.size(); i++)
    {
        if (x[i] != 'z')
            x[i]++;
        else
            x[i] = 'a';
    }
}

int qpow(int a, int b)
{
    int res = 1;
    while (b)
    {
        if (b & 1)
            res = a * res % MOD;
        b >>= 1;
        a = a * a % MOD;
    }
    return res;
}

void moxin()
{
    int n, m;
    cin >> n >> m; // n is even
    string s;
    cin >> s;
    string flg = s;
    string ans;
    int i;
    for (i = 1;; i++)
    {
        ans.clear();
        ans += flg.substr(0, flg.size() / 2);
        ans += flg;
        string _add = flg.substr(flg.size() / 2, flg.size() / 2);
        _Next(_add);
        ans += _add;
        if (ans.size() > 2 * m)
            break;
        flg = ans;
    }
    ans = ans.substr(ans.size() - m, m);
    int cnt = (qpow(10, 100) % MOD - i % MOD + MOD) % MOD;
    for (int i = 1; i <= cnt; i++)
        _Next(ans);
    cout << ans << endl;
}

signed main()
{
    moxin();
    system("pause");
    return 0;
}