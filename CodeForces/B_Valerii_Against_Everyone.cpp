#include "bits/stdc++.h"
using namespace std;
using  ll =long long;
#define pb push_back
#define mp make_pair

void solve()
{
    int n;
    cin>>n;
    map<int,int> mp;
    for(int i = 0;i<n;i++)
    {
        int x;
        cin>>x;
        mp[x]++;
    }
    for(auto e:mp)
    {
        if(e.second>1){cout<<"YES\n";return;}
    }
    cout<<"NO\n";
    return;

}
int main()
{
    int tc ;
    cin>>tc;
    while(tc--)
    {
        
        solve();
        
    }
}