#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n;
    cin >> n;

    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];

    int k = 0;
    vector<pair<int, int>> ans;

    for(int i = 0 ; i < n ;i++){
        for(int j = 0; j < n - 1;j++){
            if(a[j] > a[j+1]){k++;swap(a[j+1] , a[j]); ans.push_back({1,j+1});}
            if(b[j] > b[j+1]){k++;swap(b[j+1] , b[j]); ans.push_back({2,j+1});}
        }
    }

    for(int i = 0 ; i < n ;i++){
        if(a[i]  > b[i]){
            k++;
            ans.push_back({3, i+1});
        }
    }


    cout << k << "\n";
    for (auto &e : ans) {
        cout << e.first << " " << e.second << "\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
        solve();
}
