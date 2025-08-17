#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    int n;
    cin >> n;
    ll px,py,qx,qy;
    cin >> px>>py>>qx>>qy;
    ll d = (px  - qx) * (px - qx) + (py - qy)*(py - qy);
    
    vector<double> v(n+1);
    for(int i = 0 ; i < n ;i++){
        double x;
        cin >> x;
        v[i] = x;
    }
    v[n] = sqrtl(d);
    sort(v.begin(), v.end(), greater<double>());
    for(int i = 1 ;i <= n;i++){
        v[0]-=v[i];
    }
    if(v[0] <= 0)cout<<"YES\n";
    else cout<<"NO\n";
    
    


}
int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}