#include<bits/stdc++.h>
using namespace std;
using ll = long long ;
void solve()
{
    
    string s;
    cin>>s;
    int ab = 0, ba = 0;
    
    for(int i = 0; i <= s.size() - 2 &&s.size()>=2; i++)
    {
        
        if(s[i]=='a'&&s[i+1]=='b') ab++;
        if(s[i]=='b'&&s[i+1]=='a') ba++;
      
        
    }
    
   
    if(ab!=ba)
    {
        if(ab>ba)
        {
            for(int i = s.size()-1;i>=0;i--)
            {
                if(s[i]=='b')
                {
                    s[i]='a';
                    break;
                }
            }
        }
        else
        {
            for(int i = s.size()-1;i>=0;i--)
            {
                if(s[i]=='a')
                {
                    s[i]='b';
                    break;
                }
            }
        }
        
    }
    cout<<s<<endl;
    
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