#include<bits/stdc++.h>
using namespace std;
using ll = long long ;

void solve()
{
    int n;
    cin>>n;
    ll s = 0;
    vector<int> v(n);
    for(int i = 0;i<n;i++){cin>>v[i];s+=v[i];}
    if(n>2){
        sort(v.begin(),v.end());
        s-= v[n/2];
        ll minimum_value = (2*n - 1) * v[n/2] - s;
        if( minimum_value<0)cout<<0<<endl;
        else cout<<minimum_value+1<<endl;
    }
    else cout<<-1<<endl;

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