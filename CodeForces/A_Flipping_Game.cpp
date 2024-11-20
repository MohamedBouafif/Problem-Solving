    #include "bits/stdc++.h"
    using namespace std;
    using  ll =long long;
    #define pb push_back
    #define mp make_pair

    void solve()
    {
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i = 0;i<n;i++)cin>>v[i];
        int ans = 0;
        for(int i = 0;i<n;i++)
        {
            
            int cnt_prev = 0,cnt_after = 0,cnt = 0;
            int j = i-1;
            while(v[i]==0)
            {
                cnt++;
                i++;
                
            }
            
            int k = i;
            while(j>=0&&v[j]==1)
            {
                cnt_prev++;
                j--;
            }
            while(k<n&&v[k]==1)
            {
                cnt_after++;
                k++;
            }
            
            ans = max(ans,cnt+cnt_prev+cnt_after);
        }
        cout<<ans<<endl;
        
    }
        

        


    int main()
    {
        int tc=1 ;
       
        while(tc--)
        {
            
            solve();
            
        }
    }