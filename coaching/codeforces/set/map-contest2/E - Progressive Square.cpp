#include <bits/stdc++.h>
using namespace std;
using ll = long long ;

void solve()
{
    
    ll n,c,d;
    cin>>n>>c>>d;
    vector<ll> b(n*n);
    for(int i = 0;i<n*n;i++)cin>>b[i];
    sort(b.begin(),b.end());
    int x = b[0];
    for(int i = 0;i<n*n;i++){
        b[i]-=x;
    }
    ll m[n][n];
    for(int i = 0;i<n;i++){
        m[0][i] = i*d;
        m[i][0] = i*c;
    }
    for(int i = 1; i <n;i++){
        for(int j  = 1;j<n;j++){
            m[i][j] = m[i][j-1] + d;
        }
    }
    
    vector<ll> v;
    for(int i = 0 ;i < n;i++){
        for(int j = 0;j<n;j++){
            v.push_back(m[i][j]);
        }
    }

    sort(v.begin(),v.end());

    for(int i = 0;i<n*n;i++)
        if(b[i] != v[i]){
            cout<<"NO\n";
            return;
        }

    cout<<"YES\n";
    
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int q;
    q = 1;
    cin>>q;
    while (q--)
    {
        solve();
    }
}
