#include<bits/stdc++.h>
using namespace std;
using ll = long long ;
void solve()
{
    string s;
    cin>>s;
    int cnt1 = 0,cnt0=0;
    for(int i = 0;i<s.size();i++)
        if(s[i]=='0')cnt0++;
        else cnt1++;
    if(cnt1==cnt0)cout<<0<<endl;
    else
    {
        string t;

        for(int i = 0;i<s.size();i++)
        {
            if(s[i]=='0')
            {
               if(cnt1>0){t+='1';cnt1--;}
               else t+='0';
                
            }
            if(s[i]=='1')
            {
                if(cnt0>0){t+='0';cnt0--;}
                else t+='1';
            }
        }
        for(int i = 0;i<s.size();i++)if(t[i]==s[i]){cout<<s.size()-i<<endl;return;}
        
    }
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