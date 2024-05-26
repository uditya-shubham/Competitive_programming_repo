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
   cin>>n;
   vector<int>boys;
   for(int i=0;i<n;i++)
   {
    int x;
    cin>>x;
    boys.push_back(x);
   }

   int m;
   cin>>m;
   vector<int>girls;
   for(int i=0;i<m;i++)
   {
    int x;
    cin>>x;
    girls.push_back(x);
   }

   
   sort(boys.begin(),boys.end());
   sort(girls.begin(),girls.end());
   int ans=0;

   for(int i=0;i<n;i++)
   {
    for(int j=0;j<m;j++)
    {
        if(abs(boys[i]-girls[j])<=1)
        {
            ans++;
            girls[j]=10000;
            break;
        }
    }
   }

   cout<<ans<<el;


    
}

signed main()
{
    // your code goes here
    int deviil=1;
    // cin >> deviil;
    while (deviil > 0)
    {
        solve();
        deviil--;
    }
    return 0;
}
