#include <bits/stdc++.h>
using namespace std;

#define el "\n"
#define ll long long

void solve()
{
    int n;
    cin >> n;

    vector<int> v1;
    vector<int> v2;

    bool flag = 1;

    for (int i = 0; i <n; i++)
    {
        if (flag)
        {
            v1.push_back(2 * n -i-1);
            v2.push_back(i+1);
            flag = 0;
        }

        else
        {
            v2.push_back(i+1);
            v1.push_back(2 * n - i-1);
            flag = 1;
        }
    }

    v2[n-1] = 2*n;

    for (auto x : v1)
        cout << x << " ";
    cout << el;

    for (auto x : v2)
        cout << x << " ";
    cout << el;
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
