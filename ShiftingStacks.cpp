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
	ll n;
	cin>>n;

	vector<ll>v(n,0);
    for(auto &x :v)
     cin>>x;

	 ll sum=0,a=0;
     
	 for (int i = 0; i < n; ++i) {
        a += i;
        sum += v[i];
        if (sum < a) {
            cout << "NO\n";   // as blocks can nly be moved towards right.
            return;
        }
    }
    cout << "YES\n";

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



















