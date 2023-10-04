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
  int n,k;
  cin>>n>>k;

  vector<int>v(n,0);
   for(auto &x :v){
      cin>>x;
   }
  bool flag=0;
   int first=0,last=0;

   for(int i=0;i<n;i++)
   {

    if(v[i]==k)
    {
    flag=1;
    break;
    }

   }

  

     if(!flag)
     cout<<"NO"<<endl;

     else
     cout<<"YES"<<endl;



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
