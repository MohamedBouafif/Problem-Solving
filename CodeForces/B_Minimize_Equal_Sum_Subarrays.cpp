        #include "bits/stdc++.h"
        using namespace std;
        using  ll =long long int;
        #define pb push_back
        #define mp make_pair
        /*int this problem they didnt mention that the problem has deffirent solutions */
        void solve()
        {
            int n;
            cin>>n;
            int p[n];
            for(int i = 0;i<n;i++)cin>>p[i];
            for(int i = 1;i<n;i++)cout<<p[i]<<" ";
            cout<<p[0]<<endl;
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