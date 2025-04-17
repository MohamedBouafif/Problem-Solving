#include <bits/stdc++.h>
using namespace std;
using ll = long long ;

void solve()
{
    
    int n;
    cin>>n;
    vector<int> b(n);
    map<int,int> mp;
    for(int& x:b){
        cin>>x;
        mp[x]++;
    }
    for(auto e:mp){
        if(e.second>1){
            cout<<"YES\n";
            return;
        }
    }
    cout<<"NO\n";
    return;

    
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int q;
    q = 1;
    cin>>q;
    while (q--)
    {
        solve();
    }
}
