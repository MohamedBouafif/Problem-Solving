#include "bits/stdc++.h"
using namespace std;
using  ll =long long;
#define pb push_back
#define mp make_pair
bool srt(const pair<int,int> &a,
            const pair<int,int> &b)
{
    return (a.first > b.first);
}
void solve()
{
    int n;
    cin>>n;
    vector<int> v(n);
    map<int,int,greater<int>> occ;
    for(int i  = 0;i<n;i++)
    {
        cin>>v[i];
        occ[v[i]]++;
    }
    for(auto e:occ)
    {
        if(e.second%2!=0){cout<<"YES\n";return;}
    }
    cout<<"NO\n";
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