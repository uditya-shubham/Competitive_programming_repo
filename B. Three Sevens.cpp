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
    ll m;
    cin >> m;

    if(m==1)
    {
        int x;
        cin>>x;
        int y;
        cin>>y;
        cout<<y<<el;
    }
    unordered_map<ll,ll>mp;
     
     while(m--)
     {
        ll n;
        cin>>n;
        while(n--)
        {
           int x;
           cin>>x;
           mp[x]++;
        }

     }


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
