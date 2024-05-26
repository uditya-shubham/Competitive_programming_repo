#include <bits/stdc++.h>
using namespace std;

#define el "\n"
#define ll long long

int main()
{
   int n;
   cin>>n;
   vector<int>v;
   for(int i=0;i<n;i++)
   {
    int x;
    cin>>x;
    v.push_back(x);
   }
      
    int ans=1;

    int temp=1;

    for(int i=1;i<n;i++)
    {
        if(v[i]<v[i-1])
          temp=1;
        else
        temp++;

        ans=max(ans,temp);
    }
 
 cout<<ans<<el;
   
    return 0;
}