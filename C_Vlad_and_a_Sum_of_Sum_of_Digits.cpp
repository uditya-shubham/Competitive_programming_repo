#include "bits/stdc++.h"
using namespace std;

const int mv=200009

int arr[mv];

int sumdig(int ff)
{
    int sum=0;
    while(ff)
    {
        sum+=(ff%10);
        ff=ff/10;
    }

    return sum;
}
int solve()
{
    int n;
    cin>>n;
    cout<<arr[n];
}


int32_t main()
{

      arr[0]=0;
      for (int i = 1; i <= 200009; i++) 
		arr[i] = arr[i - 1] + sumdig(i);

    int Tests = 1;
    cin >> Tests;
    while (Tests--)
    {
        solve();
    }
    return 0;
}

//Uditya Yadav here

    