#include <bits/stdc++.h>
using namespace std;
using ll = long long ;

ll nb_of_ballons_made_by_one_assistant_by_time(ll &time, vector<ll> &v)
{

    ll t = v[0], z = v[1], y = v[2];
    ll l = 0, r = 2e9 +1;

    while (r > l + 1)
    {
        ll m = (r - l) / 2 + l;
        if (m * t + (m - 1) * y > time)
        {
            r = m;
        }
        else
        {
            l = m;
        }
    }

    return l * z;
}
int main()
{
    ll m, n;
    cin >> m >> n;
    vector<vector<ll>> v(n, vector<ll>(3));

    for (ll i = 0; i < n; i++)
    {
        cin >> v[i][0] >> v[i][1] >> v[i][2];
    }

    ll l = 0, r = 2e9+1;
    vector<ll> cnt(n,0);
    if(m!=0){

        
        while (r > l + 1)
        {
            ll mid = l + (r - l) / 2;
            ll nb_of_ballons_made_by_all_assistants_by_time = 0;
            vector<ll> current_cnt(n);
            for (ll i = 0; i < n; i++)
            {
                ll nb = nb_of_ballons_made_by_one_assistant_by_time(mid, v[i]);
                nb_of_ballons_made_by_all_assistants_by_time += nb;
                current_cnt[i] = nb;
            }
            if (nb_of_ballons_made_by_all_assistants_by_time >= m)
            {
                r = mid;
                ll x = m;
                for(int i = 0 ; i < n;i++){cnt[i]  = min(x,current_cnt[i]);x-=cnt[i];}
            }
            else
            {
                l = mid;
            }
        }
        cout << r << endl;
    }else{cout<<0<<endl;}
    for (ll &x : cnt)
    {
        cout << x << " ";
    }
}