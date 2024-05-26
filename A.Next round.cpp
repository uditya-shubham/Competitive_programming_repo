#include <bits/stdc++.h>
using namespace std;

#define el "\n"
#define elif else if
#define ll long long

void solve ()
{
 int n,k;
 cin>>n>>k;


vector<int>v(n,0);
for(auto &x :v){
cin>>x;
}

int i=0,ans=0;

while(i<n)
{
    if(v[i]>0 and v[i]>=v[k]){
  ans++;
    
    }
    i++;
  
}

cout<<ans<<el;



//cout<<"YES"<<endl;
//cout<<"NO"<<endl;
}



signed main() {
	// your code goes here
	int deviil=1;
	// cin>>deviil;
	while(deviil>0)
	{
	    solve();
	    deviil--;
	}
	return 0;
}



















