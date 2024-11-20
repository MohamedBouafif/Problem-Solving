#include "bits/stdc++.h"
using namespace std;
using  ll =long long int;
#define pb push_back
#define mp make_pair        
void solve()
{
    int n;
    cin>>n;
    int a[n];
    
    for(int i = 0;i<n;i++)cin>>a[i];
    
    
    int m;
    cin>>m;
    for(int j =0;j<m;j++)
    {
        unordered_map<int,char> mp1;
        unordered_map<char,int> mp2;
        string s;
        cin>>s;
        if(s.size()==n)
        {
            bool bad = 0;
            for(int i  = 0;i<n;i++)
            {
                if(!mp1.count(a[i]))mp1[a[i]] = s[i];
                if(!mp2.count(s[i]))mp2[s[i]] = a[i];
                
                    if(mp1[a[i]]!=s[i] ||mp2[s[i]]!=a[i])
                    {
                        bad = 1;
                        break;
                    }
                
                
            }
            if(bad)cout<<"NO\n";
            else
            cout<<"YES\n";
        }
        else cout<<"NO\n";

            

    }
        
       
            
}
            

            


int main()
{
    int tc ;
    cin>>tc;
    
    while(tc--)
    {
                    
        solve();
                    
    }
}