#include <bits/stdc++.h>
using namespace std;

// 思维题 - 中等题
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int flg = 0;
        vector<int> ve(n + 1);
        for (int i = 0; i < m; i++)
        {
            int x, y;
            cin >> x >> y;
            ve[x]++, ve[y]++;
        }
        for (int i = 1; i <= n; i++)
            if (ve[i] == 1) // 度为1的点
                flg++;
        cout << m - flg << ' ' << flg / (m - flg) << endl;
    }
    system("pause");
    return 0;
}