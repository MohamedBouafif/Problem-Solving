#include "bits/stdc++.h"
using namespace std;
#define ll long long


void solve()
{
    string s;
    cin>>s;
    int  n = s.size();
    
    
    set<char> se;
    string t;
    for(int i = 0;i<n;i++)
    {
        if(se.find(s[i])!=se.end())break;
        else {se.insert(s[i]);t+=s[i];}
    }

    for(int i = 0;i<n;i++)
    {
        int j = 0;
        for(;j<t.size();j++)
        {
            if(i+j<n)
            {
                if(s[i+j] != t[j])
                {
                    cout<<"NO\n";
                    return;
                }
            }
            else break;
        }
        i+=j-1;
    }
    cout<<"YES\n";
}
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        solve();
    }
}