#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    int n;
    cin >> n;
    vector<pair<ll, ll>> a(n), b(n), c(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].first;
        a[i].second = i;
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i].first;
        b[i].second = i;
    }
    for (int i = 0; i < n; i++)
    {
        cin >> c[i].first;
        c[i].second = i;
    }
    sort(a.begin(), a.end(), greater<pair<ll, ll>>());
    sort(b.begin(), b.end(), greater<pair<ll, ll>>());
    sort(c.begin(), c.end(), greater<pair<ll, ll>>());

    
    ll ans = 0;
    for (int i = 0; i < 3; i++)
    {
        ll curr = a[i].first;
        for (int j = 0; j < 3; j++)
        {
            if (b[j].second != a[i].second){
                ll curr1 = b[j].first;
                for (int k = 0; k < 3; k++)
                {
                    if (c[k].second != b[j].second && c[k].second !=a[i].second){
                        ll curr2 = c[k].first;
                        ans = max(ans, curr + curr1 + curr2);
                    }
                }
            }
                
        }
    }
    cout <<ans << endl;
}
int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}