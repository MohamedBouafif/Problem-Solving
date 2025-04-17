#include <bits/stdc++.h>
using namespace std;
using ll = long long ;

void solve()
{
    int n;
    cin>>n;
    vector<ll> a(n);
    for(auto &x:a)cin>>x;
    ll sum = 0;
    multiset<ll> negatives ; 
    set<int> answers;
    int potions = 0;
    for(int  i = 0;i < n;i++){
        if(a[i]>=0)
        {
            sum+=a[i];
            potions++;
            
        }
        else
        {
            /*
                my mistake: 
                    ken nil9a fil set chkoun ynajm yraaja3ni lil positive n3awedh bih
                    sinon nsit bch n5amem ili kawnou il a[i] ynajm ykoun ki ne5dhou 
                    houwa ykoun a7sen mil begin 5ater ykoun akber minou 
            */
            if(sum + a[i]>=0)
            {
                potions++;
                sum+=a[i];
                negatives.insert(a[i]);
            }
            else{
                
               sum+=a[i];
               negatives.insert(a[i]);
               sum-=*negatives.begin();
               negatives.erase(negatives.begin());
            }
            
        }
        
        
    }
    cout<<potions<<endl;

    
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int q;
    q = 1;
    
    while (q--)
    {
        solve();
    }
}
