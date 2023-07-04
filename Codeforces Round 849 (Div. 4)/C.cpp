#include <bits/stdc++.h>
#define int long long
using namespace std;

// 秒了
void moxin()
{
    deque<char> dq;
    int n;
    cin >> n;
    string s;
    cin >> s;
    for (int i = 0; i < n; i++)
        dq.push_back(s[i]);
    while ((!dq.empty()) && ((dq.front() == '0' && dq.back() == '1') || (dq.front() == '1' && dq.back() == '0')))
    {
        dq.pop_back();
        dq.pop_front();
    }
    cout << dq.size() << endl;
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