#include<bits/stdc++.h>
using namespace std;
using ll = long long ;
void solve()
{
    int n;
    cin>>n;
    int a[n];
    for(int i = 0;i < n;i++) cin>>a[i];
    int cnt = 0;
    for(int l = 0; l < n;l++)
    {
        int r = l;
        while(a[l]!=0&&l<n) l++;
        if(r!=l) cnt++;
    }
    cout<<min(2,cnt)<<endl;

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