#include "bits/stdc++.h"
using namespace std;
using  ll =long long;
#define pb push_back
#define mp make_pair

void solve()
{
    string s,t;
    cin>>s>>t;
    int ans = s.size() + t.size();
    int cnt = 0;
    int i = 0;
    while(i<min(s.size(),t.size()) && s[i] == t[i]){i++;cnt++;}
    if(cnt !=0)
        ans  = ans - cnt + 1;
    cout<<ans<<endl;
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