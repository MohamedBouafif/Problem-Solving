#include "bits/stdc++.h"
using namespace std;
using ll = long long;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<ll> h(n);
        for (ll &x : h)
            cin >> x;
        ll ans = 0;
        for (ll i = n - 1; i >= 0; i--)
        {
            if (i == n - 1 || h[i] > h[i + 1])
                ans = max(h[i], ans);
            else
            {
                ans = max(h[i + 1] + 1, ans);
                h[i] = h[i + 1] + 1;
            }
        }
        cout << ans << endl;
    }
}