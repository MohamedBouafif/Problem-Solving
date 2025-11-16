#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    
    vector<int> occ(26,0);
    for(int i = 0 ; i < n ;i++){
        occ[s[i] - 'a']++;
    }
    for(int i = 1 ; i < n - 1 ;i++){
        if(occ[s[i] - 'a'] > 1){
            cout<<"YES\n";
            return;
        }
    }
    cout<<"NO\n";
    

}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}
