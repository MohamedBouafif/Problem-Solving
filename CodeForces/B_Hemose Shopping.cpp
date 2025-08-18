#include<bits/stdc++.h>
using namespace std;
using ll = long long ;


void solve()
{
    int n, x;
    cin >> n >> x;
    vector<ll> a(n) , v(n);
    for(int i = 0 ; i < n ;i++){
        cin >> a[i]; 
        v[i] = a[i];
    }

    sort(v.begin(), v.end());
    if(v == a || n/2 >= x){cout<<"YES\n";}
    else{
        for(int i = 0 ; i < n;i++){
            if(v[i] != a[i] && (n - 1 - i < x && i < x ))
            {
                cout<<"NO\n";
                return;
            }
        }
        cout<<"YES\n";
    }
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