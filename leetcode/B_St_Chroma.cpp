#include<bits/stdc++.h>
using namespace std;
using ll = long long ;
void solve()
{
    int n,x;
    cin>>n>>x;

    for(int i = 0 ; i < n ;i++){
        if(i!=x)cout<<i<<" ";
    }
    if(x < n || x ==0)cout<<x;
    cout<<"\n";

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