#include <bits/stdc++.h>
using namespace std;

#define el "\n"
#define ll long long

void solve()
{
    string s;
    cin >> s;
    unordered_map<char,int>mp;
    for(auto x:s)
    mp[x]++;

    if(mp.size()==1)  
{
    cout<<-1<<el;
    return;
}
    int n = s.size();
   
   bool flag=0;

   for(int i=0;i<=n/2;i++)
   {
      if(s[i]!=s[n-i])
      flag=1;

   }

   if(flag)
   cout<<s.size()-1<<el;
   else
   cout<<s.size()<<el;


}

signed main()
{
    // your code goes here
    int deviil;
    cin >> deviil;
    while (deviil > 0)
    {
        solve();
        deviil--;
    }
    return 0;
}
