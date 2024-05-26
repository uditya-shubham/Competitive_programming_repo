#include <bits/stdc++.h>
using namespace std;

#define el "\n"
#define elif else if
#define ll long long

void solve ()
{
 
 int n,a,b;
 cin>>n>>a>>b;

 string temp="";
 string ans="";

 

 int x=0;

 while(x<b)
 {
    char ch = 'a'+x;
    temp+=ch;

    x++;
 }
    
// cout<<temp;

int i=n/b;
int j=0;
while(j<i)
{
    ans+=temp;
    j++;
    
}
j=0;

int h=ans.size();
while(h<n)
{
   ans+=temp[j++];
   h++;
}


cout<<ans<<el;
 
}




//cout<<"YES"<<endl;
//cout<<"NO"<<endl;




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



















