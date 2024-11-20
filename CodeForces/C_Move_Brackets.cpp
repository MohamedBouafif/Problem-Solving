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
    string t;
    int i = 0;
    int rem = 0;
    while(i<n)
    {
        int cnt = 0;
        while(s[i]=='(')
        {
            t+=s[i];
            cnt++;
            i++;
        }
        rem+=cnt;
        while(s[i]==')' && rem>0)
        {
            t+=s[i];
            i++;
            rem--;
        }
        while(s[i]==')'&&rem==0)
            i++;
    }
    cout<<s.size()-t.size()<<endl;

     
    
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