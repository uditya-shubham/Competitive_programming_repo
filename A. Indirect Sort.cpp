#include <bits/stdc++.h>
using namespace std;

#define el "\n"
#define ll long long

void solve()
{
   int n;
   cin>>n;

   vector<int>v(n,0);

   for(auto &x:v)
   cin>>x;

   if(v[0]==1)
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
