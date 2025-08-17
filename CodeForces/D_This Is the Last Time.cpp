#include<bits/stdc++.h>
using namespace std;
using ll = long long ;

bool cmp (vector<int>& v1, vector<int>& v2){

    if(v1[0] == v2[0])
        return v1[1] <=v2[1];

    return v1[0] < v2[2];

}
void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<vector<ll>> v(n);
    for(int i = 0 ;i < n ;i++){
        ll l , r , x;
        cin >> l >> r >> x;
        v[i] = {l , r  , x};
    }
    sort(v.begin(), v.end());
    
    
    for(int i = 0 ; i < n ;i++){
        if( k >= v[i][0] && k<= v[i][1]) k = max(k, v[i][2]);
    }
    cout<<k<<endl;


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