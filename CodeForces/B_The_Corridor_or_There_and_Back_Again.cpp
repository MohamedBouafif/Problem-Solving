#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int ans = INT_MAX;
        for(int i = 0; i <n;i++)
        {
            int x,y;
            cin>>x>>y;
            ans = min(ans,x + (y-1)/2);
        }
        cout<<ans<<endl;
       
    }
}