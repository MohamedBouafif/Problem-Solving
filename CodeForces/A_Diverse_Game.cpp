#include "bits/stdc++.h"
using namespace std;
#define ll long long

void solve()
{
    int n,m;
    cin>>n>>m;
    int a[n][m];
    for(int i = 0;i<n;i++)
        for(int j = 0;j<m;j++)
            cin>>a[i][j];
    if(n==m&&n==1){cout<<-1<<endl;return;}
    if(m==1)
    {
        if(n%2==0)
        {
            for(int i = n -1;i>=0;i--)
            {
                 cout<<a[i][0]<<endl;
                
            }
        }
        else
        {
            for(int i = n -1; i> n - 1 -n/2; i--)
            {
                cout<<a[i][0]<<endl;
            }
            for(int i = 0; i <= n - 1 - n/2;i++)
                cout<<a[i][0]<<endl;
        }
        return;
    }
    if(m%2==0)
    {
        for(int i = 0;i<n;i++)
        {
            for(int j = m-1; j >=0;j--)
                cout<<a[i][j]<<" ";
            cout<<endl;
        }
        return;
    }
    else
    {
        
        for(int i = 0;i<n;i++)
        {
            
            for(int j = m - 1;j> m - 1 - m/2;j--)
                cout<<a[i][j]<<" ";
            for(int j = 0; j <= m -1 - m/2; j++)
                cout<<a[i][j]<<" ";
            cout<<endl;
        }
        return;
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