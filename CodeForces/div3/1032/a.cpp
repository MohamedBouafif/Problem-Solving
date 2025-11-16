#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    int n,s;
    cin >> n >> s ;
    vector<int> v(n);
    for(int i = 0 ; i < n ;i++)cin >> v[i];
    if(s <= v[0]){
        cout<<v[n-1] - s << endl;
    }else if(s >= v[n-1]){
        cout<< s - v[0] << endl; 
    }else{
        int idx = 0;
        for(int i = 0;i<n;i++){
            if(v[i] > s){
                cout<<min(s - v[0] + v[n-1] - v[0], v[n-1] - s + v[n-1] - v[0])<<endl;
                return;
            }
        }
    }

}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}
