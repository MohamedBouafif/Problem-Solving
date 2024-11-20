#include "bits/stdc++.h"
using namespace std;
using ll = long long;
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


void solve() {
    
    int n,q;
    cin>>n>>q;
    vector<ll> v(n);
    cin>>v;
    sort(v.begin(),v.end());
    vector<ll> pref(n+1,0);
    for(int i = 1;i<=n;i++)
    {
        pref[i] += pref[i-1] + v[i-1];
    }
    reverse(pref.begin(),pref.end());
  
    while(q--)
    {
        int x,y;
        cin>>x>>y;
      
        
        cout<<pref[x-y] - pref[x]<<endl;
      
    }
    
}

int main() {
    int tc = 1;
    
    while (tc--) {
        solve();
    }
}
