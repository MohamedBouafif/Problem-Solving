#include<bits/stdc++.h>
using namespace std;
using ll = long long ;
void solve()
{
    int n,m,k;
    cin>>n>>m>>k;
    for(int i = n;i>=k+1;i--)cout<<i<<" ";
    for(int i = k;i>=m+1;i--)cout<<i<<" ";
    for(int i = 1;i<=m;i++)cout<<i<<" ";
    cout<<endl;
}
int main()
{
    int t =1;
    cin>>t;
    while(t--)
    {
        solve();
    }
}