#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    int ones[30] = {0}, zeros[30] = {0};
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        for (int j = 29; j >= 0; j--)
        {
            if (v[i] & (1 << j))
                ones[j]++;
            else
                zeros[j]++;
        }
    }
    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        ll current_ans = 0;
        for (int j = 29; j >= 0; j--)
        {
            if (v[i] & (1 << j))
            {
                current_ans += (1LL << j) *(ll) zeros[j];
            }
            else
            {
                current_ans += (1LL << j) * (ll)ones[j];
            }
        }
        ans = max(ans, current_ans);
    }
    cout << ans << endl;
}
int main()
{
    int t;
    cin >> t;

    while (t--)
    {

        solve();
    }
}