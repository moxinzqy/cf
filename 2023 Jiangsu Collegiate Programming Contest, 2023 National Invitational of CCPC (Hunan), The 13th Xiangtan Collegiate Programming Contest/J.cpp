#include <bits/stdc++.h>
#define int long long
using namespace std;
const int maxn = 2e5 + 5;
const int MOD = 998244353;
string s[55];

void moxin()
{
    int n;
    cin >> n;
    int maxx = 0;
    for (int i = 1; i <= n; i++)
        cin >> s[i];
    for (int i = 1; i <= n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            for (int k = 0; k < s[i].size(); k++) // 枚举所有子串
            {
                string tar;
                for (int len = k; len < s[i].size(); len++)
                {
                    tar += s[i][len];
                    if (tar.size() <= maxx)
                        continue;
                    int flg = s[j].find(tar);
                    if (flg != s[i].npos)
                        maxx = max(maxx, (int)tar.size());
                }
            }
        }
    }
    cout << maxx << endl;
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