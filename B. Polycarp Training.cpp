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
    ll n;
    cin >> n;

    vector<int> v(n, 0);
    for (auto &x : v)
        cin >> x;
     

     sort(v.begin(),v.end());

        int i=0,count=1;


        while(i<n)
        {
           if(v[i]>=count)
           count++;
           i++;
        }
         
        cout<<count-1<<el;
        

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
