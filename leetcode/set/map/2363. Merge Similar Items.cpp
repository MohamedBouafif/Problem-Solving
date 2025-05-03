#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
            map<int, long long> mp;
    
        for (int i = 0; i < items1.size(); i++)
        {
            mp[items1[i][0]] += items1[i][1];
        }
    
        for (int i = 0; i < items2.size(); i++)
        {
            mp[items2[i][0]] += items2[i][1];
        }
    
        
    
        vector<vector<int>> ret(mp.size(), vector<int>(2));
        int i = 0;
        for (auto e:mp)
        {
            ret[i][0] = e.first; // weight
            ret[i][1] = e.second;  // value
            i++;
        }
    
        return ret;
        }
    };