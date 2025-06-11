#include <bits/stdc++.h>
using namespace std;
using ll = long long ;

void solve()
{
    string e;
    cin>>e;
    if(e.size() - 9 <4 ||e.size() - 9 > 30 )cout<<"No"<<endl;
    else{
        string t = ".odoo.com";
        string s;
        if (e.size() <= t.size() || e.substr(e.size() - t.size()) != t) {
        cout << "No" << endl;
        return;
    }
        
       int i = e.size() - 9 - 1;
        if(e[0] =='-' || e[i] == '-'){
            cout<<"No"<<endl;
            return;
        }
        for(;i >= 0; i-- ){
            if(!(islower(e[i]) || isdigit(e[i]) || e[i] == '-')){
                cout<<"No"<<endl;
                return;
            }
        }cout<<"Yes"<<endl;



    }return;
    
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int q;
    q = 1;
    solve();
    
}
