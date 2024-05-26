#include <bits/stdc++.h>
using namespace std;

#define el "\n"
#define elif else if
#define ll long long

void solve()
{
    int n, m;
    cin >> n >> m;

    n = min(n, m);

    if (n & 1)
        cout << "Akshat" << el;

    else
        cout << "Malvika" << el;
}

signed main()
{
    // your code goes here
    // int deviil;
    // cin >> deviil;
    // while (deviil > 0)
    // {
        solve();
        // deviil--;
    // }
    return 0;
}
