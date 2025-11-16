#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    int n,x,s;
    cin >> n >> x >> s;
    vector<ll> a(n) , b(n);
    map<ll,int> mp;
    for(int i = 0 ; i < n ;i++){
        cin >> a[i];
        if(i == 0)b[i] = a[i];
        else b[i] += a[i];
        mp[b[i]]++;
    }

    int ans = 0;
    for(int i = 0 ; i < n ;i++){
        if(b[i])
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}
