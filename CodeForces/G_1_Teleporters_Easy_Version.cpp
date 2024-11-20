    #include "bits/stdc++.h"
    using namespace std;
    using  ll =long long int;
    #define pb push_back
    #define mp make_pair

    void solve()
    {
      int n,k;
      cin>>n>>k;
      ll a[n];
      for(int i = 0;i<n;i++)
      {
        cin>>a[i];
        a[i]+=i+1;
      }
      sort(a,a+n);
      int ans = 0;
      for(int i = 0;i<n;i++)
      {
        if(k>=a[i]){ans++;k-=a[i];}
      }
      cout<<ans<<endl;

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