#include "bits/stdc++.h"
using namespace std;
using ll = long long;
#define pb push_back
#define mp make_pair

void solve()
{
    //idea : check if the current accumated sum >= current c[i] 
    int n;
    cin>>n;
    ll c[n];
    for(int i = 0;i<n;i++)cin>>c[i];
    sort(c,c+n);
    if(c[0]!=1)cout<<"NO\n";
    else
    {
        vector<ll> pr;
        pr.pb(1);
        for(int i = 1;i<n;i++)
        {
            if(c[i] <= pr[pr.size() - 1])
            {
                pr.pb(pr[pr.size() - 1] + c[i]);
            }
            else
            {
                cout<<"NO\n";
                return;
            }
        }
        cout<<"YES\n";

    }

}

int main()
{
    ll tc;  
    cin >> tc;
    while (tc--)
    {
        solve();
    }
}
