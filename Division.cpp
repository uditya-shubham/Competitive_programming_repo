#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long



void solve ()
{
    int n,k;
    cin>>n>>k;

	int l=1,h=n,temp=1;

	while(l<=h)
	{
		temp^=1;
		if(temp)
		cout<<l++<<" ";
		else
		cout<<h--<<" ";
		
	}

	cout<<endl;

	
    
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
