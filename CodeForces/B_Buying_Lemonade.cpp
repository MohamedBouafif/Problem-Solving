#include "bits/stdc++.h"
using namespace std;
using  ll =long long;
#define pb push_back
#define mp make_pair

    void solve()
    {
        ll n,k;
        cin>>n>>k;
        vector<ll>a(n);
       
        for(int i = 0;i<n;i++){
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        int additional = 0;
        int m = k;
        for(int i = 0;i<n;i++)
        {
            
            if(a[i] - a[i-1]== 0)continue; // howa ya3ref kol wa7da chfeha 9bal mayod5ol donc ken yel9a wa7da sfer yimchi yzapi ili fihom sfer lkol mayo5ouhomch
            if(k==0)break;
            int s = a[i] - (i>0 ? a[i-1] : 0);
            k-=min(k, (n-i)*s);
            additional= i;
            
        }
        cout<<m+additional<<endl;
    }

        


    int main()
    {
        
        int tc=1;
        cin>>tc;
        while(tc--)
        {
            solve();
        }
           
            
        
    }