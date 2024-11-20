#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i = 0;i<n;i++)cin>>v[i];
    int ans = 0, cnt = 0;
    for(int i = 0; i < n - 1; i++)
    {
        if(v[i] <= v[i + 1]) cnt++;
        else
        {
            ans = max(ans, cnt);
            cnt = 0;
        }
    }
    cout<<max(cnt + 1, ans + 1);
}