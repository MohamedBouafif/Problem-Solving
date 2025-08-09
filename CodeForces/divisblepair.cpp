#include <bits/stdc++.h>
using namespace std;
using ll   = long long;

void solve(){
    ll n , x, y;
    cin >> n >> x >> y;
    vector<ll> a(n);
    map< pair<ll,ll>, ll > mp1;
    ll ans = 0;
    for(ll& b:a){
        cin >> b;
        int xx = b%x , yy = b%y;
        ans += mp1[{(x - xx)%x, yy}];
        mp1[{xx, yy}]++;
    }
    cout<<ans<<endl;
        
}

int main()
{
    int t;
    cin>>t;
    while(t--)
        solve();
}