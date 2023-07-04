#include <bits/stdc++.h>
#define int long long
using namespace std;
const int maxn = 2e5 + 5;
const int MOD = 998244353;

void moxin()
{
    int n;
    cin >> n;
    string s;
    cin >> s; // 遇到下一个跟它相同的字符为止
    string ans;
    int flg = 0;
    for (int i = 0; i < n;)
    {
        for (int j = i; j < n;)
        {
            if (s[i] != s[j] || i == j)
                j++;
            else if (s[i] == s[j] && i != j)
            {
                i = j + 1;
                ans += s[j];
                break;
            }
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