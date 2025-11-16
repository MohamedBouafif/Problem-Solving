#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int &x : a) cin >> x;
        deque<int> q[n + 1]; 
        vector<int> dp(n, 0);

        for (int i = 0; i < n; i++) {
            if (i > 0) dp[i] = dp[i - 1];
            q[a[i]].push_back(i);

            if (q[a[i]].size() > a[i])
                q[a[i]].pop_front();

            if (q[a[i]].size() == a[i]) {
                int start = q[a[i]].front();
                int prev = (start > 0 ? dp[start - 1] : 0);
                dp[i] = max(dp[i], prev + a[i]);
            }
        }
        cout << dp[n - 1] << "\n";
    }
}
