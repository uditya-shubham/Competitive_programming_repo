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

    int arr[n][5];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> arr[i][j];
        }
    }
    bool ans = false;
    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            int d1 = 0, d2 = 0, d3 = 0;
            
            for (int k = 0; k < n; k++)
            {
                if (arr[k][i] && arr[k][j])
                {
                    d3++;
                }
                else if (arr[k][i])
                {
                    d1++;
                }
                else if (arr[k][j])
                {
                    d2++;
                }
            }
            if (d1 + d2 + d3 == n && d1 <= n / 2 && d2 <= n / 2)
            {
                ans = true;
            }
        }
    }
    if (ans)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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
