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
    int n;
    cin >> n;
    int ans=0;

    vector<int> v(n, 0);

    for (auto &x : v)
        cin >> x;

        for(int i=0;i<n-1;i++)
        if(v[i]>v[i+1])
        ans++;

        int a=v[n-1];
        sort(v.begin() , v.end());

        if(a==v[0])
        ans++;

        cout<<ans<<el;
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
