#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int n,m;
bool in(int i,int j)
{
    return i>=0 && i<= n -1 && j>=0 && j<=m-1;
}
int dx[]={1,0,-1,0};
int dy[]={0,1,0,-1};

void solve()
{
    
    cin>>n>>m;
    int a[n][m];
    for(int i = 0; i < n ;i++)
        for(int j = 0; j < m;j++)
            cin>>a[i][j];
    for(int i = 0; i < n;i++)
    {
        for(int  j = 0; j < m;j++)
        {
            int mx = 0;
            for(int k = 0; k < 4;k++){
                if(in(i+dx[k],j+dy[k])){mx = max(mx,a[i+dx[k]][j+dy[k]]);}
            }
            a[i][j] = min(a[i][j], mx);    
        }
    }
    for(int i = 0 ;i < n;i ++)
    {
        for(int  j = 0; j < m;j++)
            cout<<a[i][j]<<' ';
        cout<<endl;
    }
}
int main()
{
    int t;cin>>t;

    while(t--)
    {
        
        solve();
        
    }
}