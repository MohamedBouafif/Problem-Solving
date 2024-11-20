#include "bits/stdc++.h"
using namespace std;
using  ll =long long;
#define pb push_back
#define mp make_pair

void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    for(int i = n-1;i>0;i--)
    {
        if(s[i]<s[i-1])
        {
            cout<<"YES\n";
            cout<<i<<" "<<i + 1<<endl;
            return;
        }
    }
    cout<<"NO\n";
    return;
    
    
}
    

    


int main()
{
    int tc ;
    tc = 1;
    while(tc--)
    {
        
        solve();
        
    }
}