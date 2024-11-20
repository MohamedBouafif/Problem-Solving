#include "bits/stdc++.h"
using namespace std;
using ll = long long;
#define pb push_back
#define mp make_pair

void solve()
{
    ll n,k;
    cin>>n>>k;
    vector<ll> a(n);
    for(int i = 0;i<n;i++)
        cin>>a[i];
    sort(a.begin(),a.end(),greater<ll>());
    ll A = 0,B=0;
    // idea: BOB yzid fil a[i] (i%2 !=0) such that a[i] <= a[i - 1] bech Alice meyekhouhech fi blastou
    for(int i = 1;i<n;i+=2)
    {
        if(k==0)break;
        ll x = a[i -1] - a[i];
        a[i] += min(x,k);
        k-= min(x,k);
    }
    for(int i = 0;i<n;i+=2)
    {
        A+=a[i];
    }
    for(int i = 1;i<n;i+=2)
    {
        B+=a[i];
    }
    cout<<A - B<<endl;
}

int main()
{
    ll tc;  
    cin >> tc;
    while (tc--)
    {
        solve();
    }
}
