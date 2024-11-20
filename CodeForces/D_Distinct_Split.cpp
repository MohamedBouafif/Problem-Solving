#include "bits/stdc++.h"
using namespace std;
 
#define ll long long



void solve()
{
    int n;string s;
    cin>>n>>s;
    int occ[26]={0},p[26]={0};
    for(auto x:s)occ[x-'a']++;
    int ans = 0;
    for(auto x:s)
    {   
        occ[x-'a']--;
        p[x-'a']++;
        int c = 0;
        for(int i = 0;i<26;i++)
            c+= min(1,occ[i]) + min(1,p[i]);
        ans = max(c,ans);
    }
    cout<<ans<<endl;
    

    
    
    

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