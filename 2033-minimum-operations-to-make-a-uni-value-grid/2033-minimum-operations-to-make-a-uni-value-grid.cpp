class Solution {
public:
    int minOperations(vector<vector<int>>& grid, int x) {
        int d = grid[0][0]%x;
        int n = grid.size(), m = grid[0].size();
        int ans = 0;
        int position_number_to_select = n*m/2;
        vector<int> v;
        for(int i = 0; i < n ; i++)
        {
            for(int j = 0; j < m; j++){
                if(grid[i][j]%x != d){
                    return -1;
                }
                ans += grid[i][j];
                v.push_back(grid[i][j]);
            }
        }
        sort(v.begin(), v.end());
        int number_to_select = v[position_number_to_select];
        int cost = 0;
        for(int i = 0; i< n ;i++){
            for(int j = 0 ; j < m;j++){
                cost +=abs( grid[i][j] - number_to_select)/x;
            }
        }
        return cost;


    }
};