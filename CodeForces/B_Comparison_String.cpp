    #include<bits/stdc++.h>
    using namespace std;
    using ll = long long ;

    void solve()
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int great = 0; 
        int less = 0;
        int ans = 0;
        int i = 0;
        for(; i < n ;i++)
        {
            if(s[i]=='>') great++;
            else 
            {
                if(great!=0) ans = max(great+1, ans);
                great = 0;
            }
            if(s[i]=='<') less++;
            else
            {
                if(less!=0) ans = max(ans, less+1);
                less = 0;
            }
        }
     
        cout<<max(ans,max(great+1,less+1))<<endl;
    }
    int main()
    {
        
        int t;
        cin>>t;
        while(t--)
        {
            solve();
        }
        return 0;
    }