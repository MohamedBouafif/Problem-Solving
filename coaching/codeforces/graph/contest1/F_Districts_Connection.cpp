#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    set<int> s;
    vector<int> v(n);
    for(int i = 0 ;i < n;i++){
        cin>>v[i];
        s.insert(v[i]);
    }
    if(s.size() == 1){
        cout<<"NO\n";
    }else{
        cout<<"YES\n";
        int root = 1;
        int child;
        for(int i = 1 ; i < n;i++){
            if(v[i]!= v[root - 1]){
                cout<<root<<" "<<i + 1<<endl;
                child = i + 1;
            }
        }
        for(int i = 1;i<n;i++){
            if(v[i] == v[root - 1])cout<<child<<" "<<i + 1<<endl;
        }

    }
    
    
}
int main()
{
    int t;
    cin>>t;
    
    while (t--)
    {
        solve();
    }
}
