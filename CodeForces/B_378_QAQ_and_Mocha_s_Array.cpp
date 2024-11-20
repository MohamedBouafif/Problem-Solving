
#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int t;
int n;

void solve()
{
    cin>>n;
    int a[n];
    for(int i = 0 ;i < n;i++) cin>>a[i];
    sort(a, a + n);
    int ai = a[0];
    vector<int> v;
    for(int i = 0 ; i < n;i++)
        if(a[i]%ai!=0 )v.push_back(a[i]);
    for(int i = 0 ; i < v.size();i++)
        if(v[i]%v[0] !=0){cout<<"NO\n"; return;}
    cout<<"YES\n";
  
}
int main()
{
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}