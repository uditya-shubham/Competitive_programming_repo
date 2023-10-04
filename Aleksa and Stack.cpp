#include <bits/stdc++.h>
using namespace std;

#define el "\n"
#define ll long long
/*
vector<int>v(n,0);
for(auto &x :v)
cin>>x;
*/

//cout<<"YES"<<endl;
//cout<<"NO"<<endl;


void sieve_of_eratosthenes(int n ,int a ,int m)
{
    bool is_prime[n + 1];
    memset(is_prime, true, sizeof(is_prime));
    is_prime[0] = is_prime[1] = false;
    for (int p = 2; p * p <= n; p++) {
        if (is_prime[p]) {
            for (int i = p * p; i <= n; i += p) {
                is_prime[i] = false;
            }
        }
    }
    for (int i = 7; i <= n; i++) {
        if (is_prime[i]) {
            cout << i << " ";
            a++;
            if(a==m)
            return;
        }
    }
}

void solve ()
{
  int n;
  cin>>n;
  int m=n;
  n=n*10;

  int a=0;

//   if(n==3)
//   {
//    cout<<2<<" "<<3<<" "<<6<<endl;
//    return;
//   }


//   if(n==4)
//   {
//    cout<<2<<" "<<3<<" "<<6<<" "<<7<<endl;
//    return;
//   }

//    if(n==5)
//   {
//    cout<<2<<" "<<3<<" "<<6<<" "<<7<<" "<<8<<endl;
//    return;
//   }

//     if(n==6)
//   {
//    cout<<2<<" "<<3<<" "<<6<<" "<<7<<" "<<8<<" "<<11<<endl;
//    return;
//   }

  
    sieve_of_eratosthenes(n,a,m);

 

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
