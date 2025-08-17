#include<bits/stdc++.h>
using namespace std;
using ll = long long ;
set<int,greater<int>> divisors(int& n){
    set<int,greater<int>> divs;
    for(int i = 1; i<=n;i++){
        if(n%i == 0)divs.insert(i);
    }
    return divs;
}

void solve()
{  
    int n ;
    cin >> n;

    vector<int> v(n);
  
    map<int, set<int, greater<int>>> divisors_of_integers;
    map<int,int> mp;
    bool is_one = 0;
    for(int i = 0 ; i < n ;i++){
        cin >> v[i];
        if(v[i] == 1)is_one = 1;
        divisors_of_integers[v[i]] = divisors(v[i]);
        mp[v[i]]++;
    }
    if(is_one){
        cout<<n - mp[1]<<endl;
        return;
    }
    int commun_div = 1;
    for(int divisor: divisors_of_integers[v[0]]){
        bool commun_div_found = 1;
        for(auto e:divisors_of_integers){
            set<int, greater<int>> divs = e.second;
            if(!divs.count(divisor))
                commun_div_found = 0;
        }
        if(commun_div_found){
            commun_div = divisor;
            break;
        }
    }
    int min_mooves = 0;
    for(int i = 0 ;i < n ;i++)
    {
        int k = 0;
        for(int j = 0; j < n ;j++){
            if(j == i)continue;
            int x = v[i];
            while(gcd(x,v[j]) != commun_div){
                
                v[i] = gcd(x,v[j]);
                if(v[i]==x)break;
                k++;
                x = v[i];
                
            }
        }
        min_mooves = min(k,min_mooves);

    }
    cout<< n - 1 + min_mooves<<endl;
    
}
int main()
{
    int t = 1;
    cin>>t;
    while(t--)
    {
        solve();
    }
}