#include <bits/stdc++.h>
using namespace std;

#define el "\n"
#define elif else if
#define ll long long

void solve()
{
   ll n;
   cin>>n;

   if(n<=2)
   {
    cout<<1<<el;
    return;
   }
   
   int a=n/2;
   if(n%2==1)
   a=(n/2)+1;

   cout<<a<<el;

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
