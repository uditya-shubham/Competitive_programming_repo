#include <bits/stdc++.h>
using namespace std;

#define el "\n"
#define ll long long

void solve()
{
    ll n;
    cin >> n;


    int A[n], cnt[2][n + 1];
    cnt[0][0] = cnt[1][0] = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
        cnt[0][i + 1] = cnt[0][i] + (A[i] == 0 ? 1 : 0);
        cnt[1][i + 1] = cnt[1][i] + (A[i] == 1 ? 1 : 0);
    }
    int ans = n - 1;
    for (int last_zero = 0; last_zero <= n; last_zero++)
        ans = min(ans, max(cnt[1][last_zero], cnt[0][n] - cnt[0][last_zero]));
    cout << ans << endl;
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
