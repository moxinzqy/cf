#include <bits/stdc++.h>
#define int long long
using namespace std;

// 中等题
void moxin()
{
    int l_flg[30] = {0}, r_flg[30] = {0};
    int ans = 0;
    int n;
    cin >> n;
    string s;
    cin >> s;
    s = ' ' + s;
    for (auto x : s)
        l_flg[x - 'a']++;
    for (auto x : s)
    {
        l_flg[x - 'a']--, r_flg[x - 'a']++;
        int cnt = 0;
        for (int i = 0; i < 26; i++) // 直接扫l_flg,r_flg数组就行，不用再扫一遍s
        {
            cnt += min(1LL, l_flg[i]) + min(1LL, r_flg[i]);
        }
        ans = max(cnt, ans);
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