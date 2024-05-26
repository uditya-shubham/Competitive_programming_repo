#include <bits/stdc++.h>
using namespace std;

#define el "\n"
#define ll long long
/*
vector<int>v(n,0);
for(auto &x :v)
cin>>x;
*/

// cout<<"YES"<<endl;
// cout<<"NO"<<endl;

void solve()
{
    ll n;
    cin >> n;

    int b;
    cin>>b;

    ll ans = 0;
    // int b = 0;

    for (int i = 1; i < n ; i++)

    {
        int a;
        cin >> a;

        int c = min(a, b);
        int d = max(a, b);

        while (c *2 < d)
        {
            c = c * 2;
            ans++;
        }
        b = a;
    }

    cout << ans << el;
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
