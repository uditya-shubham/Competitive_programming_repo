#include <bits/stdc++.h>
using namespace std;

#define el "\n"
#define elif else if
#define ll long long

void solve()
{
    ll n, q;
    cin >> n >> q;

    vector<ll> v(n, 0) , pref(n+1,0);
    for (ll &x : v)
        cin >> x;

    sort(v.begin(), v.end());



    for(ll i=1;i<=n;i++)
    pref[i]=pref[i-1]+v[i-1];

    while (q--)
    {
        ll x, y;
        cin >> x >> y;
        
        cout<<pref[n-x+y]-pref[n-x]<<el;
    }
}

signed main()
{
    // your code goes here
    // int deviil;
    // cin >> deviil;
    // while (deviil > 0)
    // {
    solve();
    //     deviil--;
    // }
    return 0;
}
