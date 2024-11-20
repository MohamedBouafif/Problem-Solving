#include "bits/stdc++.h"
using namespace std;
using ll = long long int;
#define pb push_back
#define mp make_pair

ll gcd(ll a, ll b) {
    return b == 0 ? a : gcd(b, a % b);    
}

void solve() {
    int n;
    cin>>n;
    int a[n];
    bool cop = 0;
    cin>>a[0];
    for(int i = 1;i<n;i++)
    {
        cin>>a[i];
        if(gcd(a[i],a[i-1])==1)
        {
            cop = 1;
        }
    }
    
    if(cop)
    {
        bool copp = 0;
        int x = a[0], y = 0, ans = 0;
        for(int i = 0;i<n;i++)
        {
            if(gcd(a[i],a[i+1]) == 1)
            {
                ans = max(ans, i + i + 1 );
                x = a[i];
                y = i + 1;
                copp = 1;
            }
            else if(gcd(a[i],x) ==1)
            {
                if(copp)
                {
                    ans = max(ans, y + i + 1);
                    y = i + 1;
                }

            }
        }
        cout<<ans<<endl;

    }
    else cout<<-1<<endl;

}

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}
