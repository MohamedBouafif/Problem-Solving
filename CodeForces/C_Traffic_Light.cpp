#include "bits/stdc++.h"
using namespace std;
#define ll long long

void solve()
{
    int n;
    char c;
    string s;
    cin>>n>>c>>s;
    if(c=='g'){cout<<0<<endl;return;}
    vector<int> v;
    for(int i = 0; i < s.size();i++)
        if(s[i]=='g')v.push_back(i);
    int ans = 0;
    int m = v.size();
    
    for(int i = 0; i < s.size();i++)
    {
        if(s[i]==c)
        {
            if(i>v[m-1]) ans = max(ans, n - i + v[0]);
            else
            {
                vector<int>::iterator uper1 = upper_bound(v.begin(),v.end(), i);
                int pos = uper1 - v.begin();
                
                ans = max(ans, v[pos] - i);
            }
        }
    }
    cout<<ans<<endl;
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