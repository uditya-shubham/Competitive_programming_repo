//{ Driver Code Starts
//Initial template for C++
#include<bits/stdc++.h>
using namespace std;


class Solution {
  public:
    bool areKAnagrams(string s1, string s2, int k) {
       if (s1.length() != s2.length()) {
        return false;
    }
 
    map<char, int> mp;
    for (int i = 0; i < s1.length(); i++) {
        char ch = s1[i];
        mp[ch]++;
    }
 
    for (int i = 0; i < s2.length(); i++) {
        char ch = s2[i];
        if (mp[ch] > 0) {
            mp[ch]--;
        }
    }
 
    int count = 0;
    for (auto it = mp.begin(); it != mp.end(); it++) {
        count += it->second;
    }
 
    if (count > k)
        return false;
    else
        return true;
        
    }
};
int main()
{
    string str1,str2;
    cin>>str1>>str2;
    int k;
    cin>>k;
    Solution ob;
    if(ob.areKAnagrams(str1, str2, k) == true)
        cout<<"1\n";
    else
        cout<<"0\n";
}