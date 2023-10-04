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
    unordered_map<int,int>mp;

    vector<int>v(n,0);
    for(auto &x :v){
    cin>>x;
    }

    for(int i=n-1;i>=0;i--)
    {
        if(mp.find(v[i])!=mp.end())
        {
            cout<<n-mp.size()<<el;
            return;
        }
       mp[v[i]]++;

    }

    cout<<0<<el;

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
