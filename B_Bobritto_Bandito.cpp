#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    int n,m,l,r;
    cin>>n>>m>>l>>r;
    int r1= min(r,m);
    m-=r1;
    cout<<-m<<" "<<r1<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
        solve();
}