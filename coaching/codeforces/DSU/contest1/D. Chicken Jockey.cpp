#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using pi = pair<int, int>;

void solve()
{
    /*
    MY ISSUE : I CINSIDERED THAT SMALL AREA WILL GIVE THE SMALL NB OF OPERATIONS TO REDUCE MATRIX TO 1*1
    WRONG ! eg: Rectangle 6×2 needs 4 operations: 6→3→2→1 (3 ops) + 2→1 (1 op) = 4 total
                Rectangle 4×3 needs 4 operations: 4→2→1 (2 ops) + 3→2→1 (2 ops) = 4 total
    */
    int n, m, a, b;
    cin >> n >> m >> a >> b;
    vector<pair<int, int>> v = {
        {a, m},
        {n - a + 1, m},
        {n, b},
        {n, m - b + 1}
    };
    ll ans = 1e18;
    for (auto [x1, x2] : v)
    {
        ll curr = 1;
        while (x1 > 1)
        {
            x1 = (x1 + 1) / 2;
            curr++;
        }
        while (x2 > 1)
        {
            x2 = (x2 + 1) / 2;
            curr++;
        }
        ans = min(ans, curr);
    }

    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}