#include<bits/stdc++.h>
using namespace std;
void solve()
{
    string s;
    cin>>s;
    int n = s.size();
    if(s=="()"){cout<<"NO\n";return;}
    else cout<<"YES\n";
    bool ok = 0;
    for(int i = 0 ; i <n;i++)
    {
        if((s[i]=='('&&s[i+1]=='(')||(s[i]==')'&&s[i+1]==')')) ok = 1;
    }
    if(ok)for(int i = 0 ; i < n;i++)cout<<"()";
    else
    {
        for(int i = 0; i < n;i++)cout<<"(";
        for(int i = 0; i < n;i++)cout<<")";
    }
    cout<<endl;
    
    
}
int main()
{
    int t;cin>>t;
    while(t--){solve();}
}