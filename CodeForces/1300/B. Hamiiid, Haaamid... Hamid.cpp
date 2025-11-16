#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    int n,x;
    cin >> n >> x;

    int l = -1, r = n  + 1;
    for(int i = 1;i<=n;i++){
        char c;
        cin >> c;
        if(c == '#'){
            if(i < x ) l = max(l,i);
            else r = min(i,r);
        }
    }
    if(l==-1 && r ==n +1)cout << 1 << "\n";
    else if(x==n || x ==1)cout << 1<<"\n";
    else if(l == -1){
        cout << min(x,n+2-r)<<"\n"; 
    }else if(r==n+1){
        cout << min(n+1-x, l+1)<<"\n";
    }
    else {
        cout<< max(min(l+1, n +1 -x),min(x,n+2-r)) <<"\n";
    }
    

}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
        solve();
}
