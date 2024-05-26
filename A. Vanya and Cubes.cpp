#include <bits/stdc++.h>
using namespace std;

#define el "\n"
#define elif else if
#define ll long long

void solve ()
{
 int n;
 cin>>n;
 int ans=0;

 for(int i=1;i< 800 ;i++)
 {
    int temp=(i*(i+1))/2;
    n-=temp;
    if(n>=0)
    ans++;
    else
    break;
 }

cout<<ans<<el;
}




//cout<<"YES"<<endl;
//cout<<"NO"<<endl;




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



















