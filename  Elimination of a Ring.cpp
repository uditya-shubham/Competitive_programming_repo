#include <bits/stdc++.h>
using namespace std;

#define el "\n"
#define ll long long

/*
vector<int>v(n,0);
for(auto &x :v)
cin>>x;
*/

//cout<<"YES"<<endl;
//cout<<"NO"<<endl;
void solve ()
{
  int n;
  cin>>n;
 std::unordered_map<int,int>mp;

  vector<int>v(n,0);
   for(auto &x :v){
      cin>>x;
      mp[x]++;
   }

int ans=n;


if(mp.size()==2)
{
   ans=(n/2)+1;
}

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
