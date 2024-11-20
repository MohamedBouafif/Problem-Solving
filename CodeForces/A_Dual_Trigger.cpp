    #include <bits/stdc++.h>
    using namespace std;
    void solve()
    {
        int n;cin>>n;
        string s;
        cin>>s;
        int cnt = 0;
        for(int i = 0 ;i < n;i++) if(s[i]=='1') cnt++;
        if(cnt%2!=0)cout<<"NO\n";
        else if(cnt==2)
        {
            for(int i  = 0 ; i < n-1; i++)
                if(s[i]==s[i+1]&& s[i]=='1'){cout<<"NO\n";return;}
            cout<<"YES\n";
        }
        else cout<<"YES\n";
    }
    int main()
    {
        int t;cin>>t;
        while(t--)
        {
            solve();
        }

    }