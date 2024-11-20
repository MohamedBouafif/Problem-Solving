#include<bits/stdc++.h>
using namespace std;
using ll = long long ;


void solve()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i = 0;i<n;i++)
    {
        for(int j = 0;j<4;j++)
        {
            char x;
            cin>>x;
            if(x=='#') v[i] = j+1;
        }
    }
    for(int i = n-1;i>=0;i--)cout<<v[i]<<" ";
    cout<<endl;


}
int main()
{
    int t =1;
    cin>>t;
    while(t--)
    {
        solve();
    }
}