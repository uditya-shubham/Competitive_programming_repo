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
	int a[n];

	for (int i = 1; i <= n; i++)
		cin >> a[i];

	int x = 1;
	while (x < n && a[x] <= a[x + 1])
		x++;

	int y = 1;
	while (y < n && a[n - y] >= a[n - y + 1])
		y++;

	if (x + y >= n)
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
