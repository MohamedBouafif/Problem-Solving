#include "bits/stdc++.h"
using namespace std;
#define ll long long

bool prime(int n) 
{
    if (n < 2) return false;
    for (int x = 2; x*x <= n; x++)
    {
        if (n%x == 0) return false;
    }
    return true;
}
vector<int> factors(int n) 
{
    vector<int> f;
    for (int x = 2; x*x <= n; x++)
    {
        while (n%x == 0)
        {
            f.push_back(x);
            n /= x;
        }
    }
    if (n > 1) f.push_back(n);
    return f;
}
void solve()
{
    int n;
    cin>>n;
    if(prime(n))
    {
        cout<<1<<" "<<n-1<<endl;
    }
    else
    {
        vector<int> d = factors(n);
        int a  = 1;
        sort(d.begin(),d.end(),greater<int>());
        int i = 0;
        for(;i<d.size()&&a<n;i++)
        {
            a*=d[i];
        }
        a/=d[i-1];
        cout<<a<<" "<<n-a<<endl;
    }
}
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        solve();
    }
}