#include <bits/stdc++.h>
using namespace std;

#define el "\n"
#define elif else if
#define ll long long

void solve()
{
   ll n;
   cin>>n;

   bool flag=0;

   while(n>1)
   {
    if(n%2)
    {
      flag=1;
      break;
    }
    n=n/2;

   }

   if(flag)
   cout<<"YES"<<el;
   else
   cout<<"NO"<<el;

    
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
