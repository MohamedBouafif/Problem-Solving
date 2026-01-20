#include<bits/stdc++.h>
using namespace std;

int main(){
    int tc;
    cin >> tc;
    for(int i = 1; i<= tc; i++){
        int n,m,k;
        cin >> n >> m >> k;

        vector<int> v(m);
        for(int&x :v)cin >> x;

        int minimum_waiting_time = 1e9;

        for(int i = 0; i < m; i++){
            int q = v[i]/k;
            int c = v[i]%k ? q + 1  :q;
            minimum_waiting_time = c%2 ? 0 : min(minimum_waiting_time,c*k + 1 - v[i]) ;
        }
        cout << n + minimum_waiting_time << endl;
    }
}