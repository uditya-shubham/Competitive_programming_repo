#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long

/*
vector<int>v(n,0);
for(auto &x :v)
cin>>x;
*/

//cout<<"YES"<<endl;
//cout<<"NO"<<endl;
void solve ()
{
  int n,m;
  cin>>n>>m;
  int sum=0;

   vector<int>v(n,0);
	for(auto &x :v)
     {
		cin>>x;
		sum+=x;
	 }


	 if(sum<=m)
	 {
		cout<<0<<endl;
		return;
	 }

	 cout<<abs(sum-m)<<endl;
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
