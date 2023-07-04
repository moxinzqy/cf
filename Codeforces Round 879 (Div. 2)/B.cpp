#include <bits/stdc++.h>
#define int long long
using namespace std;
const int maxn = 2e5 + 5;
const int MOD = 998244353;

void moxin()
{
    string l, r;
    cin >> l >> r;
    reverse(l.begin(), l.end());
    reverse(r.begin(), r.end());
    while (l.size() != r.size())
    {
        if (l.size() < r.size())
            l.push_back('0');
        else
            l.push_back('0');
    }
    int ans = 0;
    for (int i = l.size() - 1; i >= 0; i--)
    {
        if (l[i] != r[i])
        {
            ans += abs(l[i] - r[i]);
            ans += i * 9;
            break;
        }
    }
    cout << ans << endl;
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