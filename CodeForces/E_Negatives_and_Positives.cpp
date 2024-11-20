#include "bits/stdc++.h"
using namespace std;
using ll = long long int;
#define pb push_back
#define mp make_pair

void solve() {
    //zero can absorb the negatif sign
    int n;
    cin >> n;
    ll a[n];
    ll ans1 = 0, cntneg = 0;
    bool out1 = 0;
    ll x = 1e9;

    for(int i = 0;i<n;i++){
        cin>>a[i];
        ans1+= abs(a[i]);
        if(a[i]==0)out1=1;
        if(a[i] < 0)cntneg++;
        x =min(x,abs(a[i])); 
    }
    //cout<<x<<endl;
    if(out1)cout<<ans1<<endl;
    else
    {
        if(cntneg%2 == 0)cout<<ans1<<endl;
        else cout<<ans1 - 2*x<<endl;
       
    }
    
}

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}
