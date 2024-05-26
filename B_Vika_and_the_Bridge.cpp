#include "bits/stdc++.h"
using namespace std;
#define int long long
int MOD=1e9+7;
#define srt(v)  sort(v.begin(),v.end()) 

#define vi vector<int>
#define vvi vector<vi >


// ================================== take ip/op like vector,pairs directly!==================================
template<typename typC,typename typD> istream &operator>>(istream &cin,pair<typC,typD> &a) { return cin>>a.first>>a.second; }
template<typename typC> istream &operator>>(istream &cin,vector<typC> &a) { for (auto &x:a) cin>>x; return cin; }
template<typename typC,typename typD> ostream &operator<<(ostream &cout,const pair<typC,typD> &a) { return cout<<a.first<<' '<<a.second; }
template<typename typC,typename typD> ostream &operator<<(ostream &cout,const vector<pair<typC,typD>> &a) { for (auto &x:a) cout<<x<<'\n'; return cout; }
template<typename typC> ostream &operator<<(ostream &cout,const vector<typC> &a) { int n=a.size(); if (!n) return cout; cout<<a[0]; for (int i=1; i<n; i++) cout<<' '<<a[i]; return cout; }
// ===================================//END OF THE INPUT MODULE  ==========================================


// Remember:-
// use sqrtl() instead of sqrt() for long long 
// if a[i] goes to 10^9 check for primes upto sqrt(10^9) i.e 31623


//my Code
void solve(){
    int n=1;
    cin>>n;
    vi v(n);
    cin>>v;
    
}


//main func
int32_t main()
{
 
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);

    int TestsCases = 1;
    cin >> TestsCases;
    while (TestsCases--)
   {
        solve();
   }
    return 0;
}

//Uditya_Shubham here

    