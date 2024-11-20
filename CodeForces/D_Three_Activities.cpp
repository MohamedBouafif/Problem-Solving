#include "bits/stdc++.h"
using namespace std;
#define ll long long

vector<int> sol(vector<int>& a,int n)
{
    int b = -1, c=-1,d = -1;
    vector<int> v;
    for(int i = 0;i<n;i++)
    {
        if(b == -1 || a[i] > a[b]){
            d = c;
            c  =b;
            b = i;
        }
        else if(c == -1 ||a[i] > a[c])
        {
             d = c;
             c = i;
        }
        else if(d == -1 || a[i] > a[d])
        {
            d = i;
        }
    }
    
    v.push_back(b);
    v.push_back(c);
    v.push_back(d);
    return v;
   
}


void solve()
{
    int n;
    cin>>n;
    vector<int> a(n),b(n),c(n);
    for(int i = 0;i<n;i++)cin>>a[i];
    for(int i = 0;i<n;i++)cin>>b[i];
    for(int i = 0;i<n;i++)cin>>c[i];
    
    vector <int> v1 = sol(a,n),v2 = sol(b,n),v3=sol(c,n);
    
    int ans = 0;
    for(auto e1:v1)
    {
        for(auto e2:v2)
        {
            for(auto e3:v3)
            {
                if(e1!=e2 && e2!= e3 && e1!=e3)
                {
                    ans = max(ans,a[e1] + b[e2] + c[e3]);
                }
            }
        }
    }
    cout<<ans<<endl;
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