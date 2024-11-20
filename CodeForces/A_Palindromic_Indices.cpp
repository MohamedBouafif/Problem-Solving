    #include "bits/stdc++.h"
    using namespace std;
    using  ll =long long int;
    #define pb push_back
    #define mp make_pair

    void solve()
    {
        /*
        s palindromic if : s0 = sn-1    
                           s1 = sn-2
                           s2 = sn-3
                           .
                           .
                           .
                           sk = sn-1-k
        taw ken na7i caracter par exemple dindice 2 chnwa lezm ysir bech s to93ed palindromic ? 
                            s0 = sn-1
                            s1 = sn-2
                            s3 = sn-3  => s3 =s2
                            s4 = sn-4 =>  s4 =s3 = s2
                            .
                            .
                            .
                            sn-1-2 = sn-1-5 => sn-1-2 = s2
        */
        int n;
        cin>>n;
        string s;
        cin>>s;
        int ans = 0;
        for(int i = n/2 - 1;i>=0;i--)
        {
            if(s[i]==s[n/2])ans++;
            else break;
        }
        int x = 0;
        if(n%2!=0)x++;
        cout<<ans*2 + x<<endl;
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