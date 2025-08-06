#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve()
{
    int n;
    cin >> n;
    vector<pair<int,int>> a(n) , b(n);
    for(int i = 0; i < n;i++){
        cin>>a[i].first;
        a[i].second = i;
    }
    for(int i = 0; i < n;i++){
        cin>>b[i].first;
        b[i].second = i;
    }
    int k =0;
    vector<int> A,B,AB;
    for(int i = 0 ; i < n; i++){
        for(int j = 0; j < n - 1; j++){
            if(a[j].first> a[j+1].first){
                k++;
                int temp = a[j].first;
                A.push_back(j+1);
                a[j].first = a[j+1].first;
                a[j+1].first = temp;
            }
            
        }
    }
    for(int i = 0 ; i < n; i++){
        for(int j = 0; j < n - 1; j++){
            if(b[j].first> b[j+1].first){
                k++;
                int temp = b[j].first;
                B.push_back(j+1);
                b[j].first = b[j+1].first;
                b[j+1].first = temp;
            }
        }
    }
    for(int i = 0 ; i < n;i++){
        if(a[i].first > b[i].first){
            k++;
            int temp = a[i].first;
            AB.push_back(i+1);
            a[i].first = b[i].first;
            b[i].first = temp;
        }
    }
    cout<<k<<endl;
    for(auto e:A){
        cout<<1<<" "<<e<<endl;
    }
    for(auto e:B){
        cout<<2<<" "<<e<<endl;
    }
    for(auto e:AB){
        cout<<3<<" "<<e<<endl;
    }



}
int main()
{
    int t;
    cin>>t;
 
    while (t--)
    {
        solve();
    }
}
