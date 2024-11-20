        #include "bits/stdc++.h"
        using namespace std;
        using  ll =long long int;
        #define pb push_back
        #define mp make_pair
        
        void solve()
        {
            int n;
            cin>>n;
            vector<int> a(n);
            for(int i = 0;i<n;i++)
            {
                cin>>a[i];
            }
            vector<int> b(n);
            for(int i = 0;i<n;i++)b[i]=0;
            b[a[0]- 1 ] = 1;
            for(int i = 1;i<n;i++)
            {
                if(a[i]-1>0 &&a[i]+1 <= n)
                {
                    if(b[a[i] - 1 - 1]!=0&&b[a[i]+1 - 1]!=0){
                        cout<<"NO\n";return;
                    }
                    else b[a[i] - 1 ] = 1;

                }
                else if(a[i]==n)
                {
                    if(b[a[i] - 1 - 1] == 0){cout<<"NO\n";return;}
                    else b[a[i] - 1 ] = 1;
                }
                else if(a[i]==1)
                {
                    if(b[a[i] + 1 - 1] == 0){cout<<"NO\n";return;}
                    else b[a[i] - 1] = 1;
                }

            }
            cout<<"YES\n";

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