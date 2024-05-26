#include "bits/stdc++.h"
#define int long long
#define uint unsigned long long
#define vi vector<int>
#define vvi vector<vi >
#define vb vector<bool>
#define vvb vector<vb >
#define fr(i,n) for(int i=0; i<(n); i++)
#define rep(i,a,n) for(int i=(a); i<=(n); i++)
#define nl cout<<"\n"
#define dbg(var) cout<<#var<<"="<<var<<" "
#define all(v) v.begin(),v.end()
#define sz(v) (int)(v.size())
#define srt(v)  sort(v.begin(),v.end())         // sort 
#define mxe(v)  *max_element(v.begin(),v.end())     // find max element in vector
#define mne(v)  *min_element(v.begin(),v.end())     // find min element in vector
#define unq(v)  v.resize(distance(v.begin(), unique(v.begin(), v.end())));
// make sure to sort before applying unique // else only consecutive duplicates would be removed 
#define bin(x,y)  bitset<y>(x) 
using namespace std;
int MOD=1e9+7;      // Hardcoded, directly change from here for functions!



void modadd(int &a , int b) {a=((a%MOD)+(b%MOD))%MOD;}
void modsub(int &a , int b) {a=((a%MOD)-(b%MOD)+MOD)%MOD;}
void modmul(int &a , int b) {a=((a%MOD)*(b%MOD))%MOD;}
// ================================== take ip/op like vector,pairs directly!==================================
template<typename typC,typename typD> istream &operator>>(istream &cin,pair<typC,typD> &a) { return cin>>a.first>>a.second; }
template<typename typC> istream &operator>>(istream &cin,vector<typC> &a) { for (auto &x:a) cin>>x; return cin; }
template<typename typC,typename typD> ostream &operator<<(ostream &cout,const pair<typC,typD> &a) { return cout<<a.first<<' '<<a.second; }
template<typename typC,typename typD> ostream &operator<<(ostream &cout,const vector<pair<typC,typD>> &a) { for (auto &x:a) cout<<x<<'\n'; return cout; }
template<typename typC> ostream &operator<<(ostream &cout,const vector<typC> &a) { int n=a.size(); if (!n) return cout; cout<<a[0]; for (int i=1; i<n; i++) cout<<' '<<a[i]; return cout; }
// ===================================END Of the input module ==========================================


// Remember:-
// use sqrtl() instead of sqrt() for long long 
// if a[i] goes to 10^9 check for primes upto sqrt(10^9) i.e 31623
//use partial_sum(a.begin(),a.end(),presum) for presum(also a vector).
// use accumulate(a.begin(), a.end(),sum) for simple whole sum(int sum=0;)


void solve(){
    int n=1,q;
    cin>>n>>q;

    vi a(n);
    cin>>a;
    sort(a.begin(),a.end(),greater<int>());

    vector<int>presum(n+1);

     presum[1]=a[0];
     for(int i=1;i<n;i++)
     {
        presum[i+1]=presum[i]+a[i];
     }

     while(q--)
     {
        int x; cin>>x;
        int ans=-1;
        
        int l=1,r=n;

        while(l<=r)
        {
            int mid=l+(r-l)/2;

            if(presum[mid]>=x)
            {
                ans=mid;
                r=mid-1;
            }
            else
            l=mid+1;
        }

        cout<<ans;
        nl;
     }
    
}



int32_t main()
{
 
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);

    int Tests = 1;
    cin >> Tests;
    while (Tests--)
    {
        solve();
    }
    return 0;
}

//Uditya Yadav here

    