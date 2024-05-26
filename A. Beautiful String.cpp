#include <bits/stdc++.h>
using namespace std;

#define el "\n"
#define ll long long

void solve()
{
    string s;
    cin >> s;

    int n = s.size();
    bool flag = 0;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == s[i + 1] && s[i] != '?')
        {
            flag = 1;
            break;
        }

        else if (s[i] == '?' && s[i - 1] != 'a' && s[i + 1] != 'a')
            s[i] = 'a';

        else if (s[i] == '?' && s[i - 1] != 'b' && s[i + 1] != 'b')
            s[i] = 'b';

        else if (s[i] == '?' && s[i - 1] != 'c' && s[i + 1] != 'c')
            s[i] = 'c';
    }

    if (flag)
        cout << -1 << el;
    else
        cout << s << el;
}

signed main()
{
    // your code goes here
    int deviil;
    cin >> deviil;
    while (deviil > 0)
    {
        solve();
        deviil--;
    }
    return 0;
}
