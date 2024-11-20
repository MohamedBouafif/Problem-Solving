#include "bits/stdc++.h"
using namespace std;
using  ll =long long;
#define pb push_back
#define mp make_pair

void solve()
{
    int n;
    cin>>n;
    vector<int> v(n);
    vector<ll> bit(31);

    for(int i = 0;i<n;i++){cin>>v[i];}
    
    sort(v.begin(),v.end(),greater<int>());

    for(int k = 0;k<n;k++)
    {
        int pos_max_bit=30;
        for(int i = 30;i>=0;i--)
        {
            if((v[k] & (1<<i)) !=0) {pos_max_bit = i;break;}

        }
        int j = k+1;
        bit[pos_max_bit]++;
        for(;j<n;j++)
        {
            if(v[j]  & (1<<pos_max_bit)) bit[pos_max_bit]++;
            else break;
        }
        k = j - 1;
        
    }
    ll ans = 0;
    for(int i = 0;i<31;i++)
    {
        ans += bit[i]*(bit[i]-1)/2;
    }
    cout <<ans<<endl;
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