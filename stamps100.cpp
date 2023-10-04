#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long



void solve ()
{
     int n;
   cin>>n;

   string s;
   cin>>s;
   int i=0;

   for( ;i<n ; i++)
   {
     if(s[i]=='1')
	 break;
   }

   i++;
   while(i<n){

   s[i]='0';
   i++;

   }

   cout<<s<<endl;
   

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

