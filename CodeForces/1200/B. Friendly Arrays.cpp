#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    int xmin, xmax;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (i == 0)
        {
            xmax = a[i];
        }
        else
        {
            xmax = xmax ^ a[i];
        }
    }
    int y = 0;
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
        y |= b[i];
    }
    for (int i = 0; i < n; i++)
        a[i] |= y;
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
            xmin = a[i];
        else
            xmin ^= a[i];
    }
    cout << min(xmin,xmax) << " " << max(xmax,xmin) << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}
