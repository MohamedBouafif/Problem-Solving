#include<bits/stdc++.h>
using namespace std;
using ll = long long ;

void solve()
{
    int n ;
    cin >> n;
    vector<ll> a(n);
    for(ll& x:a)cin>>x;
    
    ll k = a[0];
    for(int i = 1 ; i < n; i++){
        if(a[i] <= k){
            k = min(a[i], k);
        }
        else if(a[i] >= 2*k){
            cout<<"NO\n";
            return;
        }
    }
    cout<<"YES\n";


}
int main()
{
    int t = 1;
    cin>>t;
    while(t--)
    {
        solve();
    }
}