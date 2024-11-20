#include "bits/stdc++.h"
using namespace std;
#define ll long long

int binarySearch(int arr[], int low, int high, int x)
{
    while (low <= high) {
        int mid = low + (high - low) / 2;

        
        if (arr[mid] == x)
            return mid;

        
        if (arr[mid] < x)
            low = mid + 1;

        else
            high = mid - 1;
    }

    
    return -1;
}
void solve()
{
    int n;
    cin>>n;
    int  w[n], pl[n],pr[n];
    for(int i = 0;i<n;i++) cin>>w[i];
    pl[0] = w[0];
    for(int i  = 1;i<n;i++) pl[i] = pl[i - 1] + w[i];
    pr[0] = w[n-1];
    for(int i = 1;i<n;i++) pr[i] = pr[i-1] + w[n - 1 - i];

    int ans = 0;
    for(int i = 0;i<n;i++)
    {
        int x = i+1;
        int y = binarySearch(pr,0,n-1,pl[i]);
        if(y!=-1)
        {
            y++;
            if(x+y<=n)ans = max(ans,x+y);
        }
            

    }
    cout<<ans<<endl;

}
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        solve();
    }
}