#include <bits/stdc++.h>
using namespace std;

#define el "\n"
#define elif else if
#define ll long long

void solve()
{
   char chr [10][10]={'\0'};
   bool flag=0;
// taking input.
  for(int i=0;i<8;i++)
  {
    for(int j=0;j<8;j++)
    {  
        char ch;
        cin>>ch;
       chr[i][j]=ch;
    }
  }


// checking in the mtrix.
    for(int i=0;i<8;i++)
    {
       int red=0;
       
        for(int j = 0; j< 8; j++)
        {
            if(chr[i][j]=='R')
            red++;
        }

        if(red==8)
        {
            cout<<'R'<<el;
            return;
        }
    }   

    
    cout<<'B'<<el;
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
