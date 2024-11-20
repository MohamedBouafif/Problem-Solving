    #include "bits/stdc++.h"
    using namespace std;
    using  ll =long long;
    #define pb push_back
    #define mp make_pair

    void solve()
    {
        string s;
        cin>>s;
        int p = 0;
        for(int i = 0;i<s.size() - 1;i++)
            if(s[i]==s[i+1])
            {
                p=i+1;break;
            }
        if(p==0)
        {
            if(s[0]=='a')cout<<'b'<<s<<endl;
            else cout<<"a"<<s<<endl;
        }
        else{
        for(int i = 0;i<p;i++)cout<<s[i];
        if(s[p-1]=='a')cout<<"b";
        else if(s[p-1]=='z')cout<<"y";
        else cout<<(char)(s[p-1]+1);
        for(int i = p;i<s.size();i++)cout<<s[i];
        cout<<endl;}
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