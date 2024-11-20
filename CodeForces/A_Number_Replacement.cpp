#include "bits/stdc++.h"
using namespace std;
using ll = long long;
#define pb push_back
#define mp make_pair

void solve()
{
    int n;
    cin>>n;
    int a[n];
    for(int i = 0;i<n;i++)cin>>a[i];
    string s;
    cin>>s;
    //idea: simple mapping problem
    map<int,char> m;
    for(int i = 0;i<s.size();i++)
    {
        if(!m.count(a[i]))
        {
            m[a[i]] = s[i];
        }
        else
        {
            if(s[i]!=m[a[i]])
            {
                cout<<"NO\n";
                return;
            }
        }
    }
    cout<<"YES\n";
}

int main()
{
    ll tc;  
    cin >> tc;
    while (tc--)
    {
        solve();
    }
}
