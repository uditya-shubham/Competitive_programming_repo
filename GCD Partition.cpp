#include <bits/stdc++.h>
using namespace std;

#define el "\n"
#define elif else if
#define ll long long

void solve ()
{
 int n;
 cin>>n;

ll sum =0,ans=1;


vector<int>v(n,0);
for(auto &x :v){
cin>>x;
sum+=x;
}


ll sum1=0;

for(int i=0;i<n-1;i++)
{
    sum-=v[i];
    sum1+=v[i];

    ll Tg=__gcd(sum,sum1);
    ans=max(ans,Tg);
}
 




cout<<ans<<"udity"<<el;




//cout<<"YES"<<endl;
//cout<<"NO"<<endl;
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



















