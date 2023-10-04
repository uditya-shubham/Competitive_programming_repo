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
  int a,b,ans=0;
  cin>>a>>b;

  if(a==b){
    cout<<0<<el;
    return;
  }
if(a > b)	swap(a, b);
	
	
	int ans = 0;
  
	b /= a;
	
	while(b >= 8)
		b /= 8, ++ans;
	if(b > 1)	++ans;

  

    while(a%2==0 && a>b)
    {
        a=a/2;
        ans++;
    }
       
  }


 if(a==b)
 {
    cout<<ans <<"SDSFGHTHB"<<endl;
    return;
 }


   cout<<-1<<endl;


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



















