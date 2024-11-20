#include "bits/stdc++.h"
using namespace std;
using  ll =long long;
#define pb push_back
#define mp make_pair
void solve()
{
    int n;
    cin>>n;
    vector<int> v(n);
    
    for(int i = 0;i<n;i++)
    {
        cin>>v[i];
        
    }
    vector<int> New;
    for(int i = 0;i<n-1;i++)
    {
        if(v[i]!=v[i+1])New.push_back(v[i]);
    }
    if(v[n-1]!=v[n-2])New.push_back(v[n-1]);
    int ans = New.size(); 
    if(ans==0){cout<<1<<endl;return;}
    for(int i = 1;i<New.size()-1;i++)
    {
        
        if(New[i]<=max(New[i-1],New[i+1])&&New[i]>=min(New[i-1],New[i+1]))ans--;
    }
    cout<<ans<<endl;
    
   

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