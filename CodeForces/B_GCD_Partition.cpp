#include "bits/stdc++.h"
using namespace std;
using ll = long long int;
#define pb push_back
#define mp make_pair
int gcd(int a, int b)
{
    return b == 0 ? a : gcd(b, a % b);    
}
 
void solve() {
    int n;
    cin>>n;
    int a[n];
    cin>>a[0];
    int g = a[0];
    for(int i = 1;i<n;i++){cin>>a[i];g = gcd(g,a[i]);}
    int pr[n];
    pr[0] = a[0];
    for(int i = 1;i<n;i++)pr[i] = pr[i-1] + a[i];
    int x = 1;
    for(int i = 0;i<n-1;i++)
    {
        x = max(x, gcd(pr[i],pr[n-1] - pr[i]));
    }
    cout<<max(x,g)<<endl;


    
}

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}
