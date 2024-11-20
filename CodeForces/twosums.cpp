#include "bits/stdc++.h"
using namespace std;
#define ll long long


void solve()
{
   
   vector<int> nums;
   int x,
   while(cin>>x){
        
        nums.push_back(x);
   }
   int target ;
   int n = nums.size();    
   cin>>target;
   int i = 0, j = n-1;
   while(i < j)
   {
        int s = nums[i]  + nums[j];
        if(s == target)
        {
            cout<<i<<" "<<j<<endl;
            return;
        }
        if(s < target) i++;
        else j--;

   }
   cout<<-1<<endl;
   return;
}
int main()
{
    int tc = 1;
    //cin>>tc;
    while(tc--)
    {
        solve();
    }
}