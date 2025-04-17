#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n, m, k;
    cin >> n >> m >> k;
    
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    multiset<int> b;
    for (int i = 0; i < m; i++) {
        int x;
        cin >> x;
        b.insert(x);
    }

    ll ans = 0;
    multiset<int> erased;
    multiset<int> noterasedbutexists , c   =  b;


    for (int l = 0; l < m; l++) {
        if (b.find(a[l]) != b.end()) {
            b.erase(b.lower_bound(a[l]));
            erased.insert(a[l]);
        }else if(c.find(a[l]) != c.end()){
            noterasedbutexists.insert(a[l]);
        }
    }

    if ((int)b.size() <= m - k) ans++;


    for (int i = 0, j = m; j < n; i++, j++) {
       
        if (!erased.empty() && erased.find(a[i]) != erased.end() ) {
            b.insert(a[i]);
            erased.erase(erased.lower_bound(a[i]));
            if(noterasedbutexists.find(a[i]) != noterasedbutexists.end())
            {
                b.erase(b.lower_bound(a[i]));
                noterasedbutexists.erase(noterasedbutexists.lower_bound(a[i]));
                erased.insert(a[i]);
            }
                
        }
        
        if (b.find(a[j]) != b.end()) {
            b.erase(b.lower_bound(a[j]));
            erased.insert(a[j]);
            
        }else if(c.find(a[j]) != c.end())noterasedbutexists.insert(a[j]);
        
        if ((int)b.size() <= m - k) ans++;
        

    }
    
    cout << ans << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
