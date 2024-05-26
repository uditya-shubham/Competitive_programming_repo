#include <bits/stdc++.h>
using namespace std;

#define el "\n"
#define ll long long

void solve()
{
    ll n;
    cin >> n;

   deque<ll>dq;
   int a;
   cin>>a;
   dq.push_front(a);
   n--;

   while(n--)
   {
    cin>>a;
    if(a<dq.front())
    dq.push_front(a);
    else
    dq.push_back(a);
   }


   for(auto x:dq)
   cout<<x<<" ";

   cout<<el;
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
