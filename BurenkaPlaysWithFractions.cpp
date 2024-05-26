#include <bits/stdc++.h>
using namespace std;

#define el "\n"
#define elif else if
#define ll long long

void solve()
{
    ll n;
    cin>>n;
    if(n>=0)
     {
        cout<<n<<el;
        return;
     }
     n=-n;

    ll x=n%10;
    n=n/10;
     ll y=n%10;
     n=n/10;
     if(x>y)
     n=n*10+y;
     else
     n=n*10+x;

     n=-n;

     cout<<n<<el;

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
