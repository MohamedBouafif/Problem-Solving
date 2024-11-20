#include "bits/stdc++.h"
using namespace std;
using  ll =long long;
#define pb push_back
#define mp make_pair

void solve()
{
    int n,k;
    cin>>n>>k;
    int normal_position;
    
    if(k%n == 0)normal_position = n;
    else normal_position = k%n;
    if(n%2 == 0)
    {
       cout<<normal_position<<endl;
    }
    else
    {
        int additional = k/(n/2);
        if(k%(n/2)==0)additional --;
        
        int real_position ; 
        if((normal_position + additional)%n == 0)real_position = n;
        else real_position = (normal_position + additional)%n;
        cout<<real_position<<endl;
    }
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