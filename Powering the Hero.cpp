#include <bits/stdc++.h>
using namespace std;

#define el "\n"
#define elif else if
#define ll long long

void solve()
{
   ll n;
   cin>>n;

   vector<ll>v(n,0);

   for(auto &x:v)
   cin>>x;

   ll ans=0;

   priority_queue<ll>pq;

   for(int i=0;i<n;i++)
   {
    if(v[i])
    pq.push(v[i]);

    else if(pq.size())

    {

        ans+=pq.top();
        pq.pop();
    }
    
   }
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
