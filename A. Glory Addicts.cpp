#include <bits/stdc++.h>
using namespace std;

#define el "\n"
#define ll long long
/*
vector<int>v(n,0);
for(auto &x :v)
cin>>x;
*/

// cout<<"YES"<<endl;
// cout<<"NO"<<endl;

void solve()
{
    ll n;
    cin >> n;

    int num, flag = 0, first = -1, last = -1;
    while (n--)
    {
        cin >> num;
        if (flag)
        {
            if (num >= last and num <= first)
            {
                last = num;
                cout << 1;
            }
            else
                cout << 0;
        }
        else
        {
            if (first == -1)
            {
                first = num;
                last = num;
                cout << 1;
            }
            else if (num >= last)
            {
                last = num;
                cout << 1;
            }
            else if (num<=first)
            {
                last = num;
                flag = 1;
                cout << 1;
            }
            else
                cout << 0;
        }
    }
    cout << endl;
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
