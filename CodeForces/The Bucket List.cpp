#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin>>n;
    vector<tuple<int,int,int>> v(n);
    for(int i = 0; i < n ;i++)
    {
        int s,t,b;
        cin>>s>>t>>b;
        v[i]={s,t,b};
    }
    sort(v.begin(),v.end());
    int cost =get<2>(v[0]), tj = get<1>(v[0]), free=0;
    for(int i = 1; i < n; i++)
    {
        if(get<0>(v[i])>get<1>(v[i-1])) free+= get<2>(v[i - 1]);
        int costj = max (get<2>(v[i]) - free, 0);
        free = max(0, free-costj);
        cout<<"free=" <<free<<endl<<"costj ="<<costj<<endl;
        cost+= costj;
    }
    cout<<cost;
}