#include <bits/stdc++.h>
using namespace std;

#define el "\n"
#define elif else if
#define ll long long

void solve ()
{
 int n;
 cin>>n;


vector<int>v(n,0);
for(auto &x :v){
cin>>x;
}
sort(v.begin(),v.end());

    if(v[n-3]+v[n-2] <=v[n-1])
    cout<<"NO"<<endl;

    else
    {
        cout<<"YES"<<endl;
        cout<<v[n-1]<<" ";
        for(int i=n-3;i>=0;i-- )
        cout<<v[i]<<" ";

        cout<<v[n-2]<<endl;
    }



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



















