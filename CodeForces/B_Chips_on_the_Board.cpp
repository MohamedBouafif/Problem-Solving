#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int a[n], b[n];
        for(int i = 0 ; i < n;i++)cin>>a[i];
        for(int i = 0 ; i < n;i++)cin>>b[i];
        sort(a,a+n);sort(b,b+n);
        long long sum1 = 0, sum2 = 0;
        for(int i = 0 ; i < n ;i++)
        {
            sum1+= a[0] + b[i];
            sum2+= b[0] + a[i];
        }
        cout<<min(sum1,sum2)<<endl;
        
        
        
    }
}