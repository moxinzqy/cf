#include <bits/stdc++.h>
using namespace std;

// 签到题一道
inline int read()
{
    int x = 0, f = 1;
    char ch = getchar();
    while (ch < '0' || ch > '9')
    {
        if (ch == '-')
            f = -1;
        ch = getchar();
    }
    while (ch >= '0' && ch <= '9')
    {
        x = x * 10 + ch - 48;
        ch = getchar();
    }
    return x * f;
}

int main()
{
    int t;
    t = read();
    string moban = "codeforces";
    while (t--)
    {
        string s;
        cin >> s;
        int ans = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] != moban[i])
                ans++;
        }
        cout << ans << endl;
    }
    system("pause");
    return 0;
}