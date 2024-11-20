#include<bits/stdc++.h>
using namespace std;
using ll = long long ;
int length_binary(int n)
{
    
    for(int i = 30; i>=0 ;i--)
    {
        if( (n & (1<<i)) != 0){return i+1;}
    }
    return 1;
    
}
void solve()
{
    int n;
    cin >>n;
    //n-1 && n-2 have same bits ? 
    int x  = n-1;
    int i = n - 1;
    while(length_binary(i)==length_binary(n-1))
    {
        cout<<i<<" ";
        i--;
    }
    
    for(int j = 0;j<=i;j++)cout<<j<<" ";
    cout<<"\n";
}
int main()
{
    int t = 1;
    cin>>t;
    while(t--)
    {
        solve();
    }
}