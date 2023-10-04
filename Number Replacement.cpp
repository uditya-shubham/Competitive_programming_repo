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

    string s;
    cin>>s;


    unordered_map<int,char>mp;
    bool flag=0;

     for(int i=0;i<n;i++)
     {  
        if(mp.find(v[i]) != mp.end()  && mp[v[i]]!=s[i])
        flag=1;

        else
        mp[v[i]]=s[i];

     }

    
     if(flag)
     cout<<"NO"<<el;
     else
     cout<<"YES"<<el;



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



















