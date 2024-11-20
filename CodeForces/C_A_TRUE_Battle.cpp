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
        if(s[0]=='1'||s[n-1]=='1')cout<<"YES\n";
        else
        {
            bool ok = 0;
            for(int i = 0;i<n-1;i++)if(s[i]==s[i+1] && s[i]=='1'){ok = 1;break;}
            if(ok)cout<<"YES\n";
            else cout<<"NO\n";
        }
        
    }

        


    int main()
    {
        
        int tc=1;
        cin>>tc;
        while(tc--)
        {
            solve();
        }
           
            
        
    }