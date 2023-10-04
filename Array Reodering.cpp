#include <bits/stdc++.h>
using namespace std;

#define el "\n"
#define elif else if
#define ll long long


bool compare(int a , int b)
{
    return a%2<b%2;
}

void solve ()
{
 int n,ans=0;
 cin>>n;

    vector<int>v(n,0);
    for(auto &x :v){
    cin>>x;
    }



  sort(v.begin(), v.end(),compare);

    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(__gcd(v[i],v[j]*2)>1)
            ans++;
        }
    }



cout<<ans<<el;




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



















