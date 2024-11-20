#include "bits/stdc++.h"
using namespace std;
using  ll =long long;
#define pb push_back
#define mp make_pair

void solve()
{
    string a,b;
    cin>>a>>b;
    int cnt_cons = 0;
    for(int i = 0;i<a.size();i++)
    {
        for(int j = 0;j<b.size();j++)
        {
            if(a[i]==b[j])
            {
                int cnt = 1;
                for(int k = 1;i+k<a.size()&&j+k<b.size();k++)
                {
                    if(a[i+k]==b[j+k])cnt++;
                    else break;
                }
                cnt_cons = max(cnt,cnt_cons);
            }
        }
    }
    
    cout<<a.size() + b.size() - 2*cnt_cons<<endl;
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