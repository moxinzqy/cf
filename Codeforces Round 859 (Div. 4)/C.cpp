#include <bits/stdc++.h>
#define int long long
using namespace std;
int ans[30];

// 简单+
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        memset(ans, 0, sizeof(ans));
        int n;
        cin >> n;
        string s;
        cin >> s;
        int flg = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (ans[s[i] - 'a'] == 0)
            {
                ans[s[i] - 'a'] = i + 1;
            }
            else
            {
                if ((ans[s[i] - 'a'] & 1) != ((i + 1) & 1))
                    flg = 1; // NO
            }
        }
        if (flg == 1)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    system("pause");
    return 0;
}