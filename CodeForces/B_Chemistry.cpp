#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    map<char,int> mp;
    for(auto e:s)
    {
        mp[e]++;
    }
    int impaire = 0;
    for(auto e:mp)
    {
        if(e.second%2!=0){impaire+=e.second;}
        
    }
    int paire = s.size() - impaire;
    if((n - k) %2 == 0 )
    {
        if(k>=impaire && (k-impaire)%2 ==0 )cout<<"YES\n"
    }
    else cout<<"NO\n";
    
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}