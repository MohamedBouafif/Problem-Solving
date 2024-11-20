        #include "bits/stdc++.h"
        using namespace std;
        using  ll =long long int;
        #define pb push_back
        #define mp make_pair
        
        void solve()
        {
            string a;
            cin>>a;
            string x ;
            for(int i = 2;i<a.size();i++)x+=a[i];
            if(a[0]=='1'&&a[1]=='0'){
            if(x.size()==1 && x[0]-'0'>=2)cout<<"YES\n";
            else if (x.size()>1 && x[0]-'0'!=0)cout<<"YES\n";
            else cout<<"NO\n";}
            else cout<<"NO\n";
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