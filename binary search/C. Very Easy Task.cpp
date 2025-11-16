#include "bits/stdc++.h"
using namespace std;
using ll = long long;
ll n, x, y;

bool f(ll m){
    ll a = min(x,y), b = max(x,y);
    ll copies = m/a + max(0LL, (m-a)/b);
    return copies >= n;
} 
int main(){
    cin>>n>>x>>y;
    ll l = 0, r = 2e9+1;
    while(r > l + 1){
        ll m = l+ (r - l)/2;
        if(f(m)) r = m;
        else l = m;
    }
    cout<< r<<endl;
    
}