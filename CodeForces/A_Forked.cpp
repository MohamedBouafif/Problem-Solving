#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        long long a,b;
        cin>>a>>b;
        long long xk,yk,yq,xq;
        cin>>xk>>yk>>xq>>yq;
        vector<pair<long long, long long>> comb={{a,b} , {a,-b}, {-a, b}, {-a, -b}, {b,a}, {b, -a}, {-b,a}, {-b,-a}};
        set<pair<long long, long long>> s1 ,s2;
        for(int i = 0;i<8;i++) s1.insert({comb[i].first+xk, comb[i].second+yk});
        for(int i = 0;i<8;i++) s2.insert({comb[i].first+xq, comb[i].second+yq});
        int ans = 0;
        for(auto e: s1)
        {
            if(s2.find(e)!=s2.end())
            {
                ans++;
            }
        }
        cout<<ans<<endl;
        
        
    }
}