#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n,m,k;
    cin>>n>>m>>k;
    int x = ceil((float)n/m);
    int y = n  - x;
    if(k>= y) cout<<"NO\n";
    else cout<<"YES\n";
}
int main()
{
    int t;cin>>t;
    while(t--)
    {
        solve();
    }

}