#include "bits/stdc++.h"
using namespace std;
using  ll =long long;
#define pb push_back
#define mp make_pair

void solve()
{
    int n;
    cin>>n;
    int B = n*(n-1)/2;
    
    vector<int> b(B);
    for(int i = 0;i<B;i++)cin>>b[i];
    sort(b.begin(),b.end());
    for(int i = 0;i<B;i++)
    {
        cout<<b[i]<<" ";
        n--;
        i+=n-1;
    }
    cout<<"1000000000"<<endl;
    
    
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