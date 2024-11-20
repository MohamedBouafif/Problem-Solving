#include "bits/stdc++.h"
using namespace std;
#define ll long long
#define pb push_back
void solve()
{
    ll n,k,b,s;
    cin>>n>>k>>b>>s;
    vector<ll> res(n);
    if(s>= k*b)
    {
        res[0]=k*b;
        s-=k*b;
        for(int i = 0;i<n;i++)
        {
            int add = min(s,k-1);
            res[i]+=add;
            s-=add;
        }
        if(s>0)cout<<-1<<endl;
        else
        {
            for(auto e:res)cout<<e<<" ";
            cout<<endl;
        }

    }
    else cout<<-1<<endl;
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