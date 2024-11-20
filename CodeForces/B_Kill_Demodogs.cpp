#include<bits/stdc++.h>
using namespace std;
using ll = long long ;

void solve()
{
    unsigned long long  n, MOD;
    cin>>n;
    MOD = 1e9 + 7;
    unsigned long long ans = 0;
    /*
    for(int i = 1;i<= n - 1;i++)
    {
        ans+= i*i; -> somme i^2
        ans+= i*(i+1);
        
    }
    */
    ans = (((n*(n+1))%MOD)*(4*n-1)%MOD*337)%MOD;
    
    cout<<ans<<endl;
    


}
int main()
{
    int t =1;
    cin>>t;
    while(t--)
    {
        solve();
    }
}