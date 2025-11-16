#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll d(ll x, ll y, ll xx , ll yy){
    return (x-xx)*(x-xx) + (y-yy)*(y-yy);
}
void solve()
{
    ll n;
    cin >> n;
    ll x[n], y[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> x[i] >> y[i];
    }
    ll xs , ys , xt , yt;
    cin >> xs >> ys >> xt >> yt;
    ll distance = d(xs,ys,xt,yt);
    for(ll i = 0 ; i < n ;i++){
        ll _distance = d(x[i], y[i], xt,yt);
        if(_distance <= distance){
            cout<< "NO\n";
            return;
        }
    }
    cout<<"YES\n";
    
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}
