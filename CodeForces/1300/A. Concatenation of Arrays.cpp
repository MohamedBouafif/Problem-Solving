#include <bits/stdc++.h>
using namespace std;

using ll = long long;

struct A {
    int l;
    int r;
    int score;
};

bool compare(const A& a1, const A& a2) {
    if (a1.score == a2.score) {
        if (a1.l == a2.l) return a1.r < a2.r;
        return a1.l < a2.l;
    }
    return a1.score < a2.score;
}

void solve() {
    int n;
    cin >> n;

    vector<A> v(n);

    for (int i = 0; i < n; i++) {
        int l, r;
        cin >> l >> r;
        int L = l, R = r;
        if (L > R) swap(L, R);

        v[i].l = l;
        v[i].r = r;
        v[i].score = (L - 1) + (R - 2);
    }

    sort(v.begin(), v.end(), compare);

    for (auto &e : v) {
        cout << e.l << " " << e.r << " ";
    }
    cout << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
        solve();
}
