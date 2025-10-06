class Solution {
public:
    int dx[8] = {1,-1,0,0,1,1,-1,-1};
    int dy[8] = {0,0,1,-1,1,-1,1,1};
    int n,m;
    vector<vector<pair<int,int>>> parent;
    vector<vector<int>> rank;
    pair<int,int> left = {-1,-1} , right = {n,m};

    void init(){
        for(int i = 0 ;i < n ;i++)
            for(int j = 0 ; j < m; j++){
                parent[i][j] = {i,j};
                rank[i][j] = 1;
            }
    }
    pair<int,int> find(pair<int,int>p1){

        if(parent[p1.first][p1.second] != p1)
            return parent[p1.first][p1.second] = find(parent[p1.first][p1.second]);

        return parent[p1.first][p1.second] = p1;
    }
    int isleft(pair<int,int>p1){
        pair<int,int> parent1 = parent[p1.first][p1.second];
        if (p1 == left || parent1 == left){
            parent[p1.first][p1.second] = left;
            return -1;
        }
        return 0;
    }
    int isright(pair<int,int>p1){
        pair<int,int> parent1 = parent[p1.first][p1.second];
        if (p1 == right || parent1 == right){
            parent[p1.first][p1.second] = right;
            return 1;
        }
        return 0;
    }
    void unionn(pair<int,int>p1, pair<int,int>p2){
        pair<int,int> parent1 = find(p1) , parent2 = find(p2);

        if (isleft(p1))return;
        if (isleft(p2))return;
        if (isright(p1))return;
        if (isright(p2))return;

        if(rank[parent1.first][parent2.second] < rank[parent2.first][parent2.second]){
            parent[parent1.first][parent1.second] = parent[parent2.first][parent2.second];
            rank[parent2.first][parent2.second]+= rank[parent1.first][parent1.second];
            rank[parent1.first][parent1.second] = 0;
        }else{
            parent[parent2.first][parent2.second] = parent[parent1.first][parent1.second];
            rank[parent1.first][parent1.second]+= rank[parent2.first][parent2.second];
            rank[parent2.first][parent2.second] = 0;
        }
    }

    bool stop(pair<int,int> p1 , pair<int,int>p2){
        if(parent[p1.first][p1.second] == left && parent[p2.first][p2.second]==right)return true;
        if(parent[p1.first][p1.second] == right && parent[p2.first][p2.second]==left)return true;
        return false;
    }

    int latestDayToCross(int row, int col, vector<vector<int>>& cells) {
        n = row;
        m = col;
        
        parent = vector<vector<pair<int,int>>>(n,vector<pair<int,int>>(m));
        rank = vector<vector<int>>(n,vector<int>(m));
        init();

        int ans = 1;
        
        set<pair<int,int>> s;
        
        for(int i = 0 ;i < cells.size(); i++){
            ans++;
            if(!s.empty()){
                for(int  j = 0 ; j < 8 ;j++){
                    pair<int,int> neighboor = {cells[i][0] + dx[j], cells[i][1] + dy[j]};
                    if(s.find(neighboor) != s.end()){

                        if(stop(neighboor,{cells[i][0], cells[i][1]})){
                            return ans-1;
                        }
                        unionn(neighboor , {cells[i][0], cells[i][1]});

                    }
                } 
            }
            s.insert({cells[i][0], cells[i][1]});
        }
        return ans-1;
    }
};

int main(){
    
}