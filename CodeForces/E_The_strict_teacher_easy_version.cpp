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
int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a%b);
}


void solve() {
    
    int n,m,q;
    cin>>n>>m>>q;
    int t1 ,t2,med;
    cin>>t1>>t2>>med;
    if(med >max(t1,t2))
    {
        cout<<(n-med) + med - max(t1,t2)<<endl;
    }
    else if(med < min(t1,t2))
    {
        cout<<med - 1 + min(t1,t2) - med<<endl;
    }
    else{
        int mid  = (t1+t2)/2;
        cout<<  min( max(t1,t2) - mid - 1 , mid - min(t1,t2) - 1)   +1<<endl;
    }
    
}

int main() {
    int tc = 1;
    cin>>tc;
    while (tc--) {
        solve();
    }
}
