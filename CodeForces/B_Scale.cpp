#include<bits/stdc++.h>
using namespace std;
using ll = long long ;
#define pb push_back
#define mp make_pair
bool srt(pair<ll,ll> p1 , pair<ll,ll> p2)
{
    if(p1.first==p2.first)return p1.second > p2.second;
    return p1.first<p2.first;
}
void solve()
{
    int n,k;
    cin>>n>>k;
    char a[n][n];
    for(int i = 0;i<n;i++)
        for(int j= 0;j<n;j++)
            cin>>a[i][j];

            
    for(int i = 0;i<n;i+=k)
    {
        for(int j =0;j<n;j+=k)
            cout<<a[i][j];
        cout<<endl;
    }
    
}

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        
        solve();
        
        
    }
}