#include "bits/stdc++.h"
using namespace std;
using  ll =long long;
#define pb push_back
#define mp make_pair

    void solve()
    {
        int n;
        cin>>n;
        char c;
        cin>>c;
        string s;
        cin>>s;
        bool eq = 1;
        int biggest_pos = -1;
        for(int i = 0;i<s.size()-1;i++)
        {   
            if(s[i] != s[i+1]){
                eq = 0;
            }
        }
        for(int i = n-1;i>=0;i--)if(s[i]==c){biggest_pos = i+1;break;}
        if(eq&&s[n-1]==c) cout<<0<<endl;
        else
        {
            if(biggest_pos*2 > n)cout<<1<<endl<<biggest_pos<<endl;
            else cout<<2<<endl<<n<<" "<<n-1<<endl;
        }
        
        
    }

        


    int main()
    {
        
        int tc;
        cin>>tc;
        while(tc--)
        {
            solve();
        }
           
            
        
    }