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

int bf(int e, const vector<int> &b) {
    int l = 0, r = b.size() - 1;
    while (l < r) {
        int m = (l + r) / 2;
        if (b[m] < e)
            l = m  + 1; // move to the right half
        else
            r = m  + 1; // move to the left half
    }
    return l; // l will be the insertion position
}

void solve() {
    
    
        int l1,r1,l2,r2;
        cin>>l1>>r1>>l2>>r2;
        if(l1 == l2)cout<<l1<<" "<<r2<<endl;
        else cout<<l1<<" "<<l2<<endl;
    
}

int main() {
    int tc = 1;
    cin>>tc;
    while (tc--) {
        solve();
    }
}
