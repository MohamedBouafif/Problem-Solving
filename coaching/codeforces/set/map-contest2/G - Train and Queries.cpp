#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    int n,k;
    cin>>n>>k;
    set<pair<int,int>> s;
    for(int i = 0;i<n;i++){
        int u;
        cin>>u;
        s.insert({u,i});
    } 
    while(k--){
        int a,b;
        cin>>a>>b;
        //nchouf awel position of a and last position of b
        auto ita = s.lower_bound({a,0});

        if(ita ==s.end()|| ita->first != a)
            cout<<"NO\n";
        else {
            auto it = s.lower_bound({b+1,0});
            auto itb = prev(it);
            if(itb->first != b)
                cout<<"NO\n";
            else if(ita->second < itb->second)
            {
                cout<<"YES\n";
            }else cout<<"NO\n";
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int q;
    q = 1;
    cin >> q;
    while (q--)
    {
        solve();
    }
}
