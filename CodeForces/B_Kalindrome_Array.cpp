#include "bits/stdc++.h"
using namespace std;
#define ll long long

void solve()
{
    int n;
    cin>>n;
    int a[n];
    for(int i = 0;i<n;i++)cin>>a[i];
    set<int> s;
    int cnt = 0;
    map<int,int> mp;
    for(int i = 0, j = n-1;i < j; i++,j--)
    {
        if(a[i]!=a[j]){
             mp[a[i]]++;
             mp[a[j]]++;
             cnt++;
        }
    }
    bool ok = 0;
    if(!mp.empty())
        for(auto e:mp)
        {
            if(e.second == cnt && (n-cnt)%2 ==0){ok=1;break;}
            if(e.second == cnt && (n-cnt)%2!=0 && a[n/2]==e.first){ok=1;break;}
        }
    else ok = 1;
    
    if(!ok)cout<<"NO\n";
    else cout<<"YES\n";
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