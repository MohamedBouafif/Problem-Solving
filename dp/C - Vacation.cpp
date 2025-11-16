#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n), b(n), c(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i] >> b[i] >> c[i];
    }

    int max_score_per_day_by_activity[n][3];
    max_score_per_day_by_activity[0][0] = a[0];
    max_score_per_day_by_activity[0][1] = b[0];
    max_score_per_day_by_activity[0][2] = c[0];

    for (int i = 1; i < n; i++)
    {
        max_score_per_day_by_activity[i][0] = max(max_score_per_day_by_activity[i - 1][1], max_score_per_day_by_activity[i - 1][2]) + a[i];
        max_score_per_day_by_activity[i][1] = max(max_score_per_day_by_activity[i - 1][0], max_score_per_day_by_activity[i - 1][2]) + b[i];
        max_score_per_day_by_activity[i][2] = max(max_score_per_day_by_activity[i - 1][1], max_score_per_day_by_activity[i - 1][0]) + c[i];
    }
    cout << max({max_score_per_day_by_activity[n - 1][0], max_score_per_day_by_activity[n - 1][1], max_score_per_day_by_activity[n - 1][2]}) << endl;
}
int main()
{
    solve();
}