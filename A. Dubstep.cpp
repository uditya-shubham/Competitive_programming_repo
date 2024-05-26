#include <bits/stdc++.h>
using namespace std;

#define el "\n"
#define ll long long

int main()
{
    string str;
    cin >> str;
    int n = str.size();

    string ans = "";

    for (int i = 0; i < n; i++)
    {

        if (str[i] == 'W' && str[i + 1] == 'U' && str[i + 2] == 'B')
        {
            i += 2;
            if (ans != "")
                ans += " ";
        }

        else
            ans += str[i];
    }

    cout<<ans<<el;

    return 0;
}