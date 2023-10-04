#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long



void solve ()
{
    int n;
    cin>>n;  

    int arr[n];

    for(int i=0;i<n;i++)
    cin>>arr[i];

    sort(arr , arr+n);


      if(arr[0]==arr[n-(n/2)])
   {
       cout<<-1<<endl;
        return;
   }


    vector<int>ans;
    int x=n/2;

    for(int i=0; i<x ;i++)
    {
        ans.push_back(arr[i]);
        ans.push_back(arr[n-i-1]);

    }

       if(n%2==1)
      ans.push_back(arr[(n/2)]); 

       for(int i=0;i<n;i++)
    cout<<ans[i]<<" ";
    cout<<endl; 
    
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
