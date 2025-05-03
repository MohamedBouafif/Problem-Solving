class Solution {
    public:
        int minDominoRotations(vector<int>& tops, vector<int>& bottoms) {
            int n = tops.size();
            map<int,int> occ;
            for(int i = 0 ; i < n;i++){
                occ[tops[i]]++;
                if(tops[i] != bottoms[i])occ[bottoms[i]]++;
            }
            int ans = INT_MAX;
            for(auto e:occ){
                if(e.second + occ_bot[e.first] - facing[e.first] == n){
                    ans = min(ans, min(e.second - facing[e.first],occ_bot[e.first] - facing[e.first] ));
                }
            }
            if(ans == INT_MAX)return -1;
            return ans;
    
    
        }
    };