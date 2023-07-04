#include <bits/stdc++.h>
#define int long long
using namespace std;
const int maxn = 2e5 + 5;
const int MOD = 998244353;

// 翻转类题目是这样的
void moxin()
{
    int n, q;
    cin >> n >> q;
    string s;
    cin >> s;
    for (int i = 1; i <= q; i++)
    {
        char op;
        cin >> op;
        int L, R;
        cin >> L >> R;
        int ans = 0;
        int flg0 = 0, flg1 = 0; // 分割线
        if (op == 'Q')
        {
            for (int i = L; i <= R; i++)
            {
                if (s[i] == '0' && s[i + 1] == '0')
                    flg0++;
                if (s[i] == '1' && s[i + 1] == '1')
                    flg1++;
            }
            ans += min(flg0, flg1);
            ans += 2;
            cout << ans << endl;
        }
        if (op == 'M')
        {
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