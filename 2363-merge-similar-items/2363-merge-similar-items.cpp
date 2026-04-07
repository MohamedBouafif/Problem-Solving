class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
        vector<vector<int>> ret;
        map<int,int> mp;
        int n = items1.size();
        int m = items2.size();
        n = max(n,m);

        for(int i = 0 ; i < n ;i++)
        {
            if(i < items1.size()){
                mp[items1[i][0]]+=items1[i][1];
            }
            if(i < items2.size())
                mp[items2[i][0]]+=items2[i][1];
        }
        for(auto e:mp)
            ret.push_back({e.first, e.second});
        return ret;
    }
};