#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int tc = 1;
    // cin >> tc;
    for(int i = 1; i<= tc; i++){
        ll n , d;
        cin >> n >> d;
        vector<ll> a(n);
        ll ans = d;
        for(ll& x:a){
            cin >> x;
            ans = ans < x ? ans : max(ans - x, x - 1);
        }
        
        cout << ans ;
    }
}