#include<bits/stdc++.h>
using namespace std;
using ll = long long ;
void solve()
{
    int n;
    cin >> n;
    vector<ll> v(n);
    for(ll &x :v)cin >> x;
    ll ans = 0;
    for(int i = 1 ; i<n;i+=2){
        
        if(v[i] < v[i - 1])
        {
            ans += v[i-1] - v[i];
            v[i-1] = v[i];
        }
        if(i < n - 1 && v[i] < v[i + 1]){
            ans += v[i+1] - v[i];
            v[i+1] = v[i];
        }
        if( i + 1 < n && v[i] < v[i-1] + v[i + 1]){
            ll x  = v[i+1] + v[i-1] - v[i];

            ans += x;
            if( v[i + 1] - x >= 0){
                v[i+1] -= x;
            }else{
                x-=v[i+1];
                v[i+1] = 0;
                v[i-1] -= x;
            }
        }
    }

    cout<<ans<<endl;
    
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