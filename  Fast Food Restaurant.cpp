#include <bits/stdc++.h>
using namespace std;

#define el "\n"
#define elif else if
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
  int ans=0;
  int a[5];
  for(int i=0;i<3;i++)
  cin>>a[i];

for(int i=0;i<3;i++)
{
    if(a[i]){
       ans++;
       a[i]--;
    }

}

sort(a,a+3,greater<int>());

if(a[0] && a[1])
{
    ans++;
    a[0]--;
    a[1]--;
}
  
     if(a[1] && a[2])
   {
    ans++;
    a[1]--;
    a[2]--;
   }

   if(a[0]&& a[2])
   {
    ans++;
    a[0]--;
    a[2]--;
   }

 

   if(a[0]>0 && a[1]>0 && a[2]>0)
   {
    ans++;
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



















