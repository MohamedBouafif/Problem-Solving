#include "bits/stdc++.h"
using namespace std;
using  ll =long long;
#define pb push_back
#define mp make_pair

template <typename T>
ostream &operator<<(ostream &os, const vector<T> &v) {
    for (T x : v) os << x << " ";
    return os;
}

template <typename T>
istream &operator>>(istream &is, vector<T> &v) {
    for (T &x : v) is >> x;
    return is;
}

void solve()
{
    int n;
    cin>>n;
    vector<ll> v(n);
    cin>>v;
    sort(v.begin(),v.end());
    ll ans = v[0];
    for(int i = 1;i<n;i++)
    {
        ans = (ans + v[i])/2;
    }
    cout<<ans<<endl;
    
}

    


int main()
{
    int tc ;
    cin>>tc;
    while(tc--)
    {
        
        solve();
        
    }
}