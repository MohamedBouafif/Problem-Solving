#include <bits/stdc++.h>
using namespace std;
vector<int> in(int a, int b)
{
    vector<int> v;
    for(int i = min(a,b); i<=max(a,b);i++) v.push_back(i);
    return v;
}
vector<int> out(int a, int b)
{
    vector<int> v;
    for(int i = 1; i <= 12 ;i++)
    {
        if(!(i>= min(a,b)&& i<= max(a,b))) v.push_back(i);
    }
    return v;
}
bool inside (int x,vector<int> v)
{
    for(int i = 0 ; i < v.size();i++) if(v[i]==x) return true;
    return false;
}
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if((inside(c,in(a,b))&& inside(d,out(a,b)))||(inside(c,out(a,b))&&inside(d,in(a,b)))) cout<<"YES\n";
        else cout<<"NO\n";
    }

}