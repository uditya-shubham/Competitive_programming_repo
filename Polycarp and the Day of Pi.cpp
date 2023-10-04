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
  string s;
  cin>>s;

  string temp= "31415926535897932384626433832795";

   int ans=0;
   for(int i=0;i<s.size();i++)
   {
      if(temp[i]==s[i])
      ans++;
      else
      break;
   }
   cout<<ans<<el;

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
