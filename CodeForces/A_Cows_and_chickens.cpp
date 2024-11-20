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
    int n;
    cin>>n;
    cout<<n/4 + (n%4)/2<<endl;
}

int main() {
    int tc = 1;
    cin>>tc;
    while (tc--) {
        solve();
    }
}
