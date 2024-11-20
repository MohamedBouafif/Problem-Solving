#include "bits/stdc++.h"
using namespace std;
using  ll =long long;
#define pb push_back
#define mp make_pair

void solve()
{
    int n;
    cin>>n;
    string s,t;
    cin>>s>>t;
    int i = 0;
    while(i<n)
    {
        int nb1= 0, nb0 = 0;
        if(s[i] != t[i])
        {
            while(i<n && s[i] != t[i])
            {
                if(s[i] == '0')nb0++;
                else nb1 ++;
                i++;
            }
        }
        else
        {
            while(i<n&&s[i] == t[i])
            {
                if(s[i] == '0')nb0++;
                else nb1 ++;
                i++;
            }
            if(i==n)break;
        }
        if(nb1 != nb0)
        {
                cout<<"NO\n";
                return;
        }
    }
    cout<<"YES\n";
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