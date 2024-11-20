#include<bits/stdc++.h>
using namespace std;
using ll = long long;
void solve()
{
    int n;
    cin>>n;
    int x[n - 1]; 
    for(int i = 0 ; i < n -1 ;i ++) cin>>x[i];
    int a[n];
    a[n - 1] = 1e9;
    for(int i = n - 2 ; i >= 0; i--)
    {
        a[i] = a[i + 1] - x[i] ;
    }
    for(auto i : a) cout<<i<<" ";
    cout<<endl;
}
int main()
{
    int t;cin>>t;

    while(t--)
    {
        
        solve();
        
    }
}