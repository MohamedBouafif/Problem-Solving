    #include<bits/stdc++.h>
    using namespace std;
    using ll = long long ;
    int gcd(int a, int b) {
        if (b == 0) return a;
        return gcd(b, a%b);
    }
    void solve()
    {
        int n;
        cin>>n;
        int ans;
        int p1;
        cin>>p1;
        ans = abs(p1-1);
        for(int i = 1; i < n;i++)
        {
            int p;
            cin>>p;
            //cout<<p<<endl;
            ans = gcd(ans,abs(p - (i+1)));
            //cout<<"ans"<<ans<<endl;
        }
        cout<<ans<<endl;
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