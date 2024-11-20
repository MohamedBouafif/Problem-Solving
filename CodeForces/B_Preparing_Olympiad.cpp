#include "bits/stdc++.h"
using namespace std;
#define ll long long
void solve()
{
    int n,l,r,x;
    cin>>n>>l>>r>>x;
    int a[n];
    for(int i = 0;i<n;i++)cin>>a[i];
    
    int nb_ways = 0;
    for(int mask = 0; mask < (1<<n);mask++)
    {
        int problem_diffuclty_in_this_subset = 0, small= 1e9,big = 0;
        bool found_little = 0;
        
        for(int i = 0;i<n;i++)
        {
            if(mask & (1<<i))
            {
                problem_diffuclty_in_this_subset += a[i];
                small = min(small,a[i]);
                big = max(big,a[i]);
            }
            
            
        }
        if(problem_diffuclty_in_this_subset >= l && problem_diffuclty_in_this_subset<=r && big - small >= x)
        {
            nb_ways++;
        }
        
    }
    cout<<nb_ways<<endl;
}
int main()
{
    int tc=1;
    
    while(tc--)
    {
        solve();
    }
}