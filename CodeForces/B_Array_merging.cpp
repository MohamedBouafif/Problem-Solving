#include<bits/stdc++.h>
using namespace std;
using ll = long long ;
void solve()
{
    //second submession: making my code better
    int n;
    cin>>n;
    int a[n],b[n];
    for(int i = 0;i < n;i++)
    {
        cin>>a[i];
    }
    for(int i = 0;i < n;i++)
    {
        cin>>b[i];
        
    }
    const int  s = 2* 1e5;
    vector<int> v(s),w(s);
    int cnt1 = 0, cnt2 = 0;
    int i = 0;
    for(;i < n-1;i++)
    {
        if(a[i]==a[i+1])
        {
            cnt1++;
        }
        else
        {
            v[a[i]] = max(v[a[i]], ++cnt1);
            cnt1 = 0;
        }

        if(b[i] == b[i+1])
        {
            cnt2++;
        }
        else
        {
            w[b[i]] = max(w[b[i]], cnt2 + 1);
            cout<<w[b[i]]<<endl;
            cnt2 = 0;
        }
    }
    if(i==n-1 && n ==1){++v[a[i]];}
    else if (i>1&&i==n-1 && a[n-1]!=a[n-2]){v[a[n-1]] = max(1,v[a[n-1]]);cout<<v[b[n-1]]<<endl;}
    else if (i==n-1 && cnt1!=0) v[a[n-1]] = max(v[a[n-1]],++cnt1);
    if(i==n-1 && n ==1){++w[b[i]];}
    else if (i==n-1 && cnt2!=0) w[b[n-1]] = max(w[b[n-1]],++cnt2);
    else if (i>1&&i==n-1 && b[n-1] != b[n-2]){w[b[n-1]] = max(1,w[b[n-1]]);cout<<w[b[n-1]]<<endl;}
    
    cout<<w[1]<<" "<<w[2]<<endl;
    for(int i = 0;i <s;i++)
        v[i]+= w[i];
    cout<<v[1]<<" "<<v[2]<<endl;
    sort(v.begin(),v.end(),greater<int>());
    cout<<v[0]<<endl;
    
    
    

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