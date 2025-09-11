#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve()
{
    ll n,m;
    cin >> n >>m;
    vector<ll> v(n);
    for(ll& x:v)cin>>x;
    sort(v.begin(), v.end());
    ll ans = 0;
    for(int i = n-1;i>=0;i--)
    {
        if(m==0)break;
        ans+=v[i]*m;
        m--;
    }
    cout<<ans<<endl;
    

}
int main()
{
    int t;
    cin >> t;
    
    while (t--)
    {

        solve();
    }
}