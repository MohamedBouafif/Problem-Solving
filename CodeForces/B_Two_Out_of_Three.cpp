#include "bits/stdc++.h"
using namespace std;
using  ll =long long;
#define pb push_back
#define mp make_pair

void solve()
{
    int n;
    cin>>n;
    vector<int> a(n),b(n);
    map<int,int> occ;
    int cnt = 0;
    for(int i = 0;i<n;i++)
    {
        cin>>a[i];
        occ[a[i]]++;
    }
    for(auto e:occ)if(e.second>1)cnt++;
    if(cnt<=1)cout<<-1<<endl;
    else
    {
        int cnd1 = 1;
        for(int i = 0;i<n-1;i++)
        {
            if(cnd1 && occ[a[i]]>1)
            {
                cnd1--;
                b[i] = 1;
                for(int  j = i+1;j<n;j++)
                {
                    if(a[i]==a[j])b[j]=2;
                }
                occ[a[i]] = 0;
            }
            else if (occ[a[i]]>1)
            {
                b[i]=1;
                for(int  j = i+1;j<n;j++)
                {
                    if(a[i]==a[j])b[j]=3;
                }
                occ[a[i]] = 0;
            }
            else if(occ[a[i]]==1) b[i] = 1;
        }
        if(occ[a[n-1]]==1)b[n-1]=1;
        for(auto e:b)cout<<e<<" ";
        cout<<endl;
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