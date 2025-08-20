#include "bits/stdc++.h"
using namespace std;
using ll = long long;
#define pb push_back
#define mp make_pair

void solve()
{
    int n;
    cin >> n;
    vector<ll> a(n);
    
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];

    }
    
    ll y = (2*a[0] - a[1])/(n+1);
    ll  x=a[0]-y*n;
    if(y<0||x<0){cout<<"NO\n";return;}
    for(int i = 0 ; i < n;i++){
        if(a[i] != x*(i+1) + y*(n-i)){
            cout<<"NO\n";
            return;
        }
        
    }
    cout<<"YES\n";

}

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {

        solve();
    }
}