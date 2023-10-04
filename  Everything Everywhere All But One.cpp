#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long

/*
vector<int>v(n,0);
for(auto &x :v)
cin>>x;
*/

void solve ()
{
  int n;
  cin>>n;
  int sum=0;
   vector<int>v(n,0);

for(auto &x :v){
cin>>x;
sum+=x;
}


  for(int i=0;i<n;i++)
  {
    int a=sum-v[i];

    if(a==((n-1)*v[i]))
     {
        cout<<"YES"<<endl;
        return;
     }
  }

  cout<<"NO"<<endl;

	
    
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
