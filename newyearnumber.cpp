#include <bits/stdc++.h>
using namespace std;

#define el "\n"
#define elif else if
#define ll long long

void solve()
{
    ll n;
    cin >> n ;
    
    int x=n%2020;
    int y= (n-x)/2020-x;

    if(y>=0 && 2020*y+2021*x==n)
    cout<<"YES"<<el;
    else
    cout<<"NO"<<el;
       

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
