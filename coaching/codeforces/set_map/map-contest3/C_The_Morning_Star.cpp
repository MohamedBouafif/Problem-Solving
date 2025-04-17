#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n;
    cin>>n;
    map<int,ll>absice;
    map<int,ll>ordonne;
    map<int,ll> affinedecroissante, affinecroissante;
    for(int i =0; i <n;i++)
    {
        int x,y;
        cin>>x>>y;
        absice[x]++;
        ordonne[y]++;
        affinecroissante[y-x]++;
        affinedecroissante[x+y]++;

    } 
    
   ll ans = 0;
   for(auto e:absice) ans+= e.second*(e.second - 1);
   for(auto e:ordonne) ans+= e.second*(e.second - 1);
   for(auto e:affinedecroissante) ans+= e.second*(e.second - 1);
   for(auto e:affinecroissante)ans+= e.second*(e.second - 1);
   cout<<ans<<endl;

}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
