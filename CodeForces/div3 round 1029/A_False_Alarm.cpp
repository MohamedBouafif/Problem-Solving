#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve()
{
    int n,m;
    cin>>n>>m;
    int pos1 = -1 , pos2 = -1;
    for(int i = 1; i <= n;i++){
        int x;
        cin>>x;
        if(x == 1 && pos1 == -1)pos1 = i;
        else if(x== 1 && pos1 != -1)pos2 = i;
    }
    if(pos1 == -1)cout<<"YES\n";
    else if(pos2 == -1)cout<<"YES\n";
    else if(pos2 - pos1 <= m - 1)  cout<<"YES\n";
    else cout<<"NO\n";
}
int main()
{
    int t;
    cin>>t;
 
    while (t--)
    {
        solve();
    }
}
