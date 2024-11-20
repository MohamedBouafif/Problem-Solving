    #include "bits/stdc++.h"
    using namespace std;
    using  ll =long long int;
    #define pb push_back
    #define mp make_pair

    void solve()
    {
        string s,t;
        cin>>s>>t;
        int n = s.size(), m = t.size();
        int i = 0, j = 0;
        for(;i<n ;i++)
        {
            if(s[i]==t[j]) j++;
            if(s[i]=='?'&&j<m) {s[i] = t[j];j++;}
            if(s[i]=='?'&&j>=m) s[i] = 'a';

        }
        if(j<t.size())cout<<"NO\n";
        else cout<<"YES\n"<<s<<endl;
    }
        

        


    int main()
    {
        int tc ;
        cin>>tc;
        while(tc--)
        {
            
            solve();
            
        }
    }