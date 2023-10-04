#include <bits/stdc++.h>
using namespace std;

#define el "\n"
#define elif else if
#define ll long long

void solve ()
{
 ll n;
 cin>>n;

vector<ll>v(n,0);
for(ll i=0;i<n;i++){
cin>>v[i];
}

bool flag=0;
for(int i=0;i<n;i++)
{
    if(v[i]>=v[i-1]){
    flag=1;
    break;

    }
}


if(flag)
cout<<"YES"<<endl;
else
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



















