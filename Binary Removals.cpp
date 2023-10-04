#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long

void solve ()
{
   int n,x;
   cin>>n>>x;

   ll ans=0;

   vector<int>h(n,0);
    for(auto &x :h)
    cin>>x;

    int x= *max_element(h.begin(),h.end());

     

  cout<<ans<<endl;

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
