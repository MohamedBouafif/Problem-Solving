    #include "bits/stdc++.h"
    using namespace std;
    using  ll =long long int;
    #define pb push_back
    #define mp make_pair

    void solve()
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int a=0,b=0,c=0,d=0;
        for(int i = 0;i<s.size();i++)
        {
            if(s[i]=='A'&&a<n)a++;
            if(s[i]=='B'&&b<n)b++;
            if(s[i]=='C'&&c<n)c++;
            if(s[i]=='D'&&d<n)d++;
        }
        cout<<a+b+c+d<<endl;
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