#include "bits/stdc++.h"
using namespace std;
using  ll =long long;
#define pb push_back
#define mp make_pair

void solve()
{
    int n,m;
    cin>>n>>m;
    int mat[n][m];
    int min_abs = 1e9;
    ll ans = 0, cnt1 =0;
    for(int i = 0;i<n;i++)
        for(int j = 0;j<m;j++){
            cin>>mat[i][j];
            ans += abs(mat[i][j]);
            if(mat[i][j]<0)cnt1++;
            min_abs = min(min_abs,abs(mat[i][j]));
        }
    if(cnt1%2==0)cout<<ans<<endl;
    else cout<<ans-2*min_abs<<endl;
    
}
    

    


int main()
{
    int tc ;
    cin>>tc;
    while(tc--)
    {
        
        solve();
        
    }
}