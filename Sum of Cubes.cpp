#include <bits/stdc++.h>
using namespace std;

#define el "\n"
#define elif else if
#define ll long long


void solve ()
{
	ll n;
	cin>>n;

     unordered_map<ll,ll>mp;

     for(ll i=1; i<10222;i++)
     {
        ll a= (i*i)*i;
        mp[a]++;
     }

     for(ll i=1 ;i<10222; i++)
     {
        if(mp.find((n-(i*i*i)) )!= mp.end())
        {
            cout<<"YES"<<el;
            return;
        }
     }

     cout<<"NO"<<el;


}
 

   


signed main() {
	// your code goes here
	int deviil;
	cin>>deviil;
	while(deviil>0)
	{
	    solve();
	    deviil--;
	}
	return 0;
}



















