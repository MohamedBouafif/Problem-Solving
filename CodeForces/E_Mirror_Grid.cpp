#include "bits/stdc++.h"
using namespace std;
using  ll =long long;
#define pb push_back
#define mp make_pair

template <typename T>
ostream &operator<<(ostream &os, const vector<T> &v) {
    for (T x : v) os << x << " ";
    return os;
}

template <typename T>
istream &operator>>(istream &is, vector<T> &v) {
    for (T &x : v) is >> x;
    return is;
}

void solve()
{
    int n;
    cin>>n;
    vector<string> v(n);
    cin>>v;
    ll cost = 0;
    for(int i = 0;i<n;i++)
    {
        string s1, s2,s3,s4;
        
        for(int j = i;j<n-i;j++){
            s1+=v[i][j];//lfou9
            s2+=v[j][i];//isar,
            s3+=v[n-i-1][j];//louta
            s4+=v[j][n-i-1]; //imin;
        }
        
        vector<string> comb = {s1,s4,s3,s2};
        ll mcost = 1e9;
        for(int j = 0; j<4;j++)
        {
            string S1 = comb[j];
            ll c = 0;//cost to make all strings similar to s
            
            
            
            for(int k = 0;k<4;k++)
            {
             
                string S = comb[k];
                if(j==0 && k==2)reverse(S1.begin(),S1.end());
                if(j==1&&k==2)reverse(S1.begin(),S1.end());
                if(j==2||j==3)
                {
                    if(k==0)reverse(S1.begin(),S1.end());
                    if(k==2)reverse(S1.begin(),S1.end());
                }
                
                
                
                cout<<S1<<endl;
                cout<<S<<endl;
                for(int l = 0;l<S1.size();l++)
                {
                    c+= abs((S1[l] - '0') - (S[l] - '0'));
                }

                
            }
            
            mcost = min(c,mcost) ;// cost of the minimum ops
            cout<<mcost<<endl;
        }
        cost+=mcost;
        
    }
    cout<<cost<<endl;
}

    


int main()
{
    int tc ;
    cin>>tc;
    while(tc--)
    {
        
        solve();
        
    }
}