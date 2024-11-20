#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        vector<pair<int,int>> v(n);
        for(int i =0;i<n;i++)
        {
            cin>>v[i].first;
        } 
        for(int i =0;i<n;i++)
        {
            cin>>v[i].second;
        } 
        sort(v.begin(),v.end());
        for(int i = 0; i < n;i++)cout<<v[i].first<<" ";
        cout<<endl;
        for(int i = 0; i < n;i++)cout<<v[i].second<<" ";
        cout<<endl;
        
    }
}