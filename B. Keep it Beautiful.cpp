#include <bits/stdc++.h>
using namespace std;

#define el "\n"
#define ll long long
/*
vector<int>v(q,0);
for(auto &x :v)
cin>>x;
*/

// cout<<"YES"<<endl;
// cout<<"NO"<<endl;

void solve()
{
    ll q;
    cin >> q;
    int v[q];
    int x;
    for (int i = 0; i < q; i++)
    {
        cin >> x;
        v[x - 1] = i;
    }
    int mx_pos = 0;
    int mn_pos = q;
    for (int i = 0; i < q; i++)
    {
        mx_pos = max(mx_pos, v[i]);
        mn_pos = min(mn_pos, v[i]);
        if (mx_pos - mn_pos == i)
            cout << "1";
        else
            cout << "0";
    }
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
