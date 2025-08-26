#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using pi = pair<int, int>;

void solve(){
    int n;
    cin >> n;
    vector<ll> g(n);
    for(ll& x:g)cin >> x;
    sort(g.begin(), g.end());
    ll ans = 0;
    for(int i = n - 1 ; i >=0 ;i-=2){
        ans += g[i];
    }
    cout<<ans<<endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}