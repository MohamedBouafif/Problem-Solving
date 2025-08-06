#include<bits/stdc++.h>
using namespace std;
using ll = long long ;

void solve()
{
    ll n,m;
    cin>>n>>m;
    ll s = n*(n+1)/2;
    if(m < n || m > s){
        cout<<-1<<endl;
        return;
    }
    vector<ll> pref(n,n);
    vector<int> ans;
    for(int i = 1;i<n;i++){
        pref[i] = pref[i-1] - i + n; // i = n-2 : pref[i] = n + n - 1
    }
    auto it = lower_bound(pref.begin(), pref.end(), m);
    int pos = (it - pref.begin());
    if(pref[pos]==m){
        pos++;
        for(int i = 1; i<= pos -1;i++)
            ans.push_back(n-i+1);
        ans.push_back(1);
        for(int i = pos;i<n;i++)
            ans.push_back(n-i+1);
    }else{
        int diff = pref[pos] - m;
        pos++;
        for(int i = 1;i<=pos-2;i++)ans.push_back(n-i+1);
        int x = n - (pos -1) + 1;
        ans.push_back(x - diff);
        ans.push_back(1);
        for(int i = pos;i<n;i++)
            if(x - diff!=n-i+1)ans.push_back(n-i+1);
        ans.push_back(x);
    }
    cout<<ans[0]<<endl;
    for(int i = 1;i<n;i++)cout<<ans[i-1]<<" "<<ans[i]<<endl;
}
int main()
{
    int t = 1;
    cin>>t;
    while(t--)
    {
        solve();
    }
}