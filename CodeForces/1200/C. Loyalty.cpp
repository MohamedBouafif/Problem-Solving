#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        vector<ll> a(n);
        ll sum = 0;
        for (ll &b : a)
        {
            cin >> b;
            sum += b;
        }
        sort(a.rbegin(), a.rend());
        int l = 0, r = n - 1;
        ll ans = 0;
        for (int i = 0; i < sum / x; i++)
        {
            ans += a[i];
        }
        ll curr_s = 0;
        vector<int> b;
        while (l <= r)
        {
            if ((curr_s + a[l]) / x > curr_s / x)
            {
                curr_s += a[l];
                b.push_back(a[l]);
                l++;
            }
            else
            {
                curr_s += a[r];
                b.push_back(a[r]);
                r--;
            }
        }
        cout << ans << endl;
        for (int i = 0; i < n; i++)
        {
            cout << b[i] << " \n"[i == n - 1];
        }
    }
}