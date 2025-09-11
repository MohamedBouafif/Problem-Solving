#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    int k,x;
    cin >> k >> x;
    ll a = 1LL<<k;
    ll c = (1LL<<(k+1)) - x;
    int ans = 0;
    vector<int> ops;
    
    while(c!= a && x!=a)
    {
        if(x<c)
        {
            c-=x;
            x*=2;
            ops.push_back(1);
        }else{
            x-=c;
            c*=2;
            ops.push_back(2);

        }
        ans++;
    }
    cout<<ans<<endl;
    for(int i = ops.size()-1;i>=0;i--)cout<<ops[i]<<" ";
    cout<<endl;
    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}