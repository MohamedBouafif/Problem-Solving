#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    int n,m,M = 0;
    cin >> n >> m;
    vector<vector<int>> v(n,vector<int>(m));
    vector<int> rows(n,0), columns(m,0);
    for(int i = 0 ;i  < n ;i++){
        for(int j = 0 ; j < m ; j++){
            cin >> v[i][j];
            M = max(M, v[i][j]);
        }
    }
    int cnt = 0;
    for(int i = 0 ; i < n ;i++){
        for(int j = 0 ; j < m ; j ++){
            if(v[i][j] == M){
                cnt++;
                rows[i]++;
                columns[j] ++;
            }
        }
    }
    for(int i = 0 ; i <n;i++){
        for(int j = 0 ; j < m;j++){
            if(v[i][j]==M && rows[i] + columns[j] - 1 == cnt){
                cout<<M-1<<endl;
                return;
            }else if(v[i][j] != M && rows[i] + columns[j] == cnt){
                cout<<M-1<<endl;return;
            }
        }
    }
    cout<<M<<endl;


    

}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}
