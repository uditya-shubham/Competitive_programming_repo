#include <bits/stdc++.h>
using namespace std;

#define el "\n"
#define elif else if
#define ll long long

void solve()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    unordered_map<char, int> mp1;
    unordered_map<char, int> mp2;

    for (int i = 0; i < n; i++)
    {
        mp1[s[i]]++;
    }
    //    int x=mp1.size();

    //    cout<<x<<" ";

    int ans = 2;

    for (int i = n - 1; i >= 0; i--)
    {
        mp1[s[i]]--;
        if (mp1[s[i]] == 0)
            mp1.erase(s[i]);
        mp2[s[i]]++;

        int z = mp1.size() + mp2.size();
        ans = max(ans, z);
    }
    cout << ans << el;
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
