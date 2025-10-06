#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n), b(n);

    for(int i = 0 ; i < n;i ++)cin >>a[i];
    for(int i = 0 ; i < n;i ++)cin >>b[i];
    int x = 0;
    for(int i = 0 ; i < n ;i++)
    {
        if(a[i] > b[i]) x+= a[i] - b[i];
        
    }
    cout<<x+1<<endl;
}

int main()
{
    int t;
    cin >> t;
    
    while (t--)
    {

        solve();
    }
}