
#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int t;
int n;

void solve()
{
    cin>>n;
    ll s = 0;
    ll m = 0;
    ll ans = 0;
    for(int i = 0; i< n;i++)
    {
        ll x;
        cin>>x;
        s+= x;
        m = max(m,x);
        
        if(m == s - m ) ans++;
    }
    cout<<ans<<endl;
}
int main()
{
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}