#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    ll n, k;
    cin >> n >> k;
    vector<ll> a(k);
    for (ll &x : a) cin >> x;

    if (k == 1) {
        cout << "YES\n";
        return;
    }

    vector<ll> diff(k - 1);
    for (int i = 1; i < k; i++) {
        diff[i - 1] = a[i] - a[i - 1];
    }

    if (!is_sorted(diff.begin(), diff.end())) {
        cout << "NO\n";
        return;
    }


    if (a[0] > (n - k + 1) * diff[0])
        cout << "NO\n";
    else
        cout << "YES\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
}
