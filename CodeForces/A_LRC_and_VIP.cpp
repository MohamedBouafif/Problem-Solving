#include "bits/stdc++.h"
using namespace std;
using  ll =long long;
#define pb push_back
#define mp make_pair

    void solve()
    {
        int n;
        cin>>n;
        vector<int> a(n),b,c;
        for(int &x:a)cin>>x;
        sort(a.begin(),a.end());
        
        vector<int> ans(n, 1);
        int i = 0;
        while(a[i] == 1){
            i++;
        }
        if(i==n){
            cout<<"no\n";
            return;
        }
        bool ok = 0;
        for(;i<n;i++){
            for(int j = i + 1 ;j < n;j++){
                if(a[j]%a[i] == 0){
                    ans[j] = 2;
                    ok = 1;
                }
            }
            if(ok){
                ans[i] = 2;
                break;
            }
            if(!ok)ans[i]=1;
        }
        for(auto e:ans)cout<<e<<" ";
        if(ok){
            cout<<"yes\n";
            for(auto e:ans)cout<<e<<" ";
            cout<<endl;
        }
        else cout<<"no\n";
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