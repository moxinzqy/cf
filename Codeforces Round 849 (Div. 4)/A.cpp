#include <bits/stdc++.h>
#define int long long
using namespace std;
map<char, int> mp;

// 秒了
void moxin()
{
    string s = "codeforces";
    for (auto x : s)
    {
        mp[x]++;
    }
    char ch;
    cin >> ch;
    if (mp[ch])
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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