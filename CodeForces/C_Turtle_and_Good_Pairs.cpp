#include<bits/stdc++.h>
using namespace std;
using ll = long long ;
bool cmp(pair<int,char> p1 ,pair<int,char> p2)
{
    return p1.first>p2.first;
}
void solve()
{
    int n;
    cin>>n;

    string s;
    cin>>s;
    vector<pair<int,char> >v(26);
    int a = 0;
    for(int i = 0;i<n;i++)
    {
        v[s[i] - 'a'].first++;
        v[s[i]-'a'].second = s[i];

    }
    sort(v.begin(),v.end(),cmp);
    for(auto e:v){
        if(e.first!=0)a++;
    }
 
    for(int i = 0;i<a;i++)
    {
        for(int j = i+1;j<a;j++)
        {
            for(int k = 1;k<=min(v[i].first,v[j].first);k++)
            {
                cout<<v[j].second<<v[i].second;
            }
            int y = min(v[i].first,v[j].first);
            v[i].first-=y;
            v[j].first-=y;
            //if(v[i].first==0) i = j;
        }
        while(v[i].first--)cout<<v[i].second;
    }
    cout<<endl;



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