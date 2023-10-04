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
	ll a, b;
	cin >> a >> b;

	int count = a + 3;
	for (int i = (b == 1 ? 1 : 0); i < count; ++i)
	{
		int ans = i;
		int A = a;
		int B = b + i;
		while (A != 0)
		{
			ans++;
			A /= B;
		}
		count = min(count, ans);
	}
	cout << count<<el;

	// so the main point is first increase then divide , dont do both at the same time (one by one).
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
