#include "bits/stdc++.h"
using namespace std;
#define ll long long
void solve()
{
    int n,q;
    cin>>n>>q;
    string a,b;
    cin>>a>>b;
    int oa[n+1][26], ob[n+1][26];
    for(int i = 0;i<=n;i++)
    {
        for(int j  = 0 ;j < 26;j++){
            oa[i][j] = 0; 
            ob[i][j] = 0;
        }
    }
    for(int i = 1;i<=n;i++)
    {
        for(int j = 0;j<26;j++){
            oa[i][j]=oa[i-1][j];
            ob[i][j]=ob[i-1][j];
        }
        oa[i][a[i-1]-'a']=oa[i-1][a[i-1]-'a']+1;
        ob[i][b[i-1]-'a']=ob[i-1][b[i-1]-'a']+1;
        
    }
    while(q--)
    {
        int l , r;
        cin>>l>>r;
        int s = 0;
        for(int j = 0;j<26;j++)
        {
            s+= abs((oa[r][j] - oa[l-1][j]) - (ob[r][j] - ob[l-1][j]));
        }
        cout<<s/2<<endl;
    }


}
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        solve();
    }
}