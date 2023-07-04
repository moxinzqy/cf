#include <bits/stdc++.h>
using namespace std;

// 中等题
// 注意vector的用法,从1开始就要n+1,建一个答案数组来存每一次的选择
void moxin()
{
    int n, m;
    cin >> m;
    unordered_map<int, int> mp;
    vector<vector<int>> a(m + 1); // 一维扩充法
    vector<int> ans(m + 1);
    for (int i = 1; i <= m; i++)
    {
        cin >> n;
        a[i].resize(n + 1); // vector二维数组
        for (int j = 1; j <= n; j++)
        {
            cin >> a[i][j];
        }
    }
    for (int i = m; i >= 1; i--)
    {
        int flg = -1;
        for (auto y : a[i])
        {
            if (mp[y] == 0)
                mp[y]++, flg = y;
        }
        if (flg == -1)
        {
            cout << -1 << endl;
            return;
        }
        ans[i] = flg;
    }
    for (int i = 1; i <= m; i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
}

int main()
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