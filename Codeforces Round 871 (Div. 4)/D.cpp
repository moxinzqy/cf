#include <bits/stdc++.h>
using namespace std;
int flg;

// 签到题-中等题
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        if (n < m)
        {
            cout << "NO\n";
            continue;
        }
        queue<int> q;
        q.push(n);
        flg = 0;
        while (q.size())
        {
            auto now = q.front();
            q.pop();
            if (now == m)
            {
                flg = 1;
                break;
            }
            if (now % 3)
                continue;
            int a = now / 3;
            int b = a * 2;
            q.push(a);
            q.push(b);
        }
        if (flg)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    system("pause");
    return 0;
}