#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve()
{
    int n;
    cin >> n;
    int m = n;
    if(n%2 == 0) m--;
    for(int i = 1 ;i <= m;i++)
    {
        if(i%2)
        {
            cout<<-1<<" ";
        }else{
            cout<<3<<" ";
        }
    }
    if(n%2 == 0)cout<<2<<endl;
    else cout<<endl;
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