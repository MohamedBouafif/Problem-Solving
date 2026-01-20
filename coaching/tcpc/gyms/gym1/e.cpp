#include<bits/stdc++.h>
using namespace std;

int main(){
    int tc;
    cin >> tc;
    for(int i = 1; i<= tc; i++){
        int n,m,r,f;
        cin >> n >> m >> r >> f;

        long long  sum = n*(n+1) * r;
        cout << "? ";
        
        for(int j = 1; j<=n ; j++){
            cout << j << " ";
        }
        cout << endl;
        long long real_sum ;
        cin >> real_sum;
        cout << (sum - real_sum)/ (r - f)<<endl;

    }
}