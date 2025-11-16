#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    int n;
    cin >> n;
    vector<ll> v(n),  pref_sum(n,0), count_odd(n,0);

    for(int i = 0 ; i < n;i++){
        cin >> v[i];
        if(i == 0){
            pref_sum[i] =  v[i];
            count_odd[i] = v[i]%2 ? 1:0;
            cout << v[i] << " ";
        }
        else{
            pref_sum[i]=pref_sum[i-1] + v[i];
            count_odd[i] = count_odd[i-1] ;
            if(v[i]%2)count_odd[i]++;
            
            if(!count_odd[i])cout << pref_sum[i] << " ";
            else {
                if(count_odd[i] == 1)cout<<pref_sum[i] - 1<<" ";
                else if(count_odd[i] == 2) cout<< pref_sum[i]  << " ";
                else {
                    int x = 0;
                    if(count_odd[i]%3 == 0){
                        x = count_odd[i]/3;
                    }else if(count_odd[i]%3 == 2){
                        x = count_odd[i]/3;
                    }else{
                        x = count_odd[i]/3 + 1;
                    }
                    cout<<pref_sum[i] - x <<" ";
                }
            }
        }
    }
    
    cout<<endl;
    
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}
