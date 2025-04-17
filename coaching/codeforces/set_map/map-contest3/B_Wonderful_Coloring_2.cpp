#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n,k;
    cin>>n>>k;
    vector<pair<int,int>> v(n);
    map<int,int> occ;
    for(int i = 0;i<n;i++){
        cin>>v[i].first;
        v[i].second = i;
        occ[v[i].first]++;
    }
    vector<int> ans(n,0);
    sort(v.begin(),v.end());
    int m = 0, l = -1;
    map<int,int> current_occ;
    for(int i = 0;i<n;i++)
    {
        current_occ[v[i].first]++;
        
        // cout<<v[i].first<<" ";
        if(current_occ[v[i].first]<=k){
            m++;
            if(m==k + 1) {m =1; l = i;}
            ans[v[i].second] = m;
        }
        else{
            ans[v[i].second] = 0;
        }
        
        
        
        

    }
    if(l!=-1)
    for(int i = l+1;i<n;i++)ans[v[i].second] = 0;
    for(auto e:ans)cout<<e<<" ";
    cout<<"\n";


}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
