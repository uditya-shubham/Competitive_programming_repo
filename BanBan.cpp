#include <bits/stdc++.h>
using namespace std;

#define el "\n"
#define elif else if
#define ll long long

void solve()
{
   ll n;
   cin>>n;

   cout<<n/2+n%2<<el;;
    
    ll l=1;
    ll r=3*n;
   while(l<r)
   {
    cout<<l<<" "<<r<<el;
    l+=3;
    r-=3;
   }
  

}

signed main()
{
    // your code goes here
    ll deviil;
    cin >> deviil;
    while (deviil > 0)
    {
        solve();
        deviil--;
    }
    return 0;
}
