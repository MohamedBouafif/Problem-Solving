#include<bits/stdc++.h>
using namespace std;
using ll = long long ;
void solve()
{
    ll n,k,x;
    cin>>n>>k>>x;
    if(2*x > k*(n + n - k +1) || 2*x < k*(k+1)) cout<<"NO\n";
    else cout<<"YES\n";
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