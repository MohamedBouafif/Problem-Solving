#include<bits/stdc++.h>
using namespace std;
using ll = long long ;
void solve()
{
    string e;
    cin>>e;
    string cmp = "@odoo.com";
    reverse(cmp.begin(),cmp.end());
    for(int i= 0; i < cmp.size();i++)
    {
        if(cmp[i] != e[e.size() - 1 -i])
        {
            cout<<"no\n";
            return;
        }
    }
    if(e.size() - cmp.size()<2 || e.size() - cmp.size()>4)
    {
        cout<<"no\n";
        return;
    }
    for(int i = 0; i <= e.size()-1-cmp.size();i++)
    {
        if(e[i]>='a'&& e[i]<='z')continue;
        else
        {
            cout<<"no\n";
            return;
        }
    }
    cout<<"yes\n";
}
int main()
{
    int t =1;
   
    while(t--)
    {
        solve();
    }
}