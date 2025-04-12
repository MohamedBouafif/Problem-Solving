#include <bits/stdc++.h>
using namespace std;
using ll = long long ;

void solve()
{
    
    int n,h;
    cin>>h>>n;
    vector<ll> a(n),b(n);
    
    set<pair<ll,int>> s;
    for(int i = 0;i<n;i++){
        cin>>a[i];
        s.insert({1,i});
    }
    for(int i = 0;i<n;i++)cin>>b[i];
    ll turn = 1;
    while(h>0){
        auto it = s.begin();
        int i = it->second;
        
        turn = it->first;
        h-= a[i];
        s.erase(it);
        s.insert({turn + b[i], i});

    }
    cout<<turn<<endl;

    
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