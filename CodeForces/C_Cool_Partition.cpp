#include "bits/stdc++.h"
using namespace std;
using ll = long long;
#define pb push_back

void solve()
{
    /*
        int this solution we compute the next occurence of each element 
        at each segment we stop when we reach the maximum next occurence of the elements in the last segment
        -> like that i innsure that i take all the occurence of elements of all the last segments i created

        
        int n;
        cin >> n;
        vector<int> v(n);
        map<int, vector<int> > mp;
        for(int i  = 0 ; i < n ;i++)
        {
            cin >> v[i]; 
            mp[v[i]].push_back(i);
        } 
        map<int,int> next_occ;
        for(auto& e:mp)
        {
            vector<int>& w = e.second;
            int m = w.size();
            for(int i = 0 ; i < m - 1;i++)
            {
                next_occ[w[i]]  = w[i + 1];
            }
            next_occ[w[m-1]] = n;
        }
        int ans = 0;

        int start = 0;
        int next_start = 0;
        while(next_start !=n){
            ans ++;
            int current_end = next_start;
            for(int j = start ; j<= current_end;j++)
                next_start = max(next_start , next_occ[j]);
            start = current_end;
        }
        cout<<ans<<endl;
    */
    int n;
    cin >> n;
    set<int> s;
    vector<int> v(n), distinct(n);
    for(int i = 0 ; i < n ;i++){
        cin >> v[i];
        s.insert(v[i]);
        distinct[i] = s.size();
    }
    int ans = 0;
    int i = n - 1;
    while(i >= 0){
        set<int> ss;
        int j  = i;
        while(ss.size() < distinct[j]){
            ss.insert(v[i]);
            i--;
        }
        ans ++;
    }
    cout<<ans<<endl;
}

int main()
{
    int tc;
    cin >> tc;
    // tc =1;
    while (tc--)
    {

        solve();
    }
}