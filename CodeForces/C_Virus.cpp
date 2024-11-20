#include "bits/stdc++.h"
using namespace std;
using  ll =long long;
#define pb push_back
#define mp make_pair
void solve()
{
    int n,m;
    cin>>n>>m;
    vector<int> infected(m);
    vector<int> diff(m);
    for(int i = 0;i<m;i++)cin>>infected[i];
    sort(infected.begin(),infected.end());

    for(int i = 1;i<m;i++)diff[i-1] =infected[i] - infected[i-1] -1 ;



    if(infected[m-1]==n && infected[0] == 1)diff[m-1] = 0;
    else{
        diff[m-1] = n - infected[m-1] + infected[0] - 1;
    }
    
    
    sort(diff.begin(),diff.end(),greater<int>());
    int s = 0;
    for(int i = 0;i<m;i++)
    {
        if(diff[i]-i*4 == 1){s++;break;}
        else
            s+=max(0, diff[i] - 1 - i*4);
    }
    cout<<n-s<<endl;
   

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