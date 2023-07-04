#include <bits/stdc++.h>
using namespace std;
const int inf = 0x3f3f3f3f;
int ans1, ans2, ans3;

// 签到题一道
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        ans1 = inf, ans2 = inf, ans3 = inf;
        for (int i = 1; i <= n; i++)
        {
            int m;
            string t;
            cin >> m >> t;
            if (t == "01")
                ans1 = min(ans1, m);
            else if (t == "10")
                ans2 = min(ans2, m);
            else if (t == "11")
                ans3 = min(ans3, m);
        }
        if (ans3 == inf && (ans1 == inf || ans2 == inf))
            cout << -1 << endl;
        else
            cout << min(ans3, ans1 + ans2) << endl;
    }

    system("pause");
    return 0;
}