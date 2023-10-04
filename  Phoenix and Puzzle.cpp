#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long

/*
vector<int>v(n,0);
for(auto &x :v)
cin>>x;
*/

//cout<<"YES"<<endl;
//cout<<"NO"<<endl;


int calcsqrt(int n)
{
    int x=sqrt(n);
    if((x*x)==n)
    {
        return true;
    }
    return false ;
}

void solve ()
{
  int n;
  cin>>n;

   if(n==1)
    {
        cout<< "NO"<<endl;
        return ;
    }

    if((n%2==0 && calcsqrt(n/2)) || (n%4==0 && calcsqrt(n/4)))
    {
        cout<< "YES"<<endl;
        return ;
    }

    cout<< "NO"<<endl;

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
