#include<bits/stdc++.h>
using namespace std;
using ll = long long ;


void solve()
{
    int n, x;
    cin >> n >> x;
    vector<ll> a(n) , v(n);
    for(int i = 0 ; i < n ;i++){
        cin >> a[i]; 
        v[i] = a[i];
    }

    sort(v.begin(), v.end());
    if(v == a || n/2 >= x){cout<<"YES\n";return;}
    else{
        for(int i = 0 ; i < n ;i++){
            if(a[i] != v[i]){
            int pos = (find(v.begin(),  v.end(), a[i]) - v.begin() );
            int distance = abs(pos - i);
                if(!(distance >= x || i+1 >= x || n - i - 1>=x)){
                    cout<<"NO\n";
                    return;
                }
 
            }
        }
    }
    cout<<"YES\n";
    




}
int main()
{
    int t = 1;
    cin>>t;
    while(t--)
    {
        solve();
    }
}