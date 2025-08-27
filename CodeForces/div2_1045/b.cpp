#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> v(n);
    
    for (ll &x : v)
    {
        cin >> x;
        cout<<x%(k+1)*k + x<<" ";
    }
    cout<<"\n";
    
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