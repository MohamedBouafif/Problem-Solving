#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    for (ll &x : a)
        cin >> x;
    k--;
    ll x = a[k];
    ll idx = -1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > a[k])
        {
            idx = i;
            break;
        }
    }
    if (idx < 0)
    {
        cout << n - 1 << endl;
    }

    else if (idx > k)
    {
        cout << idx - 1 << endl;
    }
    else
    {
        int idx2 = -1;
        for(int i = idx + 1 ; i < n; i++){
            if(a[i] > a[k]){
                idx2 = i;
                break;
            }
        }
        int gap_swap_zero =0;
        if (idx2 < 0 || idx2 > k )idx2 = idx;
        if(!idx){
            if(idx2 == idx)gap_swap_zero = k-1;
            else{
                gap_swap_zero = idx2 - 1;
            }
        }else{
            gap_swap_zero = idx -1;
        }
        int gap_swap_idx = 0;
        if(!idx){
            if(idx == idx2)
                gap_swap_idx = k - 1;
            else gap_swap_idx = idx2 -1;
        }else{
            if(idx != idx2)
                gap_swap_idx = idx2-idx;
            else{
                gap_swap_idx = k - idx;
            }
        }
        cout<<max(gap_swap_idx,gap_swap_zero)<<endl;


    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}
